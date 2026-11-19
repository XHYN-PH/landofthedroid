/**
 * DOTZMainMenu - the main menu for DOTZ, based on the Warfare
 *              "GUI" package.
 *
 * @author  Neil Gower (neilg@digitalextremes.com)
 * @version $Revision: 1.18 $
 * @date    Sept 2003
 */
class DOTZMainMenuDemo extends DOTZDemo;



//Page components
var Automated GuiButton  SinglePlayerButton;
var Automated GuiButton  JoinButton;
var Automated GuiButton  HostButton;
var Automated GuiButton  ProfilesButton;
var Automated GuiButton  SettingsButton;
var Automated GuiButton  QuitButton;

//configurable stuff
var string SinglePlayerMenu;
var string JoinMenu;
var string HostMenu;
var string ProfilesMenu;
var string SettingsMenu;
var string QuitMenu;

var sound ClickSound;
var string LevelNameTxt;


 /*****************************************************************
  * InitComponent
  *****************************************************************
  */
function InitComponent( GUIController MyController, GUIComponent MyOwner ) {
   Super.Initcomponent(MyController, MyOwner);
   // init my components...

   JoinButton.MenuState = MSAT_Disabled;
   HostButton.MenuState = MSAT_Disabled;
   ProfilesButton.MenuState = MSAT_Disabled;
}


/**
 * Happens every time the menu is opened, not just the first.
 */
event Opened( GUIComponent Sender ) {
    super.Opened( Sender );
}

/*****************************************************************
 * HandleParameters
 * When open menu get's called, the parameter values are supplied
 * here.
 *
 * Param1 - the menu to load
 * Param2 - the name of the sub menu to load on top of the first menu
 *****************************************************************
 */
event HandleParameters( String param1, String param2 ) {

}


/*****************************************************************
 * Closed
 *****************************************************************
 */
event Closed(GUIComponent Sender, bool bCancelled) {
   Super.Closed(Sender,bCancelled);
   Controller.MouseEmulation(false);
}



/*****************************************************************
 * ButtonClicked
 * Notification that the user clicked a component on the page
 *****************************************************************
 */
function bool ButtonClicked(GUIComponent Sender) {
    local GUIButton Selected;

    if (GUIButton(Sender) != None) Selected = GUIButton(Sender);
    if (Selected == None) return false;

    if (PlayerOwner().Pawn != None) {
       PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
    }

    switch (Selected)
    {

        //SINGLEPLAYER GAME BUTTON
        case SinglePlayerButton:
            Controller.OpenMenu(SinglePlayerMenu);
               // Display loading screen
             //Controller.OpenMenu("DOTZMenu.XDOTZLoadingMenu",LevelNameTxt);
             PlayerOwner().Level.ServerTravel("CH10.dz",false);
            //Console(Controller.Master.Console).ConsoleCommand( NewGameLevel );
            //Controller.CloseMenu(false);
            //Controller.OpenMenu("DOTZMenu.DOTZLoadingMenu",,"DOTZTStory.Chapter1.1Page1"); //,"DOTZTStory.Chapter11.11Load");
            return true;

        //JOIN GAME BUTTON
        case JoinButton:
            return true; //Controller.OpenMenu(JoinMenu); break;

        //HOST BUTTON
        case HostButton:
            return true; // Controller.OpenMenu(HostMenu); break;

        //PROFILES BUTTON
        case ProfilesButton:
            return true; // Controller.OpenMenu(ProfilesMenu); break;

        //SETTINGS BUTTON
        case SettingsButton:
            return Controller.OpenMenu(SettingsMenu); break;

        //QUIT BUTTON
        case QuitButton:
            return Controller.OpenMenu(QuitMenu); break;
    }
   return false;
}


/*****************************************************************
 * HandleKeyEven
 * It was like this when I got here
 *****************************************************************
 */
function bool HandleKeyEvent(out byte Key,out byte State,float delta) {

   return true;
}


/*****************************************************************
 * NotifyLevelChange
 *
 *****************************************************************
 */
event NotifyLevelChange() {
   Controller.CloseMenu(true);
}



//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     Begin Object Class=GUIButton Name=SinglePlayerButton_btn
         Caption="Play Demo"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Play Land of the Dead Single Player!"
         WinTop=0.500000
         WinLeft=0.325000
         WinWidth=0.350000
         WinHeight=0.080000
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenuDemo.ButtonClicked
         Name="SinglePlayerButton_btn"
     End Object
     SinglePlayerButton=GUIButton'DOTZMenu.DOTZMainMenuDemo.SinglePlayerButton_btn'
     Begin Object Class=GUIButton Name=JoinGameButton_btn
         Caption="Play Online / LAN Game"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Join a Land of the Dead Multiplayer match."
         WinTop=0.550000
         WinLeft=0.325000
         WinWidth=0.350000
         WinHeight=0.080000
         TabOrder=1
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenuDemo.ButtonClicked
         Name="JoinGameButton_btn"
     End Object
     JoinButton=GUIButton'DOTZMenu.DOTZMainMenuDemo.JoinGameButton_btn'
     Begin Object Class=GUIButton Name=HostGameButton_btn
         Caption="Host Multiplayer Game"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Set up a Land of the Dead Multiplayer match."
         WinTop=0.600000
         WinLeft=0.325000
         WinWidth=0.350000
         WinHeight=0.080000
         TabOrder=1
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenuDemo.ButtonClicked
         Name="HostGameButton_btn"
     End Object
     HostButton=GUIButton'DOTZMenu.DOTZMainMenuDemo.HostGameButton_btn'
     Begin Object Class=GUIButton Name=ProfilesButton_btn
         Caption="Profiles"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Change your profile information."
         WinTop=0.650000
         WinLeft=0.325000
         WinWidth=0.350000
         WinHeight=0.080000
         TabOrder=1
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenuDemo.ButtonClicked
         Name="ProfilesButton_btn"
     End Object
     ProfilesButton=GUIButton'DOTZMenu.DOTZMainMenuDemo.ProfilesButton_btn'
     Begin Object Class=GUIButton Name=settingsButton_btn
         Caption="Settings"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Change your game settings."
         WinTop=0.700000
         WinLeft=0.250000
         WinWidth=0.350000
         WinHeight=0.080000
         TabOrder=3
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenuDemo.ButtonClicked
         Name="settingsButton_btn"
     End Object
     SettingsButton=GUIButton'DOTZMenu.DOTZMainMenuDemo.settingsButton_btn'
     Begin Object Class=GUIButton Name=QuitButton_btn
         Caption="Quit"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Exit the game."
         WinTop=0.750000
         WinLeft=0.250000
         WinWidth=0.350000
         WinHeight=0.080000
         TabOrder=1
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenuDemo.ButtonClicked
         Name="QuitButton_btn"
     End Object
     QuitButton=GUIButton'DOTZMenu.DOTZMainMenuDemo.QuitButton_btn'
     SinglePlayerMenu="DOTZMenu.DOTZSPMainMenu"
     JoinMenu="DOTZMenu.DOTZMultiplayer"
     HostMenu="DOTZMenu.DOTZBaseCreateMatch"
     ProfilesMenu="DOTZMenu.DOTZProfileMenu"
     SettingsMenu="DOTZMenu.DOTZSettingsMenu"
     QuitMenu="DOTZMenu.DOTZQuitConfirm"
     ClickSound=Sound'DOTZXInterface.Select'
     LevelNameTxt="Loading... Theater"
     Background=Texture'DOTZTInterface.Menu.MainMenuBackGround'
     __OnKeyEvent__Delegate=DOTZMainMenuDemo.HandleKeyEvent
}
