
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__ip_xmpp_voice_proxy_h__PROXY_MARSHAL_H
#define __dbusxx__ip_xmpp_voice_proxy_h__PROXY_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace com {
namespace bus {

class xmpp_proxy
: public ::DBus::InterfaceProxy
{
public:

    xmpp_proxy()
    : ::DBus::InterfaceProxy("com.bus.xmpp")
    {
    }

public:

    /* properties exported by this interface */
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    void voiceAction(const std::string& voiceKey)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << voiceKey;
        call.member("voiceAction");
        ::DBus::Message ret = invoke_method (call);
    }


public:

    /* signal handlers for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
};

} } 
#endif //__dbusxx__ip_xmpp_voice_proxy_h__PROXY_MARSHAL_H
