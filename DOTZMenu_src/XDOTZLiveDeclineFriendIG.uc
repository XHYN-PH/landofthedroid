//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveDeclineFriendIG extends XDOTZLiveDeclineFriend;

/*****************************************************************
 * Button A pressed
 *****************************************************************
 */

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Deny_Friend_Request();
    BBGuiController(Controller).CloseTo ('XDOTZLiveFriendsListIG');
}

/*****************************************************************
 * Default properties
 *****************************************************************
 */

defaultproperties
{
     __OnKeyEvent__Delegate=XDOTZLiveDeclineFriendIG.HandleKeyEvent
}
