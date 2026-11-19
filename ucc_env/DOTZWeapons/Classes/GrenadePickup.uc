/*****************************************************************
 * GrenadePickup -
 *
 * @version $1.0$
 * @author  Jesse (Jesse@digitalextremes.com)
 * @date    Jan 2004
 *****************************************************************
 */
class GrenadePickup extends DOTZGrenadePickup
      placeable;


//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     GrenadeAmmunitionClass=Class'DOTZWeapons.GrenadeAmmunition'
     InventoryType=Class'DOTZWeapons.GrenadeWeapon'
     StaticMesh=StaticMesh'DOTZSWeapons.Ranged.grenade'
}
