// ====================================================================
//  Class:  GamePlay.Action_ConsoleCommand
//  Parent: GamePlay.ScriptedAction
//
//  Executes a console command
// ====================================================================

class ACTION_PlayerConsoleCmd extends ScriptedAction;

var(Action) string      CommandStr; // The console command to execute

function bool InitActionFor(ScriptedController C)
{
    if (CommandStr!="")
        C.Level.GetLocalPlayerController().ConsoleCommand(CommandStr);

    return false;
}

function string GetActionString()
{
    return ActionString@CommandStr;
}

defaultproperties
{
     ActionString="console command"
}
