//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveCancelFriendReqPLIG extends XDOTZLiveCancelFriendReq;

/*****************************************************************
 * Button A pressed
 *****************************************************************
 */

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Cancel_Friend_Request();
    BBGuiController(Controller).CloseTo ('XDOTZLiveFriendsListIG');
}

/*****************************************************************
 * Default properties
 *****************************************************************
 */

defaultproperties
{
     __OnKeyEvent__Delegate=XDOTZLiveCancelFriendReqPLIG.HandleKeyEvent
}
