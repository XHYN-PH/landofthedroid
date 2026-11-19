//-----------------------------------------------------------
//
//-----------------------------------------------------------
class XDOTZCharacterSelectInvited extends XDOTZCharacterSelect;

function DoButtonA ()
{
    class'UtilsXbox'.static.Friends_Accept_Invitation();

    // Reboot to live client
    class'UtilsXbox'.static.Set_Reboot_Type(4);   // Is live client

    // Display loading screen
    //Controller.OpenMenu("DOTZMenu.XDOTZLoadingMenu");

    // Joining a friend
    class'UtilsXbox'.static.Live_Client_Set_Joining_Friend(true);
    class'UtilsXbox'.static.Live_Client_Set_Joining_Cross(false);

    // Reboot!
    //Console(Controller.Master.Console).ConsoleCommand("reboot");  // URL not part of command on xbox
    // 0.0.0.0 Gets replaced with the real IP after reboot
    // PlayerOwner().Level.ServerTravel("0.0.0.0", false);

    super.DoButtonA();
}

defaultproperties
{
     JackHeadTextures(0)=Shader'DOTZTHumans.JackSlade.JackSladeHeadShaderA'
     JackHeadTextures(1)=Shader'DOTZTHumans.JackSlade.JackSladeHeadShaderB'
     JackHeadTextures(2)=Shader'DOTZTHumans.JackSlade.JackSladeHeadShaderC'
     JackBodyTextures(0)=Shader'DOTZTHumans.JackSlade.JackSladeBodyShaderA'
     JackBodyTextures(1)=Shader'DOTZTHumans.JackSlade.JackSladeBodyShaderB'
     JackBodyTextures(2)=Shader'DOTZTHumans.JackSlade.JackSladeBodyShaderC'
     OtisHeadTextures(0)=Shader'DOTZTHumans.Otis.OtisHeadShaderA'
     OtisHeadTextures(1)=Shader'DOTZTHumans.Otis.OtisHeadShaderB'
     OtisHeadTextures(2)=Shader'DOTZTHumans.Otis.OtisHeadShaderC'
     OtisBodyTextures(0)=Shader'DOTZTHumans.Otis.OtisBodyShaderA'
     OtisBodyTextures(1)=Shader'DOTZTHumans.Otis.OtisBodyShaderB'
     OtisBodyTextures(2)=Shader'DOTZTHumans.Otis.OtisBodyShaderC'
     __OnDraw__Delegate=XDOTZCharacterSelectInvited.InternalDraw
     __OnKeyEvent__Delegate=XDOTZCharacterSelectInvited.HandleKeyEvent
}
