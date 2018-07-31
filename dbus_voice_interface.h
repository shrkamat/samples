#ifndef __DBUS_VOICE_INTERFACE__
#define __DBUS_VOICE_INTERFACE__

typedef struct VoiceInterface * IVoiceHndl;

#ifdef __cplusplus
extern "C" {
#endif

IVoiceHndl dbus_create_voice_interface(const char *path, const char *name);
void dbus_voice_action(IVoiceHndl hndl, const char *voiceKey);
bool dbus_is_voice_interface_valid(IVoiceHndl hndl);
void dbus_delete_voice_interface(IVoiceHndl hndl);

#ifdef __cplusplus
}
#endif

#endif // __DBUS_VOICE_INTERFACE__