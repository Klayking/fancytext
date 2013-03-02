#if defined _fancytext_included
 #endinput
#endif
#define _fancytext_included

#define FANCYTEXT_VERSION				"1.0.0"
#define FANCYTEXT_MESSAGE_LENGTH		256

FancyText_PrintToChat(client, const String:message[], any:...)
{
	
}

FancyText_PrintToChatEx(client, author, const String:message[], any:...)
{
	
}

FancyText_PrintToChatAll(const String:message[], any:...)
{

}


FancyText_PrintToChatAllEx(author, const String:message[], any:...)
{

}

stock bool:FancyText_CustomColorsSupported()
{
	return (SOURCE_SDK_CSS <= GuessSDKVersion() < SOURCE_SDK_LEFT4DEAD);
}