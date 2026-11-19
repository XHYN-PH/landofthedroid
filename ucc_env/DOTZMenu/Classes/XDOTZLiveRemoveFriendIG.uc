//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveRemoveFriendIG extends XDOTZLiveRemoveFriend;

/*****************************************************************
 * Button A pressed
 *****************************************************************
 */

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Remove_Friend();
    BBGuiController(Controller).CloseTo ('XDOTZLiveFriendsListIG');
}

/*****************************************************************
 * Default properties
 *****************************************************************
 */

defaultproperties
{
     __OnKeyEvent__Delegate=XDOTZLiveRemoveFriendIG.HandleKeyEvent
}
