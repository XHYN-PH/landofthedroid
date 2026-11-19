//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveDeclineInvIG extends XDOTZLiveDeclineInv;

/*****************************************************************
 * Button A pressed
 *****************************************************************
 */

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Deny_Invitation();
    BBGuiController(Controller).CloseTo ('XDOTZLiveFriendsListIG');
}

/*****************************************************************
 * Default properties
 *****************************************************************
 */

defaultproperties
{
     __OnKeyEvent__Delegate=XDOTZLiveDeclineInvIG.HandleKeyEvent
}
