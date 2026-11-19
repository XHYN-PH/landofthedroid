//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLivePasswordCross extends XDOTZLivePassword;

defaultproperties
{
     ErrorMenu="DOTZMenu.XDOTZLiveErrorCross"
     SigningInMenu="DOTZMenu.XDOTZLiveSigningInCross"
     __OnKeyEvent__Delegate=XDOTZLivePasswordCross.HandleKeyEvent
}
