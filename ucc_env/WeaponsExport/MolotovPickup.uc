/*****************************************************************
 * MolotovPickup -
 *
 * @version $1.0$
 * @author  Jesse (Jesse@digitalextremes.com)
 * @date    Jan 2004
 *****************************************************************
 */
class MolotovPickup extends DOTZGrenadePickup
      placeable;

//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     FullAmmoMessage="Can't carry more molotov cocktails"
     GrenadeAmmunitionClass=Class'DOTZWeapons.MolotovAmmunition'
     ActionPickupMessage="Press Action to take the Molotov Cocktail"
     InventoryType=Class'DOTZWeapons.MolotovWeapon'
     PickupMessage="You got the Molotov"
     StaticMesh=StaticMesh'DOTZSWeapons.Ranged.MolotovCocktail'
}
