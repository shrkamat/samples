#ifndef __DEMO_ECHO_CLIENT_H
#define __DEMO_ECHO_CLIENT_H

#include <dbus-c++/dbus.h>
#include "ip_xmpp_voice_proxy.h"

struct VoiceInterface : public com::bus::xmpp_proxy,
    public DBus::IntrospectableProxy,
    public DBus::ObjectProxy
{
    VoiceInterface(DBus::Connection &connection, const char *path, const char *name)
    : DBus::ObjectProxy(connection, path, name) { }

    void voiceAction(const std::string& voiceKey)
    {
        ((xmpp_proxy*)this)->voiceAction(voiceKey);
    }
};

#endif
