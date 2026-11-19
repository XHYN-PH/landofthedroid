//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZLiveSignInCross extends XDOTZLiveSignIn;

defaultproperties
{
     PasswordMenu="DOTZMenu.XDOTZLivePasswordCross"
     ErrorMenu="DOTZMenu.XDOTZLiveErrorCross"
     SigningInMenu="DOTZMenu.XDOTZLiveSigningInCross"
     __OnKeyEvent__Delegate=XDOTZLiveSignInCross.HandleKeyEvent
}
