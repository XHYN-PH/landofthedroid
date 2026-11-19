//-----------------------------------------------------------
//
//-----------------------------------------------------------
class PCCheatManager extends AdvancedCheatManager;

function DoCheat(int CheatNumber){
   switch CheatNumber {
   case 0:
      Log("I am doing cheat 0");
      break;
   case 1:
      Log("I am doing cheat 1");
      break;
   default:
   }
}

defaultproperties
{
     Cheats(0)=(Cmd=(1,1,1))
}
