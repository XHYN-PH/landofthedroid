class FixedWeapon extends RangedWeapon
   hidedropdown;


simulated function ToggleAimedMode() {
}

simulated function AltFire( float Value ) {
   super.AltFire(Value);
}

defaultproperties
{
     InventoryGroup=0
}
