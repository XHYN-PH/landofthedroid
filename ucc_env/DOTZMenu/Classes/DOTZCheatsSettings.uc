/**
 * DOTZCheatsSettings - Native in-game cheats and Unreal Engine console tab.
 * Allows direct triggering of cheats, chapter warps, and console commands.
 */
class DOTZCheatsSettings extends DOTZSettingsPanel config(User);

// GUI Controls
var Automated GUIButton   ConsoleBtn;

var Automated GUIButton   GodBtn;
var Automated GUIButton   LoadedBtn;
var Automated GUIButton   KungFuBtn;
var Automated GUIButton   AllAmmoBtn;
var Automated GUIButton   BehindView1Btn;
var Automated GUIButton   BehindView0Btn;
var Automated GUIButton   GhostBtn;
var Automated GUIButton   WalkBtn;
var Automated GUIButton   Slomo04Btn;
var Automated GUIButton   Slomo10Btn;
var Automated GUIButton   KillZombiesBtn;

var Automated GUILabel    WarpLabel;
var Automated GUIComboBox WarpBox;

var Automated GUILabel    ConsoleOutput;

var sound ClickSound;
var private bool bCheatsInit;

/*****************************************************************
 * CheatClicked
 *****************************************************************
 */
function bool CheatClicked(GUIComponent Sender) {
   local string outMsg;

   if (PlayerOwner().Pawn != None) {
      PlayerOwner().Pawn.PlayOwnedSound(ClickSound, SLOT_Interface, 1.0);
   }

   if (Sender == GodBtn) {
      PlayerOwner().ConsoleCommand("god");
      outMsg = "God Mode Toggled";
   } else if (Sender == LoadedBtn) {
      PlayerOwner().ConsoleCommand("weapons");
      PlayerOwner().ConsoleCommand("kungfu");
      PlayerOwner().ConsoleCommand("allammo");
      outMsg = "All Weapons & Ammo Acquired";
   } else if (Sender == KungFuBtn) {
      PlayerOwner().ConsoleCommand("kungfu");
      outMsg = "Kung Fu Mode Toggled";
   } else if (Sender == AllAmmoBtn) {
      PlayerOwner().ConsoleCommand("allammo");
      outMsg = "Ammo Fully Restocked";
   } else if (Sender == BehindView1Btn) {
      PlayerOwner().ConsoleCommand("behindview 1");
      outMsg = "Camera: 3rd Person View (behindview 1)";
   } else if (Sender == BehindView0Btn) {
      PlayerOwner().ConsoleCommand("behindview 0");
      outMsg = "Camera: 1st Person View (behindview 0)";
   } else if (Sender == KillZombiesBtn) {
      PlayerOwner().ConsoleCommand("killall zombiebase");
      outMsg = "All Active Zombies Destroyed";
   } else if (Sender == GhostBtn) {
      PlayerOwner().ConsoleCommand("ghost");
      outMsg = "Ghost / NoClip: ON (Fly)";
   } else if (Sender == WalkBtn) {
      PlayerOwner().ConsoleCommand("walk");
      outMsg = "Walk: Normal Collision & Gravity Restored";
   } else if (Sender == Slomo04Btn) {
      PlayerOwner().ConsoleCommand("slomo 0.4");
      outMsg = "Game Speed: 0.4x (Slow Motion)";
   } else if (Sender == Slomo10Btn) {
      PlayerOwner().ConsoleCommand("slomo 1.0");
      outMsg = "Game Speed: 1.0x (Normal)";
   } else if (Sender == ConsoleBtn) {
      PlayerOwner().ConsoleCommand("open_console_terminal");
      outMsg = "Opened Unreal Console Terminal";
   }

   if (ConsoleOutput != None && outMsg != "") {
      ConsoleOutput.Caption = outMsg;
   }
   return true;
}

/*****************************************************************
 * WarpChange
 *****************************************************************
 */
function WarpChange(GUIComponent Sender) {
   if (!bCheatsInit) return;
   if (Sender == WarpBox) {
      if (WarpBox != None) WarpBox.HideListBox();
      switch (WarpBox.GetIndex()) {
         case 1: PlayerOwner().ConsoleCommand("open CH01.dz"); break;
         case 2: PlayerOwner().ConsoleCommand("open CH02a.dz"); break;
         case 3: PlayerOwner().ConsoleCommand("open CH03a.dz"); break;
         case 4: PlayerOwner().ConsoleCommand("open CH04a.dz"); break;
         case 5: PlayerOwner().ConsoleCommand("open CH05a.dz"); break;
         case 6: PlayerOwner().ConsoleCommand("open CH06a.dz"); break;
         case 7: PlayerOwner().ConsoleCommand("open CH07a.dz"); break;
         case 8: PlayerOwner().ConsoleCommand("open CH08.dz"); break;
      }
   }
}

/*****************************************************************
 * InitComponent
 *****************************************************************
 */
function ShowPanel(bool bShow) {
   Super.ShowPanel(bShow);
   if (WarpBox != None) WarpBox.HideListBox();
}

function InitComponent(GUIController MyController, GUIComponent MyOwner) {
   Super.InitComponent(MyController, MyOwner);

   if (ConsoleBtn != None) ConsoleBtn.OnClick = CheatClicked;
   if (GodBtn != None) GodBtn.OnClick = CheatClicked;
   if (LoadedBtn != None) LoadedBtn.OnClick = CheatClicked;
   if (KungFuBtn != None) KungFuBtn.OnClick = CheatClicked;
   if (AllAmmoBtn != None) AllAmmoBtn.OnClick = CheatClicked;
   if (BehindView1Btn != None) BehindView1Btn.OnClick = CheatClicked;
   if (BehindView0Btn != None) BehindView0Btn.OnClick = CheatClicked;
   if (KillZombiesBtn != None) KillZombiesBtn.OnClick = CheatClicked;
   if (GhostBtn != None) GhostBtn.OnClick = CheatClicked;
   if (WalkBtn != None) WalkBtn.OnClick = CheatClicked;
   if (Slomo04Btn != None) Slomo04Btn.OnClick = CheatClicked;
   if (Slomo10Btn != None) Slomo10Btn.OnClick = CheatClicked;

   if (WarpBox != None) {
      WarpBox.AddItem("< Select Chapter to Warp >");
      WarpBox.AddItem("Chapter 1: Farmhouse");
      WarpBox.AddItem("Chapter 2: Cornfield");
      WarpBox.AddItem("Chapter 3: Neighbor Town");
      WarpBox.AddItem("Chapter 4: The Church");
      WarpBox.AddItem("Chapter 5: General Hospital");
      WarpBox.AddItem("Chapter 6: City Sewers");
      WarpBox.AddItem("Chapter 7: Commercial Docks");
      WarpBox.AddItem("Chapter 8: Penthouse Tower");
      WarpBox.SetIndex(0);
      WarpBox.HideListBox();
      WarpBox.OnChange = WarpChange;
   }

   bCheatsInit = true;
}

defaultproperties
{
     // Top Action Button to Open Full Console Terminal
     Begin Object Class=GUIButton Name=cConsoleBtn
         Caption="[ OPEN UNREAL CONSOLE TERMINAL >> ]"
         StyleName="BBRoundButton"
         Hint="Open interactive Unreal Engine console dialog with keyboard and quick command chips."
         WinTop=0.020000
         WinLeft=0.040000
         WinWidth=0.890000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cConsoleBtn"
     End Object
     ConsoleBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cConsoleBtn'

     // Row 1
     Begin Object Class=GUIButton Name=cGodBtn
         Caption="God Mode (Toggle)"
         StyleName="BBRoundButton"
         WinTop=0.085000
         WinLeft=0.040000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cGodBtn"
     End Object
     GodBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cGodBtn'

     Begin Object Class=GUIButton Name=cLoadedBtn
         Caption="All Weapons & Ammo"
         StyleName="BBRoundButton"
         WinTop=0.085000
         WinLeft=0.500000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cLoadedBtn"
     End Object
     LoadedBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cLoadedBtn'

     // Row 2: Kung Fu & Ammo Refill
     Begin Object Class=GUIButton Name=cKungFuBtn
         Caption="Kung Fu Mode (Toggle)"
         StyleName="BBRoundButton"
         WinTop=0.150000
         WinLeft=0.040000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cKungFuBtn"
     End Object
     KungFuBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cKungFuBtn'

     Begin Object Class=GUIButton Name=cAllAmmoBtn
         Caption="Refill All Ammo"
         StyleName="BBRoundButton"
         WinTop=0.150000
         WinLeft=0.500000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cAllAmmoBtn"
     End Object
     AllAmmoBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cAllAmmoBtn'

     // Row 3: Camera BehindView
     Begin Object Class=GUIButton Name=cBehindView1Btn
         Caption="3rd Person View (behindview 1)"
         StyleName="BBRoundButton"
         WinTop=0.215000
         WinLeft=0.040000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cBehindView1Btn"
     End Object
     BehindView1Btn=GUIButton'DOTZMenu.DOTZCheatsSettings.cBehindView1Btn'

     Begin Object Class=GUIButton Name=cBehindView0Btn
         Caption="1st Person View (behindview 0)"
         StyleName="BBRoundButton"
         WinTop=0.215000
         WinLeft=0.500000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cBehindView0Btn"
     End Object
     BehindView0Btn=GUIButton'DOTZMenu.DOTZCheatsSettings.cBehindView0Btn'

     // Row 4: Ghost & Walk
     Begin Object Class=GUIButton Name=cGhostBtn
         Caption="Ghost (No Clip / Fly)"
         StyleName="BBRoundButton"
         WinTop=0.280000
         WinLeft=0.040000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cGhostBtn"
     End Object
     GhostBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cGhostBtn'

     Begin Object Class=GUIButton Name=cWalkBtn
         Caption="Walk (Normal Physics)"
         StyleName="BBRoundButton"
         WinTop=0.280000
         WinLeft=0.500000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cWalkBtn"
     End Object
     WalkBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cWalkBtn'

     // Row 5: Game Speed (Slomo)
     Begin Object Class=GUIButton Name=cSlomo04Btn
         Caption="Slow-Mo (0.4x)"
         StyleName="BBRoundButton"
         WinTop=0.345000
         WinLeft=0.040000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cSlomo04Btn"
     End Object
     Slomo04Btn=GUIButton'DOTZMenu.DOTZCheatsSettings.cSlomo04Btn'

     Begin Object Class=GUIButton Name=cSlomo10Btn
         Caption="Normal Speed (1.0x)"
         StyleName="BBRoundButton"
         WinTop=0.345000
         WinLeft=0.500000
         WinWidth=0.430000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cSlomo10Btn"
     End Object
     Slomo10Btn=GUIButton'DOTZMenu.DOTZCheatsSettings.cSlomo10Btn'

     // Row 6: Kill All Zombies
     Begin Object Class=GUIButton Name=cKillZombiesBtn
         Caption="Kill All Zombies"
         StyleName="BBRoundButton"
         WinTop=0.410000
         WinLeft=0.040000
         WinWidth=0.890000
         WinHeight=0.055000
         __OnClick__Delegate=DOTZCheatsSettings.CheatClicked
         Name="cKillZombiesBtn"
     End Object
     KillZombiesBtn=GUIButton'DOTZMenu.DOTZCheatsSettings.cKillZombiesBtn'

     // Row 7: Warp to Level
     Begin Object Class=GUILabel Name=cWarpLabel
         Caption="Chapter Warp:"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.475000
         WinLeft=0.040000
         WinWidth=0.220000
         WinHeight=0.050000
         Name="cWarpLabel"
     End Object
     WarpLabel=GUILabel'DOTZMenu.DOTZCheatsSettings.cWarpLabel'

     Begin Object Class=BBComboBox Name=cWarpBox
         IniOption="@Internal"
         IniDefault="< Select Chapter to Warp >"
         WinTop=0.475000
         WinLeft=0.270000
         WinWidth=0.660000
         __OnChange__Delegate=DOTZCheatsSettings.WarpChange
         Name="cWarpBox"
     End Object
     WarpBox=GUIComboBox'DOTZMenu.DOTZCheatsSettings.cWarpBox'

     // Row 8: Console Output Status
     Begin Object Class=GUILabel Name=cConsoleOutput
         Caption="Ready. Tap any cheat button above or open the console terminal."
         TextColor=(B=0,G=255,R=255)
         TextFont="PlainGuiFont"
         TextAlign=TXTA_Center
         WinTop=0.535000
         WinLeft=0.040000
         WinWidth=0.890000
         WinHeight=0.050000
         Name="cConsoleOutput"
     End Object
     ConsoleOutput=GUILabel'DOTZMenu.DOTZCheatsSettings.cConsoleOutput'

     ClickSound=Sound'DOTZXInterface.Select'
     WinTop=55.980499
     WinHeight=0.807813
}
