/**
 * 
 *
 * @author  Neil Gower (neilg@digitalextremes.com)
 * @version $Revision: 1.2 $
 * @date    Oct 2003
 */
class BBVertScrollButton extends GUIVertScrollButton;

var Material Up;
var Material Down;


/**
 */
function InitComponent(GUIController MyController, GUIComponent MyOwner) {
   Super.Initcomponent(MyController, MyOwner);

   if ( UpButton ) {
      Graphic = up;
   }
   else {
      Graphic = down;
   }
}

defaultproperties
{
     Up=Texture'BBTGuiContent.General.ArrowUp'
     Down=ColorModifier'BBTGuiContent.General.ArrowDown'
     StyleName="BBSquareButton"
}
