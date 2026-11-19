/*****************************************************************
 * SniperPickup - 
 *
 * @version $1.0$
 * @author  Jesse (Jesse@digitalextremes.com)
 * @date    Jan 2004
 *****************************************************************
 */
class SniperPickup extends DOTZWeaponPickup
      placeable;


//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     ActionPickupMessage="Press Action to take the Sniper Rifle"
     MaxDesireability=0.750000
     InventoryType=Class'DOTZWeapons.SniperWeapon'
     DrawType=DT_StaticMesh
     StaticMesh=StaticMesh'DOTZSWeapons.Ranged.SniperRifle'
}
