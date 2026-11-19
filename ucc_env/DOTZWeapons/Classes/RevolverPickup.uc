/*****************************************************************
 * RevolverPickup - 
 *
 * @version $1.0$
 * @author  Jesse (Jesse@digitalextremes.com)
 * @date    Jan 2004
 *****************************************************************
 */
class RevolverPickup extends DOTZWeaponPickup
      placeable;


//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     ActionPickupMessage="Press Action to take the Revolver"
     MaxDesireability=0.750000
     InventoryType=Class'DOTZWeapons.RevolverWeapon'
     DrawType=DT_StaticMesh
     StaticMesh=StaticMesh'DOTZSWeapons.Ranged.Revolver'
}
