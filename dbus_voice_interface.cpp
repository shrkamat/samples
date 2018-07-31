#include "dbus-c++/dbus.h"
#include "voice_interface.h"
#include "dbus_voice_interface.h"

IVoiceHndl dbus_create_voice_interface(const char *path, const char *name)
{
	DBus::Connection bus = DBus::Connection::SessionBus();

	return new VoiceInterface(bus, path, name);
}

void dbus_send_voice_action(IVoiceHndl hndl, const char *voiceKey)
{
	hndl->voiceAction(voiceKey);
}

bool dbus_is_voice_interface_valid(IVoiceHndl hndl)
{
	// how can I check if interface is valid ?
	return true;
}

void dbus_delete_voice_interface(IVoiceHndl hndl)
{
	delete hndl;
}

