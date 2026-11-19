/*****************************************************************
 * RifleAmmunition -
 *
 * @version 1.0
 * @author  Jesse (jesse@digitalextremes.com)
 * @date    Nov 2003
 * description this class is for the simple weapon
 *****************************************************************
 */
class RifleAmmunition extends DOTZAmmunitionBase;

//===========================================================================
// DefaultProperties
//===========================================================================

defaultproperties
{
     DamageAmount=35
     MaxAmmo=60
     bInstantHit=True
     MyDamageType=Class'DOTZEngine.DOTZBulletDamage'
}
