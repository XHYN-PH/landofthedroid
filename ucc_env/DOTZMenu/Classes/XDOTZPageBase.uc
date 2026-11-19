//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZPageBase extends GUIPage;

var bool bSignInPump;

/*****************************************************************
 * This gets called every 1/2 second
 *****************************************************************
 */

function Periodic ()
{
    // Pumping auto sign in
    if (!class'UtilsXbox'.static.Is_Signed_In () &&
        !class'UtilsXbox'.static.Is_Auto_Need_Password() &&
        !class'UtilsXbox'.static.Is_Auto_Failed () &&
        bSignInPump) {

        // Pump sign in
        class'UtilsXbox'.static.Sign_In_Pump();

        // Clear any errors
        class'UtilsXbox'.static.Set_Last_Error(0);
    }
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
 * Default properties
 *****************************************************************
 */


event Opened( GUIComponent Sender ) {
    local int i;
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

defaultproperties
{
     bSignInPump=True
}
