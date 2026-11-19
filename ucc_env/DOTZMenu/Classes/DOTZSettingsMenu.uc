/**
 *
 *
 * @author  Neil Gower (neilg@digitalextremes.com)
 * @version $Revision: 1.8 $
 * @date    Sept 2003
 */
class DOTZSettingsMenu extends DOTZPage;



//controls
var Automated GUIImage      titleLogo;
var Automated GUITabControl TabC;
var Automated GUITitleBar   TabFooter;
var Automated GUIButton     BackButton;
//var Automated GUILabel      Title;

//tab text
var localized string VideoTxt;
var localized string AudioTxt;
var localized string ControlTxt;
var localized string XHYNTxt;
var localized string CheatsTxt;
var localized string GameTxt;

//tab panels
var string VideoPanel;
var string AudioPanel;
var string ControlsPanel;
var string XHYNPanel;
var string CheatsPanel;
var string GamePanel;
var sound ClickSound;

var string PageCaption;
var bool bInitialized;

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

   SetPageCaption(PageCaption);
   AddBackButton();
   //AddNextButton();

   TabC.AddTab( VideoTxt,VideoPanel,,
                "Settings that effect the visual experience" );
   TabC.AddTab( AudioTxt,AudioPanel,,
                "Settings that effect the audible experience" );
   TabC.AddTab( ControlTxt ,ControlsPanel,,
                "Game controls settings" );
   TabC.AddTab( XHYNTxt, XHYNPanel,,
                "Custom mobile and advanced game settings" );
   TabC.AddTab( CheatsTxt, CheatsPanel,,
                "Developer Cheats and Unreal Console" );
   //TabC.AddTab( GameTxt,GamePanel,,
//                "Game settings" );

   for ( i = 0; i < TabC.TabStack.length; ++i ) {
      TabC.TabStack[i].Style = MyController.getStyle("BBTabButton");
   }

   bInitialized = true;
}


/*****************************************************************
 * Closed
 *****************************************************************
 */
 event Closed( GUIComponent Sender, bool bCancelled ) {
   Super.Closed( Sender, bCancelled );
   Controller.MouseEmulation( false );
}

/*****************************************************************
 * TabChange
 *****************************************************************
 */
function TabChange( GUIComponent Sender ) {
   if ( GUITabButton(Sender) == none ) return;
   if (!bInitialized) return;
   if (PlayerOwner().Pawn != None) {
       PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
   }
}

/*****************************************************************
 * NotifyLevelChange
 *****************************************************************
 */
event NotifyLevelChange() {
   Controller.CloseMenu( true );
}



//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     Begin Object Class=GUITabControl Name=MyTabs
         bDockPanels=True
         TabHeight=0.050000
         bAcceptsInput=True
         WinTop=0.165000
         WinLeft=0.110000
         WinHeight=48.000000
         __OnChange__Delegate=DOTZSettingsMenu.TabChange
         Name="MyTabs"
     End Object
     TabC=GUITabControl'DOTZMenu.DOTZSettingsMenu.MyTabs'
     VideoTxt="Video Settings"
     AudioTxt="Audio Settings"
     ControlTxt="Control Settings"
     XHYNTxt="XHYN Settings"
     VideoPanel="DOTZMenu.DOTZVideoSettings"
     AudioPanel="DOTZMenu.DOTZAudioSettings"
     ControlsPanel="DOTZMenu.DOTZControlSettings"
     XHYNPanel="DOTZMenu.DOTZXHYNSettings"
     CheatsTxt="Cheats"
     CheatsPanel="DOTZMenu.DOTZCheatsSettings"
     ClickSound=Sound'DOTZXInterface.Select'
     PageCaption="Settings"
     Background=Texture'DOTZTInterface.Menu.MultiplayerBackground'
     __OnKeyEvent__Delegate=DOTZSettingsMenu.HandleKeyEvent
}
