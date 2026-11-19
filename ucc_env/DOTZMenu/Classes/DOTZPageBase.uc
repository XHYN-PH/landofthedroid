//-----------------------------------------------------------
//
//-----------------------------------------------------------
class DOTZPageBase extends GUIPage;

var bool accept_input;
var float period;

/*****************************************************************
 * Happens every time the menu is opened, not just the first.
 *****************************************************************
 */
event Opened( GUIComponent Sender ) {
    local int i;
    accept_input = false;
    Log("Not Accepting input...");
    SetTimer(0.1,false);
    if (Controller != None) {
        Controller.bHideMouseCursor = true;
        for (i = 0; i < Controller.MouseCursors.Length; i++) {
            Controller.MouseCursors[i] = None;
        }
    }
    if (PlayerOwner() != None) {
        PlayerOwner().ConsoleCommand("menu_active 1");
    }
}

function InitComponent( GUIController MyController, GUIComponent MyOwner ) {
    local int i;
    Super.InitComponent(MyController, MyOwner);
    if (MyController != None) {
        MyController.bHideMouseCursor = true;
        for (i = 0; i < MyController.MouseCursors.Length; i++) {
            MyController.MouseCursors[i] = None;
        }
    }
}

event Closed( GUIComponent Sender, bool bCancelled ) {
    Super.Closed( Sender, bCancelled );
    if (PlayerOwner() != None) {
        if (Controller != None && Controller.MenuStack.Length == 0) {
            PlayerOwner().ConsoleCommand("menu_active 0");
        }
    }
}

/*****************************************************************
 * Introduces a short pause before accepting keystrokes
 *****************************************************************
 */

function Timer ()
{
    if (accept_input == false ) {
        accept_input = true;
        SetTimer(period,true);
        Log("Accepting input...");
    } else {
        Periodic();
    }
}

function Periodic()
{

}

/*****************************************************************
 * Encodes a string so it it safe to pass on the URL
 *****************************************************************
 */

function string EncodeStringURL(string s) {
    local string r;
    local string c;
    local int i;

    for (i = 0; i < Len(s); ++i) {
        c = Mid(s,i,1);

        if (c == " ") {
            r = r $ "_";
        } else {
            r = r $ c;
        }
    }

    return r;
}

/*****************************************************************
 * Decode a string from the command line
 *****************************************************************
 */

function string DecodeStringURL(string s) {
    local string r;
    local string c;
    local int i;

    for (i = 0; i < Len(s); ++i) {
        c = Mid(s,i,1);

        if (c == "_") {
            r = r $ " ";
        } else {
            r = r $ c;
        }
    }

    return r;
}

/*****************************************************************
 * Sorts a list of save games
 *****************************************************************
 */

function bool SaveGameName_IsGreater(string a, string b)
{
    local string a_comp;
    local string b_comp;
    local int i;

    if (InStr(a, "<New Save Game>") != -1)        return true;
    else if (InStr(b, "<New Save Game>") != -1)   return false;

    if (InStr(a, "Quicksave") != -1)        return true;
    else if (InStr(b, "Quicksave") != -1)   return false;

    if (InStr(a, "Autosave") != -1)        return true;
    else if (InStr(b, "Autosave") != -1)   return false;

    // Extract numeric part of a
    for (i = 0; i < Len(a); ++i)
        if (InStr("0123456789",Mid(a,i,1)) != -1)
            a_comp = a_comp $ Mid(a,i,1);

    // Extract numeric part of b
    for (i = 0; i < Len(b); ++i)
        if (InStr("0123456789",Mid(b,i,1)) != -1)
            b_comp = b_comp $ Mid(b,i,1);

    return float(a_comp) > float(b_comp);
}

function Sort_Games(BBListBox games)
{
    local int i,j;

    Log("Sorting games");

    for (j = 0; j < games.List.ItemCount; ++j) {
        for (i = 0; i < games.List.ItemCount-1; ++i) {
            if ( !SaveGameName_IsGreater(games.List.GetItemAtIndex(i), games.List.GetItemAtIndex(i+1)) ) {
                games.List.Swap(i,i+1);
            }
        }
    }

}

defaultproperties
{
     period=0.500000
}
