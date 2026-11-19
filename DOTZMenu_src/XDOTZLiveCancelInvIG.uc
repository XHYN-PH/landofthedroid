//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveCancelInvIG extends XDOTZLiveCancelInv;

/*****************************************************************
 * Button A pressed
 *****************************************************************
 */

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Cancel_Invitation();
    BBGuiController(Controller).CloseTo ('XDOTZLiveFriendsListIG');
}

/*****************************************************************
 * Default properties
 *****************************************************************
 */

defaultproperties
{
     __OnKeyEvent__Delegate=XDOTZLiveCancelInvIG.HandleKeyEvent
}
