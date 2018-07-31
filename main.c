#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "dbus_voice_interface.h"

int main( void )
{
    char voiceKey[] = {"<VOICE xmlns=\"http://voice.cisco.com/1.1\"><VoiceAction><convid>1532695643775</convid></VoiceAction></VOICE>"};
    printf ("Hello, World\n");

    IVoiceHndl hndl = dbus_create_voice_interface("/com/bus/xmpp", "com.bus.xmpp");

    dbus_voice_action(hndl, voiceKey);

    dbus_delete_voice_interface(hndl);

    sleep(5);

    return 0;
}

