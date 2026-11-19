/**
 * XDOTZMainMenu - the main menu for Xbox DOTZ, based on the Warfare
 *              "GUI" package.
 *
 * @author  Tod Baudais (tod.baudais@digitalextremes.com)
 * @version $Revision: 1.0 $
 * @date    January 19, 2005
 */

class XDOTZCharacterSelect extends XDOTZLivePage;




var localized string PageCaption;
var sound ClickSound;

var Automated GUILabel   CharacterTypeLabel;
var Automated GUILabel   HeadTypeLabel;
var Automated GUILabel   BodyTypeLabel;

var Automated BBXSelectBox   CharacterTypeValue;
var Automated BBXSelectBox   HeadTypeValue;
var Automated BBXSelectBox   BodyTypeValue;
//var Automated GUIButton    StartButton;

// Used for character (not just weapons!)
var SpinnyWeap			SpinnyDude; // MUST be set to null when you leave the window
var vector				SpinnyDudeOffset;

var string URL;

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

   AddBackButton ();
   AddContinueButton ();

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
   SpinnyDude.destroy();
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
 * ButtonClicked
 * Notification that the user clicked a component on the page
 *****************************************************************
 */
/*function bool ButtonClicked(GUIComponent Sender) {

   local string CustomURL;
   CustomURL = URL $ "?Character=" $ CharacterTypeValue.GetExtra()
                   $ "?Head=" $ HeadTypeValue.GetExtra()
                   $ "?Body=" $ BodyTypeValue.GetExtra();

   // Display loading screen
   Controller.OpenMenu("DOTZMenu.XDOTZLoadingMenu");
   PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
   PlayerOwner().ClientTravel( CustomURL ,TRAVEL_Absolute, false);
   return true;
}*/

/*****************************************************************
 * A Button pressed
 *
 *****************************************************************
 */

function DoButtonA ()
{
    local string CustomURL;
   CustomURL = URL $ "?Character=" $ CharacterTypeValue.GetExtra()
                   $ "?Head=" $ HeadTypeValue.GetExtra()
                   $ "?Body=" $ BodyTypeValue.GetExtra();

   // Display loading screen
   Controller.OpenMenu("DOTZMenu.XDOTZLoadingMenu");
   PlayerOwner().Pawn.PlayOwnedSound(ClickSound,SLOT_Interface,1.0);
   PlayerOwner().ClientTravel( CustomURL ,TRAVEL_Absolute, false);
}

/*****************************************************************
 * B Button pressed
 *
 *****************************************************************
 */

function DoButtonB ()
{
    Controller.CloseMenu(false);
}

/*****************************************************************
 * InternalDraw
 *****************************************************************
 */
function bool InternalDraw(Canvas canvas)
{
	local vector CamPos, X, Y, Z;
	local rotator CamRot;
   canvas.GetCameraLocation(CamPos, CamRot);
	GetAxes(CamRot, X, Y, Z);
	SpinnyDude.SetLocation(CamPos + (SpinnyDudeOffset.X * X) + (SpinnyDudeOffset.Y * Y) + (SpinnyDudeOffset.Z * Z));
	canvas.DrawActor(SpinnyDude, false, true, 90.0);
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
// DefaultProperties
//===========================================================================

defaultproperties
{
     PageCaption="Customize Character"
     ClickSound=Sound'DOTZXInterface.Select'
     Begin Object Class=GUILabel Name=CharacterTypeLabel_lbl
         Caption="Character:"
         StyleName="BBXTextStatic"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.200000
         WinLeft=0.150000
         WinWidth=0.400000
         WinHeight=0.100000
         Name="CharacterTypeLabel_lbl"
     End Object
     CharacterTypeLabel=GUILabel'DOTZMenu_current.XDOTZCharacterSelect.CharacterTypeLabel_lbl'
     Begin Object Class=GUILabel Name=HeadTypeLabel_lbl
         Caption="Skin: "
         StyleName="BBXTextStatic"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.270000
         WinLeft=0.150000
         WinWidth=0.400000
         WinHeight=0.100000
         Name="HeadTypeLabel_lbl"
     End Object
     HeadTypeLabel=GUILabel'DOTZMenu_current.XDOTZCharacterSelect.HeadTypeLabel_lbl'
     Begin Object Class=GUILabel Name=BodyTypeLabel_lbl
         Caption="Clothing: "
         StyleName="BBXTextStatic"
         bBoundToParent=True
         bScaleToParent=True
         WinTop=0.340000
         WinLeft=0.150000
         WinWidth=0.400000
         WinHeight=0.100000
         Name="BodyTypeLabel_lbl"
     End Object
     BodyTypeLabel=GUILabel'DOTZMenu_current.XDOTZCharacterSelect.BodyTypeLabel_lbl'
     Begin Object Class=BBXSelectBox Name=CharacterTypeValue_lbl
         StyleName="BBXSquareButton"
         WinTop=0.220000
         WinLeft=0.450000
         WinWidth=0.400000
         WinHeight=0.060000
         __OnChange__Delegate=XDOTZCharacterSelect.HandleCharacterSelection
         Name="CharacterTypeValue_lbl"
     End Object
     CharacterTypeValue=BBXSelectBox'DOTZMenu_current.XDOTZCharacterSelect.CharacterTypeValue_lbl'
     Begin Object Class=BBXSelectBox Name=HeadTypeValue_lbl
         StyleName="BBXSquareButton"
         WinTop=0.290000
         WinLeft=0.450000
         WinWidth=0.400000
         WinHeight=0.060000
         __OnChange__Delegate=XDOTZCharacterSelect.HandleCharacterSelection
         Name="HeadTypeValue_lbl"
     End Object
     HeadTypeValue=BBXSelectBox'DOTZMenu_current.XDOTZCharacterSelect.HeadTypeValue_lbl'
     Begin Object Class=BBXSelectBox Name=BodyTypeValue_lbl
         StyleName="BBXSquareButton"
         WinTop=0.360000
         WinLeft=0.450000
         WinWidth=0.400000
         WinHeight=0.060000
         __OnChange__Delegate=XDOTZCharacterSelect.HandleCharacterSelection
         Name="BodyTypeValue_lbl"
     End Object
     BodyTypeValue=BBXSelectBox'DOTZMenu_current.XDOTZCharacterSelect.BodyTypeValue_lbl'
     SpinnyDudeOffset=(X=170.000000,Y=-50.000000,Z=-25.000000)
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
     __OnDraw__Delegate=XDOTZCharacterSelect.InternalDraw
     __OnKeyEvent__Delegate=XDOTZCharacterSelect.HandleKeyEvent
}
