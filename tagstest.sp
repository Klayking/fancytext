#include <sourcemod>
#include <fancytext>

public OnPluginStart()
{
	RegServerCmd("fancytext_message", Command_PrintMessage);
}

public Action:Command_PrintMessage(args)
{
	FancyText_CompileMessage("{purple}Hello World! {purple}{default}Hi{yellow|green}sup")
}