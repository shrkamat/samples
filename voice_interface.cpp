#include "voice_interface.h"

VoiceInterface::VoiceInterface(DBus::Connection &connection, const char *path, const char *name)
	: DBus::ObjectProxy(connection, path, name)
{
}

void VoiceInterface::voiceAction(const std::string& voiceKey)
{
}
