/**
 * DOTZSPPause - In-game Pause Menu
 *
 * @author  Tod Baudais (tod.baudais@digitalextremes.com)
 * @version $Revision: 1.0 $
 * @date    January 19, 2005
 */

class DOTZSPPause extends DOTZInGamePage;

// Page components
var Automated GuiButton  ContinueButton;
var Automated GuiButton  RestartButton;
var Automated GuiButton  LoadButton;
var Automated GuiButton  SaveButton;
var Automated GuiButton  OptionsButton;
var Automated GuiButton  QuitButton;
var Automated GuiButton  CheatsButton;

// Configurable stuff
var string ContinueMenu;
var string LoadMenu;
var string SaveMenu;
var string OptionsMenu;
var string QuitMenu;

var localized string PageCaption;
var sound ClickSound;

/*****************************************************************
 * InitComponent
 *****************************************************************
 */
function InitComponent( GUIController MyController, GUIComponent MyOwner ) {
    Super.Initcomponent(MyController, MyOwner);

    SetPageCaption (PageCaption);

    if (ContinueButton != None) ContinueButton.OnClick = ButtonClicked;
    if (RestartButton != None) RestartButton.OnClick = ButtonClicked;
    if (LoadButton != None) LoadButton.OnClick = ButtonClicked;
    if (SaveButton != None) SaveButton.OnClick = ButtonClicked;
    if (OptionsButton != None) OptionsButton.OnClick = ButtonClicked;
    if (QuitButton != None) QuitButton.OnClick = ButtonClicked;
    if (CheatsButton != None) CheatsButton.OnClick = ButtonClicked;
}

/**
 * Happens every time the menu is opened, not just the first.
 */
event Opened( GUIComponent Sender ) {
    super.Opened(Sender);
    accept_input = false;
}

/*****************************************************************
 * Closed
 *****************************************************************
 */
event Closed(GUIComponent Sender, bool bCancelled) {
   Super.Closed(Sender, bCancelled);
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
       PlayerOwner().Pawn.PlayOwnedSound(ClickSound, SLOT_Interface, 1.0);
    }

    switch (Selected) {
        case ContinueButton:
             Controller.ViewportOwner.Actor.SetPause(false);
             return Controller.CloseMenu(true);
             break;

        case RestartButton:
             Controller.ViewportOwner.Actor.SetPause(false);
             Controller.CloseMenu(true);
             PlayerOwner().Level.ServerTravel("?Restart", false);
             return true;
             break;

        case LoadButton:
             return Controller.OpenMenu(LoadMenu);
             break;

        case SaveButton:
             return Controller.OpenMenu(SaveMenu);
             break;

        case OptionsButton:
             return Controller.OpenMenu(OptionsMenu);
             break;

        case QuitButton:
             return Controller.OpenMenu(QuitMenu);
             break;

        case CheatsButton:
             Controller.OpenMenu(OptionsMenu);
             if (DOTZSettingsMenuIG(Controller.ActivePage) != None) {
                 DOTZSettingsMenuIG(Controller.ActivePage).TargetTab = "Cheats";
                 DOTZSettingsMenuIG(Controller.ActivePage).TabC.ActivateTabByName("Cheats", true);
             }
             return true;
             break;
    };

    return false;
}

/*****************************************************************
 * NotifyLevelChange
 *****************************************************************
 */
event NotifyLevelChange() {
}

//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     Begin Object Class=GUIButton Name=ContinueButton_btn
         Caption="Continue"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.080000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="ContinueButton_btn"
     End Object
     ContinueButton=GUIButton'DOTZMenu.DOTZSPPause.ContinueButton_btn'

     Begin Object Class=GUIButton Name=RestartButton_btn
         Caption="Restart Level"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.170000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         TabOrder=1
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="RestartButton_btn"
     End Object
     RestartButton=GUIButton'DOTZMenu.DOTZSPPause.RestartButton_btn'

     Begin Object Class=GUIButton Name=LoadButton_btn
         Caption="Load Game"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.260000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         TabOrder=2
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="LoadButton_btn"
     End Object
     LoadButton=GUIButton'DOTZMenu.DOTZSPPause.LoadButton_btn'

     Begin Object Class=GUIButton Name=SaveButton_btn
         Caption="Save Game"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.350000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         TabOrder=3
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="SaveButton_btn"
     End Object
     SaveButton=GUIButton'DOTZMenu.DOTZSPPause.SaveButton_btn'

     Begin Object Class=GUIButton Name=OptionsButton_btn
         Caption="Settings"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.440000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         TabOrder=4
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="OptionsButton_btn"
     End Object
     OptionsButton=GUIButton'DOTZMenu.DOTZSPPause.OptionsButton_btn'

     Begin Object Class=GUIButton Name=QuitButton_btn
         Caption="Quit"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.530000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         TabOrder=5
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="QuitButton_btn"
     End Object
     QuitButton=GUIButton'DOTZMenu.DOTZSPPause.QuitButton_btn'

     Begin Object Class=GUIButton Name=CheatsButton_btn
         Caption="Cheats"
         StyleName="BBTextButton"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.620000
         WinLeft=0.300000
         WinWidth=0.400000
         WinHeight=0.075000
         TabOrder=6
         bFocusOnWatch=True
         __OnClick__Delegate=DOTZSPPause.ButtonClicked
         Name="CheatsButton_btn"
     End Object
     CheatsButton=GUIButton'DOTZMenu.DOTZSPPause.CheatsButton_btn'

     ContinueMenu="DOTZMenu.DOTZSPLevelList"
     LoadMenu="DOTZMenu.DOTZLoadMenuIG"
     SaveMenu="DOTZMenu.DOTZSaveMenu"
     OptionsMenu="DOTZMenu.DOTZSettingsMenuIG"
     QuitMenu="DOTZMenu.DOTZQuitGameConfirm"
     PageCaption="Paused"
     ClickSound=Sound'DOTZXInterface.Select'
     period=0.100000
     WinTop=0.180000
     WinLeft=0.250000
     WinWidth=0.500000
     WinHeight=0.640000
     __OnKeyEvent__Delegate=DOTZSPPause.HandleKeyEvent
}
