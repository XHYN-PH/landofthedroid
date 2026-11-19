import struct

def parse_package(filename):
    with open(filename, "rb") as f:
        data = f.read()

    tag, ver, lic, flags, name_count, name_offset, export_count, export_offset, import_count, import_offset = struct.unpack("<IHHIIIIIII", data[:36])
    print(f"File: {filename}, Size: {len(data)}, Ver: {ver}/{lic}")
    print(f"Names: {name_count} @ {hex(name_offset)}")
    print(f"Exports: {export_count} @ {hex(export_offset)}")
    print(f"Imports: {import_count} @ {hex(import_offset)}")

    # Parse names
    pos = name_offset
    names = []
    for i in range(name_count):
        l = data[pos]; pos += 1
        if l >= 0x80: l = l & 0x7f
        n = data[pos:pos+l-1].decode("latin1", errors="replace")
        names.append(n)
        pos += l + 4 # skip string null and flags

    # Read compact int helper
    def read_compact_int(p):
        b0 = data[p]; p += 1
        sign = b0 & 0x80; more = b0 & 0x40; val = b0 & 0x3f
        if more:
            b1 = data[p]; p += 1; more = b1 & 0x80; val |= (b1 & 0x7f) << 6
            if more:
                b2 = data[p]; p += 1; more = b2 & 0x80; val |= (b2 & 0x7f) << 13
                if more:
                    b3 = data[p]; p += 1; more = b3 & 0x80; val |= (b3 & 0x7f) << 20
                    if more:
                        b4 = data[p]; p += 1; val |= b4 << 27
        if sign: val = -val
        return val, p

    # Parse exports
    pos = export_offset
    exports = []
    for i in range(export_count):
        cls, pos = read_compact_int(pos)
        super_idx, pos = read_compact_int(pos)
        outer, pos = read_compact_int(pos)
        name_idx, pos = read_compact_int(pos)
        obj_flags = struct.unpack("<I", data[pos:pos+4])[0]; pos += 4
        serial_size, pos = read_compact_int(pos)
        serial_offset = 0
        if serial_size > 0:
            serial_offset, pos = read_compact_int(pos)
        exports.append({
            "idx": i,
            "name": names[name_idx] if 0 <= name_idx < len(names) else f"name_{name_idx}",
            "serial_size": serial_size,
            "serial_offset": serial_offset,
            "outer": outer,
            "class": cls
        })

    return data, names, exports

if __name__ == "__main__":
    orig_data, names, orig_exports = parse_package("/home/xhyn/.gemini/antigravity/scratch/lotd-android/DOTZMenu.u.orig")
    for exp in orig_exports:
        if "JoinGameButton" in exp["name"] or "MainMenu" in exp["name"]:
            print(f"Export {exp['idx']}: {exp['name']}, Offset: {hex(exp['serial_offset'])}, Size: {exp['serial_size']}")
