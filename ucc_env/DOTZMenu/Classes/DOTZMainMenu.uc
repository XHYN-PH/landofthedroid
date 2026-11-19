/**
 * DOTZMainMenu - the main menu for DOTZ, optimized for native Android.
 *
 * @author  Neil Gower (neilg@digitalextremes.com)
 * Ported by XHYN_PH
 */
class DOTZMainMenu extends DOTZPage
    implements( VideoNotification );

//Page components
var Automated GuiButton  SinglePlayerButton;
var Automated GuiButton  ProfilesButton;
var Automated GuiButton  SettingsButton;
var Automated GuiButton  MovieTrailerButton;
var Automated GuiButton  QuitButton;
var Automated GuiButton  HostButton;

//configurable stuff
var string SinglePlayerMenu;
var string JoinMenu;
var string HostMenu;
var string ProfilesMenu;
var string SettingsMenu;
var string QuitMenu;
var string NeedProfileMenu;

var sound ClickSound;

var VideoPlayer testVideo;
var bool bVideoIsPlaying;
var bool musicCancelled;

/*****************************************************************
 * InitComponent
 *****************************************************************
 */
function InitComponent( GUIController MyController, GUIComponent MyOwner ) {
    local int i;
    Super.Initcomponent(MyController, MyOwner);

    if (MyController != None) {
        MyController.bHideMouseCursor = true;
        for (i = 0; i < MyController.MouseCursors.Length; i++) {
            MyController.MouseCursors[i] = None;
        }
    }

    testVideo = new(self) class'BinkVideoPlayer';
    testVideo.RegisterForNotification(self);

    // Enforce default profile XHYN_PH
    if (!DOTZPlayerControllerBase(PlayerOwner()).IsLoadedProfileValid()) {
        DOTZPlayerControllerBase(PlayerOwner()).NewProfile("XHYN_PH");
    }

    // Apply saved user settings on game boot
    PlayerOwner().ConsoleCommand("setfxaa " $ class'DOTZVideoSettings'.default.iFXAAIndex);
    PlayerOwner().ConsoleCommand("setcas " $ class'DOTZVideoSettings'.default.iCASIndex);
    PlayerOwner().ConsoleCommand("setfilter " $ class'DOTZVideoSettings'.default.iFilterIndex);
    PlayerOwner().ConsoleCommand("sethdr " $ class'DOTZVideoSettings'.default.iHDRIndex);
    PlayerOwner().ConsoleCommand("fov " $ class'DOTZVideoSettings'.default.iFOVValue);
    if (class'DOTZVideoSettings'.default.iAspectIndex == 1) {
       PlayerOwner().ConsoleCommand("setwidescreen 0");
    } else if (class'DOTZVideoSettings'.default.iAspectIndex == 2) {
       PlayerOwner().ConsoleCommand("setwidescreen 2");
    } else {
       PlayerOwner().ConsoleCommand("setwidescreen 1");
    }
    PlayerOwner().ConsoleCommand("setvignette " $ class'DOTZVideoSettings'.default.iVignetteIndex);
    switch (class'DOTZVideoSettings'.default.iFPSIndex) {
       case 0: PlayerOwner().ConsoleCommand("setfps 30"); break;
       case 1: PlayerOwner().ConsoleCommand("setfps 60"); break;
       case 2: PlayerOwner().ConsoleCommand("setfps 90"); break;
       case 3: PlayerOwner().ConsoleCommand("setfps 120"); break;
       case 4: PlayerOwner().ConsoleCommand("setfps 0"); break;
       default: PlayerOwner().ConsoleCommand("setfps 60"); break;
    }
    PlayerOwner().ConsoleCommand("sethaptics " $ class'DOTZAudioSettings'.default.iHapticsIndex);
    PlayerOwner().ConsoleCommand("setmuffle " $ class'DOTZAudioSettings'.default.iMuffleIndex);
}

/**
 * Happens every time the menu is opened, not just the first.
 */
event Opened( GUIComponent Sender ) {
    PlayerOwner().ConsoleCommand("Cancel");
    super.Opened( Sender );
}

event HandleParameters( String param1, String param2 ) {
}

function Periodic () {
    super.Periodic();

    if (!testVideo.VideoIsPlaying()) {
        if (musicCancelled) {
            PlayerOwner().PlayMusic(PlayerOwner().Level.Song, 0.1);
            musicCancelled = false;
        }
    }
}

event Closed(GUIComponent Sender, bool bCancelled) {
   Super.Closed(Sender, bCancelled);
   Controller.MouseEmulation(false);
}

function bool ButtonClicked(GUIComponent Sender) {
    local GUIButton Selected;

    if (GUIButton(Sender) != None) Selected = GUIButton(Sender);
    if (Selected == None) return false;

    if (PlayerOwner().Pawn != None) {
        PlayerOwner().Pawn.PlayOwnedSound(ClickSound, SLOT_Interface, 1.0);
    }

    if (testVideo.VideoIsPlaying()) {
        testVideo.StopVideo();
        accept_input = false;
        return true;
    }

    switch (Selected) {
        case SinglePlayerButton:
            return Controller.OpenMenu(SinglePlayerMenu);

        case ProfilesButton:
            return Controller.OpenMenu(ProfilesMenu);

        case SettingsButton:
            return Controller.OpenMenu(SettingsMenu);

        case MovieTrailerButton:
            if (!bVideoIsPlaying) {
                bVideoIsPlaying = true;
                testVideo.PlayVideo("MovieTrailer.bik");
                PlayerOwner().StopAllMusic(0.1);
                musicCancelled = true;
            } else {
                testVideo.StopVideo();
                return true;
            }
            break;

        case QuitButton:
            return Controller.OpenMenu(QuitMenu);

        case HostButton:
            // "Ported by XHYN_PH" opens official channel link
            PlayerOwner().ConsoleCommand("openurl https://youtube.com/@xhyn_ph");
            return Controller.OpenMenu(HostMenu);
    }
    return false;
}

function VideoComplete(bool completed) {
   bVideoIsPlaying = false;
}

function bool HandleKeyEvent(out byte Key, out byte State, float delta) {
   return true;
}

event NotifyLevelChange() {
   Controller.CloseMenu(true);
}

defaultproperties
{
     Begin Object Class=GUIButton Name=SinglePlayerButton_btn
         Caption="Single Player"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Play Land of the Dead Single Player Campaign."
         WinTop=0.480000
         WinLeft=0.325000
         WinWidth=0.350000
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenu.ButtonClicked
         Name="SinglePlayerButton_btn"
     End Object
     SinglePlayerButton=GUIButton'DOTZMenu.DOTZMainMenu.SinglePlayerButton_btn'
     Begin Object Class=GUIButton Name=ProfilesButton_btn
         Caption="Profiles"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Manage player profiles (Active: XHYN_PH)."
         WinTop=0.550000
         WinLeft=0.325000
         WinWidth=0.350000
         TabOrder=1
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenu.ButtonClicked
         Name="ProfilesButton_btn"
     End Object
     ProfilesButton=GUIButton'DOTZMenu.DOTZMainMenu.ProfilesButton_btn'
     Begin Object Class=GUIButton Name=settingsButton_btn
         Caption="Settings"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Adjust in-game video, audio, and touch control settings."
         WinTop=0.620000
         WinLeft=0.325000
         WinWidth=0.350000
         TabOrder=2
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenu.ButtonClicked
         Name="settingsButton_btn"
     End Object
     SettingsButton=GUIButton'DOTZMenu.DOTZMainMenu.settingsButton_btn'
     Begin Object Class=GUIButton Name=MovieTrailerButton_btn
         Caption="Movie Trailer"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Play the Land of the Dead cinematic trailer."
         WinTop=0.690000
         WinLeft=0.325000
         WinWidth=0.350000
         TabOrder=3
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenu.ButtonClicked
         Name="MovieTrailerButton_btn"
     End Object
     MovieTrailerButton=GUIButton'DOTZMenu.DOTZMainMenu.MovieTrailerButton_btn'
     Begin Object Class=GUIButton Name=QuitButton_btn
         Caption="Exit Game"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Exit the game."
         WinTop=0.760000
         WinLeft=0.325000
         WinWidth=0.350000
         TabOrder=4
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenu.ButtonClicked
         Name="QuitButton_btn"
     End Object
     QuitButton=GUIButton'DOTZMenu.DOTZMainMenu.QuitButton_btn'
     Begin Object Class=GUIButton Name=HostGameButton_btn
         Caption="Ported by XHYN_PH"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         Hint="Visit XHYN_PH on YouTube for project updates."
         WinTop=0.830000
         WinLeft=0.325000
         WinWidth=0.350000
         TabOrder=5
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZMainMenu.ButtonClicked
         Name="HostGameButton_btn"
     End Object
     HostButton=GUIButton'DOTZMenu.DOTZMainMenu.HostGameButton_btn'
     SinglePlayerMenu="DOTZMenu.DOTZSPMainMenu"
     JoinMenu="DOTZMenu.DOTZJoinMenu"
     HostMenu="https://youtube.com/@xhyn_ph"
     ProfilesMenu="DOTZMenu.DOTZProfileMenu"
     SettingsMenu="DOTZMenu.DOTZSettingsMenu"
     QuitMenu="DOTZMenu.DOTZQuitConfirm"
     NeedProfileMenu="DOTZMenu.DOTZProfileForceSelect"
     ClickSound=Sound'DOTZXInterface.Select'
     Background=Texture'DOTZTInterface.Menu.MainMenuBackGround'
     __OnKeyEvent__Delegate=DOTZMainMenu.HandleKeyEvent
}
