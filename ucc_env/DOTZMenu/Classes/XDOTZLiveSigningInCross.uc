//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveSigningInCross extends XDOTZLiveSigningIn;

defaultproperties
{
     MultiplayerMenu="DOTZMenu.XDOTZLiveGettingMatchCross"
     ErrorMenu="DOTZMenu.XDOTZLiveErrorCross"
     __OnKeyEvent__Delegate=XDOTZLiveSigningInCross.HandleKeyEvent
}
