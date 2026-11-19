/**
 * A one-page configuration panel, which covers coarse graphics and
 * sound settings.
 *
 * @author  Neil Gower (neilg@digitalextremes.com)
 * @version $Revision: 1.19 $
 * @date    Oct 2003
 */
class DOTZMultiPlayerClientPanelFilter extends DOTZMultiPlayerClientPanel;



// internal
var private bool bInitialized;
var sound ClickSound;

const FILTER_GAMETYPE = 0;
const FILTER_FULLSERVER = 2;
const FILTER_PASSWORD = 4;

//persistant storage related to the server panel
var config bool bNoPassword;
var config bool bNoFull;

/****************************************************************
 * InitComponent
 ****************************************************************
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner) {

   Super.InitComponent(MyController,MyOwner);

   //gametype box
   BBComboBox(Controls[FILTER_GAMETYPE]).AddItem("Any",,"");
   BBComboBox(Controls[FILTER_GAMETYPE]).AddItem("DeathMatch/Team Deathmatch",,"DOTZDeathMatch");
   BBComboBox(Controls[FILTER_GAMETYPE]).AddItem("Capture the Flag",,"DOTZCaptureTheFl");
   BBComboBox(Controls[FILTER_GAMETYPE]).AddItem("Invasion",,"DOTZInvasion");

   //full server check box
   if (self.default.bNoFull == true){
      moCheckBox(Controls[FILTER_FULLSERVER]).Checked(true);
      moCheckBox(Controls[FILTER_FULLSERVER]).bChecked = true;
   }

   //password filter check box
   if (self.default.bNoPassword == true){
      moCheckBox(Controls[FILTER_PASSWORD]).Checked(true);  //state of the graphic
      moCheckBox(Controls[FILTER_PASSWORD]).bChecked = true; // state of the component
   }

   bInitialized = true;
}


/*****************************************************************
 * OnCloseBrowser
 *****************************************************************
 */
function OnCloseBrowser(){
   super.OnCloseBrowser();
   default.bNoFull     = moCheckBox(Controls[FILTER_FULLSERVER]).IsChecked();
   default.bNoPassword = moCheckBox(Controls[FILTER_PASSWORD]).IsChecked();
   self.static.StaticSaveConfig();
}


//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
}
