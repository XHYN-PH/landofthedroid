/**
 * A one-page configuration panel, which covers coarse graphics and
 * sound settings.
 *
 * @author  Neil Gower (neilg@digitalextremes.com)
 * @version $Revision: 1.19 $
 * @date    Oct 2003
 */
class DOTZMultiPlayerServerPanelServer extends DOTZMultiPlayerPanel;



var sound ClickSound;


/****************************************************************
 * InitComponent
 ****************************************************************
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner) {
    super.InitComponent(MyController, MyOwner);
}


//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     ClickSound=Sound'DOTZXInterface.Select'
     WinTop=55.980499
     WinHeight=0.807813
}
