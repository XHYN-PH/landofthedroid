/**
 * XDOTZMainMenu - the main menu for Xbox DOTZ, based on the Warfare
 *              "GUI" package.
 *
 * @author  Tod Baudais (tod.baudais@digitalextremes.com)
 * @version $Revision: 1.0 $
 * @date    January 19, 2005
 */

class DOTZCharacterSelect extends DOTZMultiPlayerBase;




var localized string PageCaption;
var sound ClickSound;

var Automated GUILabel   CharacterTypeLabel;
var Automated GUILabel   HeadTypeLabel;
var Automated GUILabel   BodyTypeLabel;

var Automated BBComboBox   CharacterTypeValue;
var Automated BBComboBox   HeadTypeValue;
var Automated BBComboBox   BodyTypeValue;

var Automated BBEditBox 	PasswordBox;

//var Automated GUIButton    StartButton;

// Used for character (not just weapons!)
var SpinnyWeap			SpinnyDude; // MUST be set to null when you leave the window
var vector				SpinnyDudeOffset;

var string URL;
var bool bPasswordRequired;

var string JackMesh;
var array<Material> JackHeadTextures;
var array<Material> JackBodyTextures;

var string OtisMesh;
var array<Material> OtisHeadTextures;
var array<Material> OtisBodyTextures;

var localized string Variant1Head;
var localized string Variant2Head;
var localized string OriginalHead;

var localized string Variant1Body;
var localized string Variant2Body;
var localized string OriginalBody;

/*****************************************************************
 * InitComponent
 *****************************************************************
 */
function InitComponent( GUIController MyController, GUIComponent MyOwner )
{
   local Mesh PlayerMesh;

   Super.Initcomponent(MyController, MyOwner);
   AdvancedPlayerController(PlayerOwner()).bCameraLock = true;
   // init my components...
   SetPageCaption (PageCaption);

	PlayerMesh = Mesh(DynamicLoadObject(JackMesh, class'Mesh'));
   CharacterTypeValue.AddItem("Jack",PlayerMesh,"XDOTZCharacters.JackSlade");

	PlayerMesh = Mesh(DynamicLoadObject(OtisMesh, class'Mesh'));
   CharacterTypeValue.AddItem("Otis",PlayerMesh,"XDOTZCharacters.PlayerOtis");

   HeadTypeValue.AddItem(OriginalHead,,"0");
   HeadTypeValue.AddItem(Variant1Head,,"1");
   HeadTypeValue.AddItem(Variant2Head,,"2");

   BodyTypeValue.AddItem(OriginalBody,,"0");
   BodyTypeValue.AddItem(Variant1Body,,"1");
   BodyTypeValue.AddItem(Variant2Body,,"2");

   SetPageCaption(PageCaption);
   AddBackButton ();
   AddNextButton ();

   //Spawn spinning character actor
	SpinnyDude = PlayerOwner().spawn(class'GUI.SpinnyWeap');
	SpinnyDude.SetRotation(PlayerOwner().Rotation);
	SpinnyDude.SetDrawType(DT_Mesh);
	SpinnyDude.SetDrawScale(0.7);
	SpinnyDude.SpinRate = 5000;
   UpdateSpinnyDude();

}

/*****************************************************************
 * HandleParameters
 * Collect the URL from the calling page
 *****************************************************************
 */
event HandleParameters( String param1, String param2 ) {
   URL = Param1;
   bPasswordRequired = bool(param2);
}

/*****************************************************************
 * Happens every time the menu is opened, not just the first.
 *****************************************************************
 */
event Opened( GUIComponent Sender ) {
    super.Opened(Sender);
}

/*****************************************************************
 * Closed
 *****************************************************************
 */
event Closed(GUIComponent Sender, bool bCancelled) {
   Super.Closed(Sender,bCancelled);
   AdvancedPlayerController(PlayerOwner()).bCameraLock = false;
   OnDraw=None;
   SpinnyDude.destroy();
   SpinnyDude=None;
   Controller.MouseEmulation(false);
}

/*****************************************************************
 *
 *****************************************************************
 */
function HandleCharacterSelection(GUIComponent Sender){
   UpdateSpinnyDude();
}


/*****************************************************************
 * Next Button
 *****************************************************************
 */

function Click_Next ()
{

   local string CustomURL;
   CustomURL = URL $ "?Character=" $ CharacterTypeValue.GetExtra()
                   $ "?Head=" $ HeadTypeValue.GetExtra()
                   $ "?Body=" $ BodyTypeValue.GetExtra()
                   $ "?XGAMERTAG=" $ EncodeStringURL(DOTZPlayerControllerBase(PlayerOwner()).GetCurrentProfileName());

    Log ("URL: " $ CustomURL);

    class'DOTZMPFailed'.default.LastURL = CustomURL;

   //if (bPasswordRequired == true){
   //   Controller.OpenMenu("DOTZMenu.DOTZGetPassword", CustomURL);
   //} else {
      // Display loading screen

      if (PlayerOwner().Pawn != None) {
         PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
      }
      PlayerOwner().ClientTravel( CustomURL ,TRAVEL_Absolute, false);
      BBGUIController(Controller).SwitchMenu("DOTZMenu.DOTZLoadingMenu");
   //}
}

/*****************************************************************
 * A Button pressed
 *
 *****************************************************************
 */

/*function DoButtonA ()
{
    local string CustomURL;
   CustomURL = URL $ "?Character=" $ CharacterTypeValue.GetExtra()
                   $ "?Head=" $ HeadTypeValue.GetExtra()
                   $ "?Body=" $ BodyTypeValue.GetExtra();

   // Display loading screen
   Controller.OpenMenu("DOTZMenu.XDOTZLoadingMenu");
   if (PlayerOwner().Pawn != None) {
      PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
   }
   PlayerOwner().ClientTravel( CustomURL ,TRAVEL_Absolute, false);
}*/

/*****************************************************************
 * InternalDraw
 *****************************************************************
 */
function bool InternalDraw(Canvas canvas)
{
	local vector CamPos, X, Y, Z;
	local rotator CamRot;

   if (SpinnyDude != none){
      canvas.GetCameraLocation(CamPos, CamRot);
   	GetAxes(CamRot, X, Y, Z);
   	SpinnyDude.SetLocation(CamPos + (SpinnyDudeOffset.X * X) + (SpinnyDudeOffset.Y * Y) + (SpinnyDudeOffset.Z * Z));
   	canvas.DrawActor(SpinnyDude, false, true, 90.0);
   }
	return false;
}

/*****************************************************************
 *
 *****************************************************************
*/
function UpdateSpinnyDude()
{
	local Mesh PlayerMesh;
   local int HeadIndex, BodyIndex;
	//PlayerMesh = Mesh(DynamicLoadObject(string(CharacterTypeValue.GetObject()), class'Mesh'));
   PlayerMesh = mesh(CharacterTypeValue.GetObject());
	if(PlayerMesh == None){	return;	}
	SpinnyDude.LinkMesh(PlayerMesh);

   HeadIndex = int(HeadTypeValue.GetExtra());
   BodyIndex = int(BodyTypeValue.GetExtra());

   if(CharacterTypeValue.GetIndex() == 0){ //Jack is selected
   	SpinnyDude.Skins[0] = JackBodyTextures[BodyIndex];
	   SpinnyDude.Skins[1] = JackHeadTextures[HeadIndex];
   } else {                                //Otis is selected
   	SpinnyDude.Skins[0] = OtisBodyTextures[BodyIndex];
	   SpinnyDude.Skins[1] = OtisHeadTextures[HeadIndex];
   }

	SpinnyDude.LoopAnim( 'Bored', 1);
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
// defaultproperties
//===========================================================================

defaultproperties
{
     PageCaption="Customize Character"
     ClickSound=Sound'DOTZXInterface.Select'
     Begin Object Class=GUILabel Name=CharacterTypeLabel_lbl
         Caption="Character:"
         TextFont="PlainGuiFont"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.250000
         WinLeft=0.150000
         WinWidth=0.400000
         WinHeight=0.100000
         Name="CharacterTypeLabel_lbl"
     End Object
     CharacterTypeLabel=GUILabel'DOTZMenu_current.DOTZCharacterSelect.CharacterTypeLabel_lbl'
     Begin Object Class=GUILabel Name=HeadTypeLabel_lbl
         Caption="Skin: "
         TextFont="PlainGuiFont"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.320000
         WinLeft=0.150000
         WinWidth=0.400000
         WinHeight=0.100000
         Name="HeadTypeLabel_lbl"
     End Object
     HeadTypeLabel=GUILabel'DOTZMenu_current.DOTZCharacterSelect.HeadTypeLabel_lbl'
     Begin Object Class=GUILabel Name=BodyTypeLabel_lbl
         Caption="Clothing: "
         TextFont="PlainGuiFont"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.390000
         WinLeft=0.150000
         WinWidth=0.400000
         WinHeight=0.100000
         Name="BodyTypeLabel_lbl"
     End Object
     BodyTypeLabel=GUILabel'DOTZMenu_current.DOTZCharacterSelect.BodyTypeLabel_lbl'
     Begin Object Class=BBComboBox Name=CharacterTypeValue_lbl
         StyleName="BBRoundButton"
         bAcceptsInput=True
         WinTop=0.270000
         WinLeft=0.450000
         WinWidth=0.400000
         __OnChange__Delegate=DOTZCharacterSelect.HandleCharacterSelection
         Name="CharacterTypeValue_lbl"
     End Object
     CharacterTypeValue=BBComboBox'DOTZMenu_current.DOTZCharacterSelect.CharacterTypeValue_lbl'
     Begin Object Class=BBComboBox Name=HeadTypeValue_lbl
         StyleName="BBRoundButton"
         bAcceptsInput=True
         WinTop=0.340000
         WinLeft=0.450000
         WinWidth=0.400000
         __OnChange__Delegate=DOTZCharacterSelect.HandleCharacterSelection
         Name="HeadTypeValue_lbl"
     End Object
     HeadTypeValue=BBComboBox'DOTZMenu_current.DOTZCharacterSelect.HeadTypeValue_lbl'
     Begin Object Class=BBComboBox Name=BodyTypeValue_lbl
         StyleName="BBRoundButton"
         bAcceptsInput=True
         WinTop=0.410000
         WinLeft=0.450000
         WinWidth=0.400000
         __OnChange__Delegate=DOTZCharacterSelect.HandleCharacterSelection
         Name="BodyTypeValue_lbl"
     End Object
     BodyTypeValue=BBComboBox'DOTZMenu_current.DOTZCharacterSelect.BodyTypeValue_lbl'
     SpinnyDudeOffset=(X=170.000000,Y=-50.000000,Z=-30.000000)
     JackMesh="DOTZAHumans.JackSlade"
     JackHeadTextures(0)=Shader'DOTZTHumans.JackSlade.JackSladeHeadShaderA'
     JackHeadTextures(1)=Shader'DOTZTHumans.JackSlade.JackSladeHeadShaderB'
     JackHeadTextures(2)=Shader'DOTZTHumans.JackSlade.JackSladeHeadShaderC'
     JackBodyTextures(0)=Shader'DOTZTHumans.JackSlade.JackSladeBodyShaderA'
     JackBodyTextures(1)=Shader'DOTZTHumans.JackSlade.JackSladeBodyShaderB'
     JackBodyTextures(2)=Shader'DOTZTHumans.JackSlade.JackSladeBodyShaderC'
     OtisMesh="DOTZAHumans.Otis"
     OtisHeadTextures(0)=Shader'DOTZTHumans.Otis.OtisHeadShaderA'
     OtisHeadTextures(1)=Shader'DOTZTHumans.Otis.OtisHeadShaderB'
     OtisHeadTextures(2)=Shader'DOTZTHumans.Otis.OtisHeadShaderC'
     OtisBodyTextures(0)=Shader'DOTZTHumans.Otis.OtisBodyShaderA'
     OtisBodyTextures(1)=Shader'DOTZTHumans.Otis.OtisBodyShaderB'
     OtisBodyTextures(2)=Shader'DOTZTHumans.Otis.OtisBodyShaderC'
     Variant1Head="Camo"
     Variant2Head="Tattoo"
     OriginalHead="Normal"
     Variant1Body="Camo"
     Variant2Body="Bloody"
     OriginalBody="Normal"
     Background=Texture'DOTZTInterface.Menu.SettingsBackground'
     __OnDraw__Delegate=DOTZCharacterSelect.InternalDraw
     __OnKeyEvent__Delegate=DOTZCharacterSelect.HandleKeyEvent
}
