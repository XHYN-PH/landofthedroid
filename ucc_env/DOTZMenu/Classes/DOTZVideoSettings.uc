/**
 * DOTZVideoSettings - Native in-game video and graphics configuration panel.
 * 2-column balanced layout with Resolution, Video Mode, Detail Level, Shadows,
 * Gamma, Aspect Ratio, FXAA, AMD CAS Sharpening, Color Grading, HDR/Bloom,
 * Horror Vignette, FOV, Target FPS, and Performance OSD.
 */
class DOTZVideoSettings extends DOTZSettingsPanel config(User);

// graphics
var config enum EGraphicsLevel {
   DTGFX_LOW,
   DTGFX_MED,
   DTGFX_HIGH
} GraphicsDetailLevel;

// video modes
struct DisplayMode {
   var int Width;
   var int Height;
};

// Mobile / Advanced Video Settings (Persistent)
var config int iFXAAIndex;
var config int iCASIndex;
var config int iFilterIndex;
var config int iHDRIndex;
var config int iFOVValue;
var config int iFPSIndex;
var config int iAspectIndex;
var config int iVignetteIndex;

// Left Column Controls
var Automated GUILabel    resolutionLabel;
var Automated GuiComboBox resolutionBox;
var Automated GUILabel    videoLabel;
var Automated GuiComboBox colorDepthBox;
var Automated GUILabel    graphicsLabel;
var Automated GUIComboBox GraphicsComboBox;
var Automated GUILabel    ShadowLabel;
var Automated GuiComboBox ShadowBox;
var Automated GUILabel    gammaLabel;
var Automated GuiSlider   gammaSlider;
var Automated GUILabel    aspectLabel;
var Automated GuiComboBox aspectBox;

// Right Column Controls
var Automated GUILabel    fxaaLabel;
var Automated GuiComboBox fxaaBox;
var Automated GUILabel    casLabel;
var Automated GuiComboBox casBox;
var Automated GUILabel    filterLabel;
var Automated GuiComboBox filterBox;
var Automated GUILabel    hdrLabel;
var Automated GuiComboBox hdrBox;
var Automated GUILabel    vignetteLabel;
var Automated GuiComboBox vignetteBox;
var Automated GUILabel    fovLabel;
var Automated GuiSlider   fovSlider;
var Automated GUILabel    fpsLabel;
var Automated GuiComboBox fpsBox;

// Actions
var Automated GuiButton   videoApplyButton;

var localized string      BitDepthText[2];
var private bool          bInitialized;
var string                OrigRes;
var string                OrigBitDepth;
var localized Array<String> graphicsLevels;
var Array<DisplayMode>    DisplayModes;
var sound                 clickSound;

const SHADOW_LABEL = 6;
const SHADOW_BOX = 7;

struct ShadowType {
    var string label;
    var int Type;
};

var localized Array<ShadowType> ShadowTypes;

/****************************************************************
 * AdvancedVideoChange
 ****************************************************************
 */
function AdvancedVideoChange(GUIComponent Sender) {
   if (!bInitialized) return;
   if (GUIComboBox(Sender) != None) {
      GUIComboBox(Sender).HideListBox();
   }
   if (Sender == fovSlider) {
      fovLabel.Caption = "FOV (" $ int(fovSlider.Value) $ ")";
      PlayerOwner().ConsoleCommand("fov " $ int(fovSlider.Value));
      Class.default.iFOVValue = int(fovSlider.Value);
      Class.static.StaticSaveConfig();
   }
   if (Sender == aspectBox) {
      if (aspectBox.GetIndex() == 1) {
         PlayerOwner().ConsoleCommand("setwidescreen 0");
      } else if (aspectBox.GetIndex() == 2) {
         PlayerOwner().ConsoleCommand("setwidescreen 2");
      } else {
         PlayerOwner().ConsoleCommand("setwidescreen 1");
      }
      Class.default.iAspectIndex = aspectBox.GetIndex();
      Class.static.StaticSaveConfig();
   }
   videoApplyButton.bVisible = true;
}

/****************************************************************
 * InitComponent
 ****************************************************************
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner) {
   local int i;
   local int curFpsIdx, curFxaaIdx, curFilterIdx, curHdrIdx, curFovVal, curCasIdx, curAspectIdx, curVignetteIdx;

   Super.InitComponent(MyController, MyOwner);

   for ( i = 0; i < graphicsLevels.length; ++i ) {
      GraphicsComboBox.AddItem( graphicsLevels[i] );
   }
   InternalOnLoadINI( GraphicsComboBox, "INIT-GRAPHICS" );

   colorDepthBox.AddItem( BitDepthText[0] );
   colorDepthBox.AddItem( BitDepthText[1] );
   colorDepthBox.ReadOnly( true );
   resolutionBox.ReadOnly( true );
   CheckSupportedResolutions();

   InternalOnLoadINI( colorDepthBox, "INIT-GRAPHICS" );

   for ( i = 0; i < ShadowTypes.length; i++ ) {
      ShadowBox.AddItem( ShadowTypes[i].label );
   }
   InitShadowBox( ShadowBox, "INIT-DIFFICULTY" );

   gammaSlider.SetValue(float(PlayerOwner().ConsoleCommand("get ini:Engine.Engine.ViewPortManager Gamma")));
   gammaLabel.Caption = "Gamma (" $ Left(string(gammaSlider.Value), 4) $ ")";

   // Initialize Advanced Video Defaults
   curFpsIdx = iFPSIndex;
   if (curFpsIdx < 0 || curFpsIdx > 4) curFpsIdx = Class.default.iFPSIndex;
   if (curFpsIdx < 0 || curFpsIdx > 4) curFpsIdx = 1;

   curFxaaIdx = iFXAAIndex;
   if (curFxaaIdx < 0 || curFxaaIdx > 4) curFxaaIdx = Class.default.iFXAAIndex;
   if (curFxaaIdx < 0 || curFxaaIdx > 4) curFxaaIdx = 2;

   curCasIdx = iCASIndex;
   if (curCasIdx < 0 || curCasIdx > 1) curCasIdx = Class.default.iCASIndex;
   if (curCasIdx < 0 || curCasIdx > 1) curCasIdx = 1;

   curFilterIdx = iFilterIndex;
   if (curFilterIdx < 0 || curFilterIdx > 4) curFilterIdx = Class.default.iFilterIndex;
   if (curFilterIdx < 0 || curFilterIdx > 4) curFilterIdx = 0;

   curHdrIdx = iHDRIndex;
   if (curHdrIdx < 0 || curHdrIdx > 3) curHdrIdx = Class.default.iHDRIndex;
   if (curHdrIdx < 0 || curHdrIdx > 3) curHdrIdx = 1;

   curVignetteIdx = iVignetteIndex;
   if (curVignetteIdx < 0 || curVignetteIdx > 2) curVignetteIdx = Class.default.iVignetteIndex;
   if (curVignetteIdx < 0 || curVignetteIdx > 2) curVignetteIdx = 1;

   curAspectIdx = iAspectIndex;
   if (curAspectIdx < 0 || curAspectIdx > 2) curAspectIdx = Class.default.iAspectIndex;
   if (curAspectIdx < 0 || curAspectIdx > 2) curAspectIdx = 0;

   curFovVal = iFOVValue;
   if (curFovVal < 60 || curFovVal > 110) curFovVal = Class.default.iFOVValue;
   if (curFovVal < 60 || curFovVal > 110) curFovVal = 85;

   // Left Column: Aspect Ratio
   if (aspectBox != None) {
      aspectBox.AddItem("16:9 Widescreen");
      aspectBox.AddItem("Classic 4:3");
      aspectBox.AddItem("Full Stretch");
      aspectBox.SetIndex(curAspectIdx);
      aspectBox.OnChange = AdvancedVideoChange;
   }
   if (curAspectIdx == 1) {
      PlayerOwner().ConsoleCommand("setwidescreen 0");
   } else if (curAspectIdx == 2) {
      PlayerOwner().ConsoleCommand("setwidescreen 2");
   } else {
      PlayerOwner().ConsoleCommand("setwidescreen 1");
   }

   // Right Column: Advanced Post-FX & Telemetry
   fxaaBox.AddItem("Disabled");
   fxaaBox.AddItem("FXAA Low");
   fxaaBox.AddItem("FXAA Medium");
   fxaaBox.AddItem("FXAA High");
   fxaaBox.AddItem("FXAA Ultra");
   fxaaBox.SetIndex(curFxaaIdx);
   fxaaBox.OnChange = AdvancedVideoChange;

   if (casBox != None) {
      casBox.AddItem("Disabled");
      casBox.AddItem("FidelityFX CAS");
      casBox.SetIndex(curCasIdx);
      casBox.OnChange = AdvancedVideoChange;
   }

   filterBox.AddItem("Normal");
   filterBox.AddItem("Romero Green");
   filterBox.AddItem("Noir B&W");
   filterBox.AddItem("Apocalypse");
   filterBox.AddItem("Warm Sunset");
   filterBox.SetIndex(curFilterIdx);
   filterBox.OnChange = AdvancedVideoChange;

   hdrBox.AddItem("Disabled");
   hdrBox.AddItem("Subtle Bloom");
   hdrBox.AddItem("Cinematic HDR");
   hdrBox.AddItem("Intense HDR");
   hdrBox.SetIndex(curHdrIdx);
   hdrBox.OnChange = AdvancedVideoChange;

   if (vignetteBox != None) {
      vignetteBox.AddItem("Disabled");
      vignetteBox.AddItem("Subtle");
      vignetteBox.AddItem("Cinematic");
      vignetteBox.SetIndex(curVignetteIdx);
      vignetteBox.OnChange = AdvancedVideoChange;
   }

   fovSlider.MinValue = 60.0;
   fovSlider.MaxValue = 110.0;
   fovSlider.bIntSlider = true;
   fovSlider.SetValue(curFovVal);
   fovSlider.OnChange = AdvancedVideoChange;
   fovLabel.Caption = "FOV (" $ int(fovSlider.Value) $ ")";

   fpsBox.AddItem("30 FPS");
   fpsBox.AddItem("60 FPS");
   fpsBox.AddItem("90 FPS");
   fpsBox.AddItem("120 FPS");
   fpsBox.AddItem("Unlimited");
   fpsBox.SetIndex(curFpsIdx);
   fpsBox.OnChange = AdvancedVideoChange;

   OrigRes = resolutionBox.Edit.GetText();
   OrigBitDepth = colorDepthBox.GetText();

   bInitialized = true;
}

/****************************************************************
 * CheckSupportedResolutions
 ****************************************************************
 */
function CheckSupportedResolutions() {
   local int Index;
   local int BitDepth;
   local string CurrentSelection;

   CurrentSelection = resolutionBox.Edit.GetText();
   if (resolutionBox.ItemCount() > 0) {
      resolutionBox.RemoveItem( 0, resolutionBox.ItemCount() );
   }
   if (colorDepthBox.GetText() == BitDepthText[0]) {
      BitDepth = 16;
   } else {
      BitDepth = 32;
   }

   for (Index = 0; Index < DisplayModes.length; Index++) {
      if (PlayerOwner().ConsoleCommand( "SupportedResolution"
             @ "WIDTH="  $ DisplayModes[Index].Width
             @ "HEIGHT=" $ DisplayModes[Index].Height
             @ "BITDEPTH=" $ BitDepth ) != "") {
         resolutionBox.AddItem( DisplayModes[Index].Width $ "x" $ DisplayModes[Index].Height );
      }
   }

   if (resolutionBox.ItemCount() == 0) {
      resolutionBox.AddItem("960x720");
      resolutionBox.AddItem("1024x768");
      resolutionBox.AddItem("1280x720");
      resolutionBox.AddItem("1600x720");
      resolutionBox.AddItem("1600x900");
      resolutionBox.AddItem("1920x1080");
      resolutionBox.AddItem("2400x1080");
   }

   if (CurrentSelection != "") {
      resolutionBox.SetText( CurrentSelection );
   } else {
      InternalOnLoadINI( resolutionBox, "INIT-GRAPHICS" );
   }
}

/****************************************************************
 * InternalOnLoadINI
 ****************************************************************
 */
function InternalOnLoadINI(GUIComponent Sender, string s) {
   local String tempstr;

   switch (Sender) {
   case resolutionBox:
      tempstr = PlayerOwner().ConsoleCommand( "GetCurrentRes" );
      if (tempstr == "") tempstr = "1280x720";
      if (resolutionBox.Find(tempstr) == "") {
         resolutionBox.AddItem(tempstr);
      }
      resolutionBox.SetText( tempstr );
      break;

   case colorDepthBox:
      tempstr = PlayerOwner().ConsoleCommand( "GetCurrentColorDepth" );
      if (tempstr == "16") {
         colorDepthBox.SetText( BitDepthText[0] );
      } else {
         colorDepthBox.SetText( BitDepthText[1] );
      }
      break;

   case GraphicsComboBox:
      GraphicsComboBox.SetIndex( int(GraphicsDetailLevel) );
      break;
   }
}

/****************************************************************
 * SliderChange
 ****************************************************************
 */
function SliderChange(GUIComponent Sender) {
   if (!bInitialized) return;
   videoApplyButton.bVisible = true;
   if (Sender == gammaSlider) {
       gammaLabel.Caption = "Gamma (" $ Left(string(gammaSlider.Value), 4) $ ")";
       PlayerOwner().ConsoleCommand("SetGamma " $ gammaSlider.Value);
   }
}

/****************************************************************
 * GraphicsChange
 ****************************************************************
 */
function GraphicsChange(GUIComponent Sender) {
   if (!bInitialized || GraphicsComboBox.ItemCount() < graphicsLevels.length) {
      return;
   }
   if (GuiComboBox(Sender) != None) {
      GuiComboBox(Sender).HideListBox();
   }
   videoApplyButton.bVisible = true;
}

/****************************************************************
 * SetGraphicsDetailHigh
 ****************************************************************
 */
function SetGraphicsDetailHigh() {
   SetTextureDetail( DTGFX_HIGH );
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice HighDetailActors True");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice SuperHighDetailActors True");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager Coronas True");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager Projectors True");
   PlayerOwner().ConsoleCommand("ini:Engine.Engine.ViewportManager NoDynamicLights False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager DecoLayers True");
   PlayerOwner().ConsoleCommand("ini:Engine.Engine.RenderDevice UseTrilinear True");
   PlayerOwner().Level.DetailChange(DM_SuperHigh);
   PlayerOwner().Level.default.PhysicsDetailLevel = PDL_High;
   PlayerOwner().Level.default.DecalStayScale = 2;
   PlayerOwner().Level.PhysicsDetailLevel = PlayerOwner().Level.default.PhysicsDetailLevel;
   PlayerOwner().Level.DecalStayScale = PlayerOwner().Level.default.DecalStayScale;
   PlayerOwner().Level.SaveConfig();
   GraphicsDetailLevel = DTGFX_HIGH;
}

/****************************************************************
 * SetGraphicsDetailMedium
 ****************************************************************
 */
function SetGraphicsDetailMedium() {
   SetTextureDetail( DTGFX_MED );
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice HighDetailActors True");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice SuperHighDetailActors False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager Coronas True");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager Projectors True");
   PlayerOwner().ConsoleCommand("ini:Engine.Engine.ViewportManager NoDynamicLights False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager DecoLayers True");
   PlayerOwner().ConsoleCommand("ini:Engine.Engine.RenderDevice UseTrilinear False");
   PlayerOwner().Level.DetailChange(DM_High);
   PlayerOwner().Level.default.PhysicsDetailLevel = PDL_Medium;
   PlayerOwner().Level.default.DecalStayScale = 1;
   PlayerOwner().Level.PhysicsDetailLevel = PlayerOwner().Level.default.PhysicsDetailLevel;
   PlayerOwner().Level.DecalStayScale = PlayerOwner().Level.default.DecalStayScale;
   PlayerOwner().Level.SaveConfig();
   GraphicsDetailLevel = DTGFX_MED;
}

/****************************************************************
 * SetGraphicsDetailLow
 ****************************************************************
 */
function SetGraphicsDetailLow() {
   SetTextureDetail( DTGFX_LOW );
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice HighDetailActors False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice SuperHighDetailActors False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager Coronas True");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager Projectors False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager NoDynamicLights False");
   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewportManager DecoLayers True");
   PlayerOwner().ConsoleCommand("ini:Engine.Engine.RenderDevice UseTrilinear False");
   PlayerOwner().Level.DetailChange(DM_Low);
   PlayerOwner().Level.default.PhysicsDetailLevel = PDL_Low;
   PlayerOwner().Level.default.DecalStayScale = 0;
   PlayerOwner().Level.PhysicsDetailLevel = PlayerOwner().Level.default.PhysicsDetailLevel;
   PlayerOwner().Level.DecalStayScale = PlayerOwner().Level.default.DecalStayScale;
   PlayerOwner().Level.SaveConfig();
   GraphicsDetailLevel = DTGFX_LOW;
}

/****************************************************************
 * SetTextureDetail
 ****************************************************************
 */
function SetTextureDetail( EGraphicsLevel level ) {
   local String t,v;

   t = "set ini:Engine.Engine.ViewportManager TextureDetail";
   switch ( level ) {
   case DTGFX_HIGH: v = "UltraHigh"; break;
   case DTGFX_MED:  v = "Normal"; break;
   case DTGFX_LOW:
   default:         v = "UltraLow"; break;
   }
   PlayerOwner().ConsoleCommand(t$"Terrain"@v);
   PlayerOwner().ConsoleCommand(t$"World"@v);
   PlayerOwner().ConsoleCommand(t$"Lightmap"@v);
   PlayerOwner().ConsoleCommand(t$"WeaponSkin"@v);
   PlayerOwner().ConsoleCommand(t$"PlayerSkin"@v);
   PlayerOwner().ConsoleCommand("flush");
}

/****************************************************************
 * UnHideVideoApply
 ****************************************************************
 */
function UnHideVideoApply( GUIComponent Sender ) {
   if (resolutionBox != None) resolutionBox.HideListBox();
   if (colorDepthBox != None) colorDepthBox.HideListBox();
   if (GraphicsComboBox != None) GraphicsComboBox.HideListBox();
   if (ShadowBox != None) ShadowBox.HideListBox();
   if (aspectBox != None) aspectBox.HideListBox();
   videoApplyButton.bVisible = true;
}

/****************************************************************
 * ApplyChanges
 ****************************************************************
 */
function bool ApplyChanges( GUIComponent Sender ) {
   local string DesiredRes;
   local int targetFps;

   if (PlayerOwner().Pawn != None) {
       PlayerOwner().Pawn.PlayOwnedSound(ClickSound, SLOT_Interface, 1.0);
   }

   switch (fpsBox.GetIndex()) {
      case 0: targetFps = 30; break;
      case 1: targetFps = 60; break;
      case 2: targetFps = 90; break;
      case 3: targetFps = 120; break;
      case 4: targetFps = 0; break;
      default: targetFps = 60; break;
   }
   PlayerOwner().ConsoleCommand("set ini:WinDrv.WindowsClient DesiredRefreshRate " $ targetFps);
   PlayerOwner().ConsoleCommand("setfps " $ targetFps);

   PlayerOwner().ConsoleCommand("set ini:D3DDrv.D3DRenderDevice FXAALevel " $ fxaaBox.GetIndex());
   PlayerOwner().ConsoleCommand("setfxaa " $ fxaaBox.GetIndex());

   PlayerOwner().ConsoleCommand("set ini:D3DDrv.D3DRenderDevice CASLevel " $ casBox.GetIndex());
   PlayerOwner().ConsoleCommand("setcas " $ casBox.GetIndex());

   PlayerOwner().ConsoleCommand("set ini:D3DDrv.D3DRenderDevice ColorFilter " $ filterBox.GetIndex());
   PlayerOwner().ConsoleCommand("setfilter " $ filterBox.GetIndex());

   PlayerOwner().ConsoleCommand("set ini:D3DDrv.D3DRenderDevice HDRLevel " $ hdrBox.GetIndex());
   PlayerOwner().ConsoleCommand("sethdr " $ hdrBox.GetIndex());

   PlayerOwner().ConsoleCommand("set ini:Engine.PlayerInput DefaultFOV " $ int(fovSlider.Value));
   PlayerOwner().ConsoleCommand("fov " $ int(fovSlider.Value));

   if (aspectBox.GetIndex() == 1) {
      PlayerOwner().ConsoleCommand("setwidescreen 0");
   } else if (aspectBox.GetIndex() == 2) {
      PlayerOwner().ConsoleCommand("setwidescreen 2");
   } else {
      PlayerOwner().ConsoleCommand("setwidescreen 1");
   }
   PlayerOwner().ConsoleCommand("setvignette " $ vignetteBox.GetIndex());

   PlayerOwner().ConsoleCommand("set ini:Engine.Engine.ViewPortManager Gamma " $ gammaSlider.Value);
   PlayerOwner().ConsoleCommand("SetGamma " $ gammaSlider.Value);

   switch (GraphicsComboBox.GetIndex()) {
   case 2: SetGraphicsDetailHigh(); break;
   case 1: SetGraphicsDetailMedium(); break;
   case 0:
   default: SetGraphicsDetailLow(); break;
   }

   if (ShadowBox.GetIndex() >= 0 && ShadowBox.GetIndex() < ShadowTypes.length) {
      SetShadowType(ShadowTypes[ShadowBox.GetIndex()].Type);
   }

   Class.default.iFPSIndex = fpsBox.GetIndex();
   Class.default.iFXAAIndex = fxaaBox.GetIndex();
   Class.default.iCASIndex = casBox.GetIndex();
   Class.default.iFilterIndex = filterBox.GetIndex();
   Class.default.iHDRIndex = hdrBox.GetIndex();
   Class.default.iFOVValue = int(fovSlider.Value);
   Class.default.iAspectIndex = aspectBox.GetIndex();
   Class.default.iVignetteIndex = vignetteBox.GetIndex();

   iFPSIndex = Class.default.iFPSIndex;
   iFXAAIndex = Class.default.iFXAAIndex;
   iCASIndex = Class.default.iCASIndex;
   iFilterIndex = Class.default.iFilterIndex;
   iHDRIndex = Class.default.iHDRIndex;
   iFOVValue = Class.default.iFOVValue;
   iAspectIndex = Class.default.iAspectIndex;
   iVignetteIndex = Class.default.iVignetteIndex;

   Class.static.StaticSaveConfig();
   SaveConfig();
   class'PlayerInput'.static.StaticSaveConfig();

   if (resolutionBox.Edit.GetText() != OrigRes || colorDepthBox.GetText() != OrigBitDepth) {
      DesiredRes = resolutionBox.Edit.GetText();
      if ( colorDepthBox.GetText() == BitDepthText[0] ) {
         DesiredRes = DesiredRes$"x16";
      } else {
         DesiredRes = DesiredRes$"x32";
      }
      PlayerOwner().ConsoleCommand("set ini:Engine.Engine.RenderDevice Use16bit"
                             @( InStr(DesiredRes, "x16") != -1 ));
      PlayerOwner().ConsoleCommand( "setres " @ DesiredRes );
      OrigRes = resolutionBox.Edit.GetText();
      OrigBitDepth = colorDepthBox.GetText();
   }
   videoApplyButton.bVisible = false;
   return true;
}

/****************************************************************
 * InternalOnSaveINI
 ****************************************************************
 */
function string InternalOnSaveINI(GUIComponent Sender) {
   return "";
}

/****************************************************************
 * ShadowChange
 ****************************************************************
 */
function ShadowChange(GUIComponent Sender) {
   if (!bInitialized || ShadowBox.ItemCount() < ShadowTypes.length) {
      return;
   }
   if (GuiComboBox(Sender) != None) {
      GuiComboBox(Sender).HideListBox();
   }
   videoApplyButton.bVisible = true;
}

/*****************************************************************
 * SetShadowType
 *****************************************************************
 */
function SetShadowType(int shadowtype) {
    local AdvancedPawn temp;

    switch(shadowtype) {
    case 0:
        class'AdvancedGameInfo'.default.iUseShadows = AdvancedGameInfo(PlayerOwner().Level.Game).E_ShadowType.SHADOW_NONE;
        break;
    case 1:
        class'AdvancedGameInfo'.default.iUseShadows = AdvancedGameInfo(PlayerOwner().Level.Game).E_ShadowType.SHADOW_PROJ;
        break;
    case 2:
        class'AdvancedGameInfo'.default.iUseShadows = AdvancedGameInfo(PlayerOwner().Level.Game).E_ShadowType.SHADOW_BLOB;
        break;
    }

    Class'AdvancedGameInfo'.static.StaticSaveConfig();
    foreach PlayerOwner().AllActors(class'AdvancedPawn', temp) {
        temp.CheckShadow();
    }
}

/*****************************************************************
 * InitShadowBox
 *****************************************************************
 */
function InitShadowBox(GUIComponent Sender, string s) {
   local int i;
   for (i = 0; i < ShadowTypes.length; i++) {
      if (ShadowTypes[i].Type == class'AdvancedGameInfo'.default.iUseShadows) {
         ShadowBox.SetIndex(i);
         return;
      }
   }
}

defaultproperties
{
     // Left Column: Row 0 - Resolution
     Begin Object Class=GUILabel Name=resolution_label
         Caption="Resolution"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.030000
         WinLeft=0.030000
         WinWidth=0.210000
         WinHeight=0.050000
         Name="resolution_label"
     End Object
     resolutionLabel=GUILabel'DOTZMenu.DOTZVideoSettings.resolution_label'

     Begin Object Class=BBComboBox Name=VideoResolution
         IniOption="@INTERNAL"
         IniDefault="1280x720"
         WinTop=0.030000
         WinLeft=0.245000
         WinWidth=0.235000
         __OnChange__Delegate=DOTZVideoSettings.UnHideVideoApply
         __OnLoadINI__Delegate=DOTZVideoSettings.InternalOnLoadINI
         __OnSaveINI__Delegate=DOTZVideoSettings.InternalOnSaveINI
         Name="VideoResolution"
     End Object
     resolutionBox=BBComboBox'DOTZMenu.DOTZVideoSettings.VideoResolution'

     // Left Column: Row 1 - Video Mode
     Begin Object Class=GUILabel Name=video_label
         Caption="Video Mode"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.110000
         WinLeft=0.030000
         WinWidth=0.210000
         WinHeight=0.050000
         Name="video_label"
     End Object
     videoLabel=GUILabel'DOTZMenu.DOTZVideoSettings.video_label'

     Begin Object Class=BBComboBox Name=VideoColorDepth
         IniOption="@Internal"
         IniDefault="false"
         WinTop=0.110000
         WinLeft=0.245000
         WinWidth=0.235000
         __OnChange__Delegate=DOTZVideoSettings.UnHideVideoApply
         __OnLoadINI__Delegate=DOTZVideoSettings.InternalOnLoadINI
         __OnSaveINI__Delegate=DOTZVideoSettings.InternalOnSaveINI
         Name="VideoColorDepth"
     End Object
     colorDepthBox=BBComboBox'DOTZMenu.DOTZVideoSettings.VideoColorDepth'

     // Left Column: Row 2 - Detail Level
     Begin Object Class=GUILabel Name=graphics_label
         Caption="Detail Level"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.190000
         WinLeft=0.030000
         WinWidth=0.210000
         WinHeight=0.050000
         Name="graphics_label"
     End Object
     graphicsLabel=GUILabel'DOTZMenu.DOTZVideoSettings.graphics_label'

     Begin Object Class=BBComboBox Name=cComboBox2
         IniOption="@Internal"
         Hint="Choose how detailed the graphics are"
         WinTop=0.190000
         WinLeft=0.245000
         WinWidth=0.235000
         TabOrder=1
         __OnChange__Delegate=DOTZVideoSettings.GraphicsChange
         __OnLoadINI__Delegate=DOTZVideoSettings.InternalOnLoadINI
         __OnSaveINI__Delegate=DOTZVideoSettings.InternalOnSaveINI
         Name="cComboBox2"
     End Object
     GraphicsComboBox=BBComboBox'DOTZMenu.DOTZVideoSettings.cComboBox2'

     // Left Column: Row 3 - Shadows
     Begin Object Class=GUILabel Name=shadow_label1
         Caption="Dynamic Shadows"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.270000
         WinLeft=0.030000
         WinWidth=0.210000
         WinHeight=0.050000
         Name="shadow_label1"
     End Object
     ShadowLabel=GUILabel'DOTZMenu.DOTZVideoSettings.shadow_label1'

     Begin Object Class=BBComboBox Name=cComboBox7
         IniOption="@Internal"
         IniDefault="High Detail"
         WinTop=0.270000
         WinLeft=0.245000
         WinWidth=0.235000
         TabOrder=4
         __OnChange__Delegate=DOTZVideoSettings.ShadowChange
         __OnLoadINI__Delegate=DOTZVideoSettings.InitShadowBox
         __OnSaveINI__Delegate=DOTZVideoSettings.InternalOnSaveINI
         Name="cComboBox7"
     End Object
     ShadowBox=BBComboBox'DOTZMenu.DOTZVideoSettings.cComboBox7'

     // Left Column: Row 4 - Gamma Level
     Begin Object Class=GUILabel Name=gamma_label
         Caption="Gamma Level"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.350000
         WinLeft=0.030000
         WinWidth=0.210000
         WinHeight=0.050000
         Name="gamma_label"
     End Object
     gammaLabel=GUILabel'DOTZMenu.DOTZVideoSettings.gamma_label'

     Begin Object Class=DOTZSlider Name=gamma_slider
         MaxValue=2.500000
         IniOption="ini:Engine.Engine.ViewPortManager Gamma"
         IniDefault="1"
         Hint="Changes the gamma for the game."
         WinTop=0.345000
         WinLeft=0.245000
         WinWidth=0.235000
         WinHeight=0.040000
         __OnChange__Delegate=DOTZVideoSettings.SliderChange
         Name="gamma_slider"
     End Object
     gammaSlider=DOTZSlider'DOTZMenu.DOTZVideoSettings.gamma_slider'

     // Left Column: Row 5 - Aspect Ratio
     Begin Object Class=GUILabel Name=aspect_label
         Caption="Aspect Ratio"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.430000
         WinLeft=0.030000
         WinWidth=0.210000
         WinHeight=0.050000
         Name="aspect_label"
     End Object
     aspectLabel=GUILabel'DOTZMenu.DOTZVideoSettings.aspect_label'

     Begin Object Class=BBComboBox Name=aspect_box
         IniOption="@Internal"
         IniDefault="Widescreen"
         WinTop=0.430000
         WinLeft=0.245000
         WinWidth=0.235000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="aspect_box"
     End Object
     aspectBox=BBComboBox'DOTZMenu.DOTZVideoSettings.aspect_box'

     // Right Column: Row 0 - Anti-Aliasing (FXAA)
     Begin Object Class=GUILabel Name=fxaa_label
         Caption="Anti-Aliasing"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.030000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="fxaa_label"
     End Object
     fxaaLabel=GUILabel'DOTZMenu.DOTZVideoSettings.fxaa_label'

     Begin Object Class=BBComboBox Name=fxaa_box
         IniOption="@Internal"
         IniDefault="FXAA Medium"
         WinTop=0.030000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="fxaa_box"
     End Object
     fxaaBox=BBComboBox'DOTZMenu.DOTZVideoSettings.fxaa_box'

     // Right Column: Row 1 - AMD CAS Sharpening
     Begin Object Class=GUILabel Name=cas_label
         Caption="CAS Sharpening"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.110000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="cas_label"
     End Object
     casLabel=GUILabel'DOTZMenu.DOTZVideoSettings.cas_label'

     Begin Object Class=BBComboBox Name=cas_box
         IniOption="@Internal"
         IniDefault="FidelityFX CAS"
         WinTop=0.110000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="cas_box"
     End Object
     casBox=BBComboBox'DOTZMenu.DOTZVideoSettings.cas_box'

     // Right Column: Row 2 - Color Grading
     Begin Object Class=GUILabel Name=filter_label
         Caption="Color Grading"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.190000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="filter_label"
     End Object
     filterLabel=GUILabel'DOTZMenu.DOTZVideoSettings.filter_label'

     Begin Object Class=BBComboBox Name=filter_box
         IniOption="@Internal"
         IniDefault="Normal"
         WinTop=0.190000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="filter_box"
     End Object
     filterBox=BBComboBox'DOTZMenu.DOTZVideoSettings.filter_box'

     // Right Column: Row 3 - HDR / Bloom
     Begin Object Class=GUILabel Name=hdr_label
         Caption="HDR / Bloom"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.270000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="hdr_label"
     End Object
     hdrLabel=GUILabel'DOTZMenu.DOTZVideoSettings.hdr_label'

     Begin Object Class=BBComboBox Name=hdr_box
         IniOption="@Internal"
         IniDefault="Subtle Bloom"
         WinTop=0.270000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="hdr_box"
     End Object
     hdrBox=BBComboBox'DOTZMenu.DOTZVideoSettings.hdr_box'

     // Right Column: Row 4 - Horror Vignette
     Begin Object Class=GUILabel Name=vignette_label
         Caption="Horror Vignette"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.350000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="vignette_label"
     End Object
     vignetteLabel=GUILabel'DOTZMenu.DOTZVideoSettings.vignette_label'

     Begin Object Class=BBComboBox Name=vignette_box
         IniOption="@Internal"
         IniDefault="Subtle"
         WinTop=0.350000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="vignette_box"
     End Object
     vignetteBox=BBComboBox'DOTZMenu.DOTZVideoSettings.vignette_box'

     // Right Column: Row 5 - Field of View (FOV)
     Begin Object Class=GUILabel Name=fov_label
         Caption="Field of View (FOV)"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.430000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="fov_label"
     End Object
     fovLabel=GUILabel'DOTZMenu.DOTZVideoSettings.fov_label'

     Begin Object Class=DOTZSlider Name=fov_slider
         MinValue=60.000000
         MaxValue=110.000000
         bIntSlider=True
         IniOption="@Internal"
         IniDefault="85"
         Hint="Changes the camera horizontal field of view."
         WinTop=0.420000
         WinLeft=0.700000
         WinWidth=0.220000
         WinHeight=0.040000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="fov_slider"
     End Object
     fovSlider=DOTZSlider'DOTZMenu.DOTZVideoSettings.fov_slider'

     // Right Column: Row 6 - Target FPS
     Begin Object Class=GUILabel Name=fps_label
         Caption="Target FPS"
         TextColor=(B=119,G=243,R=248)
         TextFont="PlainGuiFont"
         WinTop=0.510000
         WinLeft=0.500000
         WinWidth=0.190000
         WinHeight=0.050000
         Name="fps_label"
     End Object
     fpsLabel=GUILabel'DOTZMenu.DOTZVideoSettings.fps_label'

     Begin Object Class=BBComboBox Name=fps_box
         IniOption="@Internal"
         IniDefault="60 FPS"
         WinTop=0.510000
         WinLeft=0.700000
         WinWidth=0.220000
         __OnChange__Delegate=DOTZVideoSettings.AdvancedVideoChange
         Name="fps_box"
     End Object
     fpsBox=BBComboBox'DOTZMenu.DOTZVideoSettings.fps_box'

     // Bottom Action Button
     Begin Object Class=GUIButton Name=VideoApply
         Caption="Apply Changes"
         StyleName="BBRoundButton"
         bVisible=False
         Hint="Apply all changes to your video settings."
         WinTop=0.690000
         WinLeft=0.350000
         WinWidth=0.300000
         WinHeight=0.060000
         __OnClick__Delegate=DOTZVideoSettings.ApplyChanges
         Name="VideoApply"
     End Object
     videoApplyButton=GUIButton'DOTZMenu.DOTZVideoSettings.VideoApply'

     BitDepthText(0)="16-bit Color"
     BitDepthText(1)="32-bit Color"
     graphicsLevels(0)="Low Detail"
     graphicsLevels(1)="Medium Detail"
     graphicsLevels(2)="High Detail"
     DisplayModes(0)=(Width=640,Height=480)
     DisplayModes(1)=(Width=800,Height=600)
     DisplayModes(2)=(Width=1024,Height=768)
     DisplayModes(3)=(Width=1280,Height=720)
     DisplayModes(4)=(Width=1280,Height=800)
     DisplayModes(5)=(Width=1600,Height=720)
     DisplayModes(6)=(Width=1600,Height=900)
     DisplayModes(7)=(Width=1920,Height=1080)
     DisplayModes(8)=(Width=2400,Height=1080)
     ClickSound=Sound'DOTZXInterface.Select'
     ShadowTypes(0)=(Label="None")
     ShadowTypes(1)=(Label="High Detail",Type=1)
     ShadowTypes(2)=(Label="Low Detail",Type=2)
     WinTop=55.980499
     WinHeight=0.807813
}
