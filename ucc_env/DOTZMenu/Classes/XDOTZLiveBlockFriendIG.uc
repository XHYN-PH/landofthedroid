//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveBlockFriendIG extends XDOTZLiveBlockFriend;

/*****************************************************************
 * Button A pressed
 *****************************************************************
 */

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Block_Friend_Request();
    BBGuiController(Controller).CloseTo ('XDOTZLiveFriendsListIG');
}

/*****************************************************************
 * Default properties
 *****************************************************************
 */

defaultproperties
{
     __OnKeyEvent__Delegate=XDOTZLiveBlockFriendIG.HandleKeyEvent
}
