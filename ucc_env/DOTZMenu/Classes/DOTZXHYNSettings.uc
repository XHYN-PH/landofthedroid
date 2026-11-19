/**
 * DOTZXHYNSettings - Native in-game mobile & advanced gameplay settings tab.
 * 2-column balanced layout containing touch layout editor, aim assist,
 * joystick base mode, stick response curve, difficulty, auto-save,
 * auto-sprint, smart auto-reload, smart auto-pickup, rapid-fire, and HUD visibility.
 */
class DOTZXHYNSettings extends DOTZSettingsPanel config(User);

// Persistent config variables
var config int iAimAssistIndex;
var config int iJoyModeIndex;
var config int iStickCurveIndex;
var config int iDifficultyIndex;
var config int iAutoSaveIndex;

var config int iAutoSprintIndex;
var config int iAutoReloadIndex;
var config int iAutoPickupIndex;
var config int iRapidFireIndex;
var config int iHudVisibleIndex;

// GUI Controls - Header / Action Button
var Automated GUIButton   TouchLayoutBtn;

// GUI Controls - Left Column
var Automated GUILabel    AimAssistLabel;
var Automated GUIComboBox AimAssistBox;
var Automated GUILabel    JoyModeLabel;
var Automated GUIComboBox JoyModeBox;
var Automated GUILabel    StickCurveLabel;
var Automated GUIComboBox StickCurveBox;
var Automated GUILabel    DifficultyLabel;
var Automated GUIComboBox DifficultyBox;
var Automated GUILabel    AutoSaveLabel;
var Automated GUIComboBox AutoSaveBox;

// GUI Controls - Right Column
var Automated GUILabel    AutoSprintLabel;
var Automated GUIComboBox AutoSprintBox;
var Automated GUILabel    AutoReloadLabel;
var Automated GUIComboBox AutoReloadBox;
var Automated GUILabel    AutoPickupLabel;
var Automated GUIComboBox AutoPickupBox;
var Automated GUILabel    RapidFireLabel;
var Automated GUIComboBox RapidFireBox;
var Automated GUILabel    HudVisibleLabel;
var Automated GUIComboBox HudVisibleBox;

var private bool bXHYNInitialized;
var sound ClickSound;

/*****************************************************************
 * ConfigureTouchClicked
 *****************************************************************
 */
function bool ConfigureTouchClicked(GUIComponent Sender) {
   if (PlayerOwner().Pawn != None) {
      PlayerOwner().Pawn.PlayOwnedSound(ClickSound, SLOT_Interface, 1.0);
   }
   PlayerOwner().ConsoleCommand("open_touch_editor");
   return true;
}

/*****************************************************************
 * ShowPanel
 *****************************************************************
 */
function ShowPanel(bool bShow) {
   Super.ShowPanel(bShow);
   if (AimAssistBox != None) AimAssistBox.HideListBox();
   if (JoyModeBox != None) JoyModeBox.HideListBox();
   if (StickCurveBox != None) StickCurveBox.HideListBox();
   if (DifficultyBox != None) DifficultyBox.HideListBox();
   if (AutoSaveBox != None) AutoSaveBox.HideListBox();
   if (AutoSprintBox != None) AutoSprintBox.HideListBox();
   if (AutoReloadBox != None) AutoReloadBox.HideListBox();
   if (AutoPickupBox != None) AutoPickupBox.HideListBox();
   if (RapidFireBox != None) RapidFireBox.HideListBox();
   if (HudVisibleBox != None) HudVisibleBox.HideListBox();
}

/*****************************************************************
 * AdvancedControlChange
 *****************************************************************
 */
function AdvancedControlChange(GUIComponent Sender) {
   if (!bXHYNInitialized) return;

   if (Sender == AimAssistBox) {
      if (AimAssistBox != None) AimAssistBox.HideListBox();
      Class.default.iAimAssistIndex = AimAssistBox.GetIndex();
      iAimAssistIndex = Class.default.iAimAssistIndex;
      PlayerOwner().ConsoleCommand("setaimassist " $ AimAssistBox.GetIndex());
   } else if (Sender == JoyModeBox) {
      if (JoyModeBox != None) JoyModeBox.HideListBox();
      Class.default.iJoyModeIndex = JoyModeBox.GetIndex();
      iJoyModeIndex = Class.default.iJoyModeIndex;
      PlayerOwner().ConsoleCommand("setjoymode " $ JoyModeBox.GetIndex());
   } else if (Sender == StickCurveBox) {
      if (StickCurveBox != None) StickCurveBox.HideListBox();
      Class.default.iStickCurveIndex = StickCurveBox.GetIndex();
      iStickCurveIndex = Class.default.iStickCurveIndex;
      PlayerOwner().ConsoleCommand("setstickcurve " $ StickCurveBox.GetIndex());
   } else if (Sender == DifficultyBox) {
      if (DifficultyBox != None) DifficultyBox.HideListBox();
      Class.default.iDifficultyIndex = DifficultyBox.GetIndex();
      iDifficultyIndex = Class.default.iDifficultyIndex;
      class'AdvancedGameInfo'.default.iDifficultyLevel = DifficultyBox.GetIndex();
      class'AdvancedGameInfo'.static.StaticSaveConfig();
      if (DOTZPlayerControllerBase(PlayerOwner()) != None) {
         DOTZPlayerControllerBase(PlayerOwner()).SetDifficultyLevel(DifficultyBox.GetIndex());
      }
   } else if (Sender == AutoSaveBox) {
      if (AutoSaveBox != None) AutoSaveBox.HideListBox();
      Class.default.iAutoSaveIndex = AutoSaveBox.GetIndex();
      iAutoSaveIndex = Class.default.iAutoSaveIndex;
      class'AdvancedGameInfo'.default.bAutoSaveDisabled = (AutoSaveBox.GetIndex() == 1);
      class'AdvancedGameInfo'.static.StaticSaveConfig();
   } else if (Sender == AutoSprintBox) {
      if (AutoSprintBox != None) AutoSprintBox.HideListBox();
      Class.default.iAutoSprintIndex = AutoSprintBox.GetIndex();
      iAutoSprintIndex = Class.default.iAutoSprintIndex;
      PlayerOwner().ConsoleCommand("setautosprint " $ AutoSprintBox.GetIndex());
   } else if (Sender == AutoReloadBox) {
      if (AutoReloadBox != None) AutoReloadBox.HideListBox();
      Class.default.iAutoReloadIndex = AutoReloadBox.GetIndex();
      iAutoReloadIndex = Class.default.iAutoReloadIndex;
      PlayerOwner().ConsoleCommand("setautoreload " $ AutoReloadBox.GetIndex());
   } else if (Sender == AutoPickupBox) {
      if (AutoPickupBox != None) AutoPickupBox.HideListBox();
      Class.default.iAutoPickupIndex = AutoPickupBox.GetIndex();
      iAutoPickupIndex = Class.default.iAutoPickupIndex;
      PlayerOwner().ConsoleCommand("setautopickup " $ AutoPickupBox.GetIndex());
   } else if (Sender == RapidFireBox) {
      if (RapidFireBox != None) RapidFireBox.HideListBox();
      Class.default.iRapidFireIndex = RapidFireBox.GetIndex();
      iRapidFireIndex = Class.default.iRapidFireIndex;
      PlayerOwner().ConsoleCommand("setrapidfire " $ RapidFireBox.GetIndex());
   } else if (Sender == HudVisibleBox) {
      if (HudVisibleBox != None) HudVisibleBox.HideListBox();
      Class.default.iHudVisibleIndex = HudVisibleBox.GetIndex();
      iHudVisibleIndex = Class.default.iHudVisibleIndex;
      PlayerOwner().ConsoleCommand("sethudvisible " $ HudVisibleBox.GetIndex());
   }

   Class.static.StaticSaveConfig();
   SaveConfig();
}

/*****************************************************************
 * InitComponent
 *****************************************************************
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner) {
   local int curAimAssistIdx, curJoyModeIdx, curStickCurveIdx, curDiffIdx, curAutoSaveIdx;
   local int curAutoSprintIdx, curAutoReloadIdx, curAutoPickupIdx, curRapidFireIdx, curHudVisibleIdx;

   Super.InitComponent(MyController, MyOwner);

   if (TouchLayoutBtn != None) {
      TouchLayoutBtn.OnClick = ConfigureTouchClicked;
   }

   // Left Column Defaults
   curAimAssistIdx = iAimAssistIndex;
   if (curAimAssistIdx < 0 || curAimAssistIdx > 3) curAimAssistIdx = Class.default.iAimAssistIndex;
   if (curAimAssistIdx < 0 || curAimAssistIdx > 3) curAimAssistIdx = 2;

   curJoyModeIdx = iJoyModeIndex;
   if (curJoyModeIdx < 0 || curJoyModeIdx > 1) curJoyModeIdx = Class.default.iJoyModeIndex;
   if (curJoyModeIdx < 0 || curJoyModeIdx > 1) curJoyModeIdx = 0;

   curStickCurveIdx = iStickCurveIndex;
   if (curStickCurveIdx < 0 || curStickCurveIdx > 2) curStickCurveIdx = Class.default.iStickCurveIndex;
   if (curStickCurveIdx < 0 || curStickCurveIdx > 2) curStickCurveIdx = 1;

   curDiffIdx = iDifficultyIndex;
   if (curDiffIdx < 0 || curDiffIdx > 2) curDiffIdx = Class.default.iDifficultyIndex;
   if (curDiffIdx < 0 || curDiffIdx > 2) curDiffIdx = class'AdvancedGameInfo'.default.iDifficultyLevel;
   if (curDiffIdx < 0 || curDiffIdx > 2) curDiffIdx = 1;

   curAutoSaveIdx = iAutoSaveIndex;
   if (curAutoSaveIdx < 0 || curAutoSaveIdx > 1) curAutoSaveIdx = Class.default.iAutoSaveIndex;
   if (class'AdvancedGameInfo'.default.bAutoSaveDisabled) curAutoSaveIdx = 1;
   if (curAutoSaveIdx < 0 || curAutoSaveIdx > 1) curAutoSaveIdx = 0;

   // Right Column Defaults
   curAutoSprintIdx = iAutoSprintIndex;
   if (curAutoSprintIdx < 0 || curAutoSprintIdx > 1) curAutoSprintIdx = Class.default.iAutoSprintIndex;
   if (curAutoSprintIdx < 0 || curAutoSprintIdx > 1) curAutoSprintIdx = 0;

   curAutoReloadIdx = iAutoReloadIndex;
   if (curAutoReloadIdx < 0 || curAutoReloadIdx > 1) curAutoReloadIdx = Class.default.iAutoReloadIndex;
   if (curAutoReloadIdx < 0 || curAutoReloadIdx > 1) curAutoReloadIdx = 0;

   curAutoPickupIdx = iAutoPickupIndex;
   if (curAutoPickupIdx < 0 || curAutoPickupIdx > 1) curAutoPickupIdx = Class.default.iAutoPickupIndex;
   if (curAutoPickupIdx < 0 || curAutoPickupIdx > 1) curAutoPickupIdx = 0;

   curRapidFireIdx = iRapidFireIndex;
   if (curRapidFireIdx < 0 || curRapidFireIdx > 1) curRapidFireIdx = Class.default.iRapidFireIndex;
   if (curRapidFireIdx < 0 || curRapidFireIdx > 1) curRapidFireIdx = 0;

   curHudVisibleIdx = iHudVisibleIndex;
   if (curHudVisibleIdx < 0 || curHudVisibleIdx > 2) curHudVisibleIdx = Class.default.iHudVisibleIndex;
   if (curHudVisibleIdx < 0 || curHudVisibleIdx > 2) curHudVisibleIdx = 0;

   // Populate Left Column
   if (AimAssistBox != None) {
      AimAssistBox.AddItem("Disabled");
      AimAssistBox.AddItem("Low");
      AimAssistBox.AddItem("Medium");
      AimAssistBox.AddItem("High");
      AimAssistBox.SetIndex(curAimAssistIdx);
      AimAssistBox.OnChange = AdvancedControlChange;
   }
   if (JoyModeBox != None) {
      JoyModeBox.AddItem("Dynamic");
      JoyModeBox.AddItem("Fixed");
      JoyModeBox.SetIndex(curJoyModeIdx);
      JoyModeBox.OnChange = AdvancedControlChange;
   }
   if (StickCurveBox != None) {
      StickCurveBox.AddItem("Linear");
      StickCurveBox.AddItem("Progressive");
      StickCurveBox.AddItem("Exponential");
      StickCurveBox.SetIndex(curStickCurveIdx);
      StickCurveBox.OnChange = AdvancedControlChange;
   }
   if (DifficultyBox != None) {
      DifficultyBox.AddItem("Easy");
      DifficultyBox.AddItem("Standard");
      DifficultyBox.AddItem("Difficult");
      DifficultyBox.SetIndex(curDiffIdx);
      DifficultyBox.OnChange = AdvancedControlChange;
   }
   if (AutoSaveBox != None) {
      AutoSaveBox.AddItem("Enabled");
      AutoSaveBox.AddItem("Disabled");
      AutoSaveBox.SetIndex(curAutoSaveIdx);
      AutoSaveBox.OnChange = AdvancedControlChange;
   }

   // Populate Right Column
   if (AutoSprintBox != None) {
      AutoSprintBox.AddItem("Enabled");
      AutoSprintBox.AddItem("Disabled");
      AutoSprintBox.SetIndex(curAutoSprintIdx);
      AutoSprintBox.OnChange = AdvancedControlChange;
   }
   if (AutoReloadBox != None) {
      AutoReloadBox.AddItem("Enabled");
      AutoReloadBox.AddItem("Disabled");
      AutoReloadBox.SetIndex(curAutoReloadIdx);
      AutoReloadBox.OnChange = AdvancedControlChange;
   }
   if (AutoPickupBox != None) {
      AutoPickupBox.AddItem("Enabled");
      AutoPickupBox.AddItem("Disabled");
      AutoPickupBox.SetIndex(curAutoPickupIdx);
      AutoPickupBox.OnChange = AdvancedControlChange;
   }
   if (RapidFireBox != None) {
      RapidFireBox.AddItem("Enabled");
      RapidFireBox.AddItem("Disabled");
      RapidFireBox.SetIndex(curRapidFireIdx);
      RapidFireBox.OnChange = AdvancedControlChange;
   }
   if (HudVisibleBox != None) {
      HudVisibleBox.AddItem("Visible");
      HudVisibleBox.AddItem("Sticks Only");
      HudVisibleBox.AddItem("Hidden");
      HudVisibleBox.SetIndex(curHudVisibleIdx);
      HudVisibleBox.OnChange = AdvancedControlChange;
   }

   bXHYNInitialized = true;
}

defaultproperties
{
     // Top Action Button: Layout Editor
     Begin Object Class=GUIButton Name=cTouchLayoutBtn
         Caption="[ CONFIGURE TOUCH CONTROLS LAYOUT >> ]"
         StyleName="BBRoundButton"
         Hint="Open the visual touch controls layout editor to move and resize buttons."
         WinTop=0.030000
         WinLeft=0.100000
         WinWidth=0.800000
         WinHeight=0.060000
         __OnClick__Delegate=DOTZXHYNSettings.ConfigureTouchClicked
         Name="cTouchLayoutBtn"
     End Object
     TouchLayoutBtn=GUIButton'DOTZMenu.DOTZXHYNSettings.cTouchLayoutBtn'

     // Left Column: Row 0 - Aim Assist
     Begin Object Class=GUILabel Name=cAimAssistLabel
         Caption="Aim Assist"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.110000
         WinLeft=0.040000
         WinWidth=0.200000
         WinHeight=0.050000
         Name="cAimAssistLabel"
     End Object
     AimAssistLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cAimAssistLabel'

     Begin Object Class=BBComboBox Name=cAimAssistBox
         IniOption="@Internal"
         IniDefault="Medium"
         WinTop=0.110000
         WinLeft=0.250000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cAimAssistBox"
     End Object
     AimAssistBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cAimAssistBox'

     // Left Column: Row 1 - Joystick Base Mode
     Begin Object Class=GUILabel Name=cJoyModeLabel
         Caption="Joystick Mode"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.190000
         WinLeft=0.040000
         WinWidth=0.200000
         WinHeight=0.050000
         Name="cJoyModeLabel"
     End Object
     JoyModeLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cJoyModeLabel'

     Begin Object Class=BBComboBox Name=cJoyModeBox
         IniOption="@Internal"
         IniDefault="Dynamic"
         WinTop=0.190000
         WinLeft=0.250000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cJoyModeBox"
     End Object
     JoyModeBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cJoyModeBox'

     // Left Column: Row 2 - Stick Curve
     Begin Object Class=GUILabel Name=cStickCurveLabel
         Caption="Stick Curve"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.270000
         WinLeft=0.040000
         WinWidth=0.200000
         WinHeight=0.050000
         Name="cStickCurveLabel"
     End Object
     StickCurveLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cStickCurveLabel'

     Begin Object Class=BBComboBox Name=cStickCurveBox
         IniOption="@Internal"
         IniDefault="Progressive"
         WinTop=0.270000
         WinLeft=0.250000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cStickCurveBox"
     End Object
     StickCurveBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cStickCurveBox'

     // Left Column: Row 3 - Game Difficulty
     Begin Object Class=GUILabel Name=cDifficultyLabel
         Caption="Difficulty"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.350000
         WinLeft=0.040000
         WinWidth=0.200000
         WinHeight=0.050000
         Name="cDifficultyLabel"
     End Object
     DifficultyLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cDifficultyLabel'

     Begin Object Class=BBComboBox Name=cDifficultyBox
         IniOption="@Internal"
         IniDefault="Standard"
         WinTop=0.350000
         WinLeft=0.250000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cDifficultyBox"
     End Object
     DifficultyBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cDifficultyBox'

     // Left Column: Row 4 - Auto Save
     Begin Object Class=GUILabel Name=cAutoSaveLabel
         Caption="Auto Save"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.430000
         WinLeft=0.040000
         WinWidth=0.200000
         WinHeight=0.050000
         Name="cAutoSaveLabel"
     End Object
     AutoSaveLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cAutoSaveLabel'

     Begin Object Class=BBComboBox Name=cAutoSaveBox
         IniOption="@Internal"
         IniDefault="Enabled"
         WinTop=0.430000
         WinLeft=0.250000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cAutoSaveBox"
     End Object
     AutoSaveBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cAutoSaveBox'

     // Right Column: Row 0 - Auto Sprint
     Begin Object Class=GUILabel Name=cAutoSprintLabel
         Caption="Auto Sprint"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.110000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="cAutoSprintLabel"
     End Object
     AutoSprintLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cAutoSprintLabel'

     Begin Object Class=BBComboBox Name=cAutoSprintBox
         IniOption="@Internal"
         IniDefault="Enabled"
         WinTop=0.110000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cAutoSprintBox"
     End Object
     AutoSprintBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cAutoSprintBox'

     // Right Column: Row 1 - Auto Reload
     Begin Object Class=GUILabel Name=cAutoReloadLabel
         Caption="Auto Reload"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.190000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="cAutoReloadLabel"
     End Object
     AutoReloadLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cAutoReloadLabel'

     Begin Object Class=BBComboBox Name=cAutoReloadBox
         IniOption="@Internal"
         IniDefault="Enabled"
         WinTop=0.190000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cAutoReloadBox"
     End Object
     AutoReloadBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cAutoReloadBox'

     // Right Column: Row 2 - Auto Pickup
     Begin Object Class=GUILabel Name=cAutoPickupLabel
         Caption="Auto Pickup"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.270000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="cAutoPickupLabel"
     End Object
     AutoPickupLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cAutoPickupLabel'

     Begin Object Class=BBComboBox Name=cAutoPickupBox
         IniOption="@Internal"
         IniDefault="Enabled"
         WinTop=0.270000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cAutoPickupBox"
     End Object
     AutoPickupBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cAutoPickupBox'

     // Right Column: Row 3 - Rapid Fire
     Begin Object Class=GUILabel Name=cRapidFireLabel
         Caption="Rapid Fire"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.350000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="cRapidFireLabel"
     End Object
     RapidFireLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cRapidFireLabel'

     Begin Object Class=BBComboBox Name=cRapidFireBox
         IniOption="@Internal"
         IniDefault="Enabled"
         WinTop=0.350000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cRapidFireBox"
     End Object
     RapidFireBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cRapidFireBox'

     // Right Column: Row 4 - HUD Visibility
     Begin Object Class=GUILabel Name=cHudVisibleLabel
         Caption="HUD Visibility"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.430000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="cHudVisibleLabel"
     End Object
     HudVisibleLabel=GUILabel'DOTZMenu.DOTZXHYNSettings.cHudVisibleLabel'

     Begin Object Class=BBComboBox Name=cHudVisibleBox
         IniOption="@Internal"
         IniDefault="Visible"
         WinTop=0.430000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZXHYNSettings.AdvancedControlChange
         Name="cHudVisibleBox"
     End Object
     HudVisibleBox=BBComboBox'DOTZMenu.DOTZXHYNSettings.cHudVisibleBox'

     ClickSound=Sound'DOTZXInterface.Select'
     WinHeight=0.740000
}
