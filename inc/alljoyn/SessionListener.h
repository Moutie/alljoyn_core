/**
 * @file
 * SessionListener is an abstract base class (interface) implemented by users of the
 * AllJoyn API in order to receive sessions related event information.
 */

/******************************************************************************
 * Copyright 2009-2011, Qualcomm Innovation Center, Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 ******************************************************************************/
#ifndef _ALLJOYN_SESSIONLISTENER_H
#define _ALLJOYN_SESSIONLISTENER_H

#ifndef __cplusplus
#error Only include SessionListener.h in C++ code.
#endif

#include <alljoyn/Session.h>

namespace ajn {

/**
 * Abstract base class implemented by AllJoyn users and called by AllJoyn to inform
 * users of session related events.
 */
class SessionListener {
  public:
    /**
     * Virtual destructor for derivable class.
     */
    virtual ~SessionListener() { }

    /**
     * Called by the bus when an existing session becomes disconnected.
     *
     * See also these sample file(s):
     * FileTransfer\FileTransferService.cc
     * simple\android\client\jni\Client_jni.cpp
     * simple\android\service\jni\Service_jni.cpp
     *
     * For Windows 8 see also these sample file(s):
     * cpp\Basic\Basic_Client\BasicClient\AllJoynObjects.cpp
     * cpp\Basic\Basic_Client\BasicClient\AllJoynObjects.h
     * cpp\Basic\Basic_Service\BasicService\AllJoynObjects.cpp
     * cpp\Basic\Basic_Service\BasicService\AllJoynObjects.h
     * cpp\Basic\Name_Change_Client\NameChangeClient\AllJoynObjects.cpp
     * cpp\Basic\Name_Change_Client\NameChangeClient\AllJoynObjects.h
     * cpp\Basic\Signal_Consumer_Client\SignalConsumerClient\AllJoynObjects.cpp
     * cpp\Basic\Signal_Consumer_Client\SignalConsumerClient\AllJoynObjects.h
     * cpp\Basic\Signal_Service\SignalService\AllJoynObjects.cpp
     * cpp\Basic\Signal_Service\SignalService\AllJoynObjects.h
     * cpp\Chat\Chat\AllJoynObjects.cpp
     * cpp\Chat\Chat\AllJoynObjects.h
     * cpp\Secure\Secure\AllJoynObjects.cpp
     * cpp\Secure\Secure\AllJoynObjects.h
     * csharp\blank\blank\Common\Listeners.cs
     * csharp\BusStress\BusStress\Common\ClientBusListener.cs
     * csharp\BusStress\BusStress\Common\ServiceBusListener.cs
     * csharp\chat\chat\Common\Listeners.cs
     * csharp\chat\chat\MainPage.xaml.cs
     * csharp\FileTransfer\Client\Common\Listeners.cs
     * csharp\Secure\Secure\Common\Listeners.cs
     * csharp\Sessions\Sessions\Common\MyBusListener.cs
     * csharp\Sessions\Sessions\Common\SessionOperations.cs
     *
     * @param sessionId     Id of session that was lost.
     */
    virtual void SessionLost(SessionId sessionId) { }

    /**
     * Called by the bus when a member of a multipoint session is added.
     *
     * See also these sample file(s):
     * FileTransfer\FileTransferService.cc
     *
     * For Windows 8 see also these sample file(s):
     * cpp\Basic\Basic_Client\BasicClient\AllJoynObjects.cpp
     * cpp\Basic\Basic_Client\BasicClient\AllJoynObjects.h
     * cpp\Basic\Basic_Service\BasicService\AllJoynObjects.cpp
     * cpp\Basic\Basic_Service\BasicService\AllJoynObjects.h
     * cpp\Basic\Name_Change_Client\NameChangeClient\AllJoynObjects.cpp
     * cpp\Basic\Name_Change_Client\NameChangeClient\AllJoynObjects.h
     * cpp\Basic\Signal_Consumer_Client\SignalConsumerClient\AllJoynObjects.cpp
     * cpp\Basic\Signal_Consumer_Client\SignalConsumerClient\AllJoynObjects.h
     * cpp\Basic\Signal_Service\SignalService\AllJoynObjects.cpp
     * cpp\Basic\Signal_Service\SignalService\AllJoynObjects.h
     * cpp\Chat\Chat\AllJoynObjects.cpp
     * cpp\Chat\Chat\AllJoynObjects.h
     * cpp\Secure\Secure\AllJoynObjects.cpp
     * cpp\Secure\Secure\AllJoynObjects.h
     * csharp\blank\blank\Common\Listeners.cs
     * csharp\Secure\Secure\Common\Listeners.cs
     * csharp\Sessions\Sessions\Common\MyBusListener.cs
     * csharp\Sessions\Sessions\Common\SessionOperations.cs
     *
     * @param sessionId     Id of session whose member(s) changed.
     * @param uniqueName    Unique name of member who was added.
     */
    virtual void SessionMemberAdded(SessionId sessionId, const char* uniqueName) { }

    /**
     * Called by the bus when a member of a multipoint session is removed.
     *
     * See also these sample file(s):
     * FileTransfer\FileTransferService.cc
     *
     * For Windows 8 see also these sample file(s):
     * cpp\Basic\Basic_Client\BasicClient\AllJoynObjects.cpp
     * cpp\Basic\Basic_Client\BasicClient\AllJoynObjects.h
     * cpp\Basic\Basic_Service\BasicService\AllJoynObjects.cpp
     * cpp\Basic\Basic_Service\BasicService\AllJoynObjects.h
     * cpp\Basic\Name_Change_Client\NameChangeClient\AllJoynObjects.cpp
     * cpp\Basic\Name_Change_Client\NameChangeClient\AllJoynObjects.h
     * cpp\Basic\Signal_Consumer_Client\SignalConsumerClient\AllJoynObjects.cpp
     * cpp\Basic\Signal_Consumer_Client\SignalConsumerClient\AllJoynObjects.h
     * cpp\Basic\Signal_Service\SignalService\AllJoynObjects.cpp
     * cpp\Basic\Signal_Service\SignalService\AllJoynObjects.h
     * cpp\Chat\Chat\AllJoynObjects.cpp
     * cpp\Chat\Chat\AllJoynObjects.h
     * cpp\Secure\Secure\AllJoynObjects.cpp
     * cpp\Secure\Secure\AllJoynObjects.h
     * csharp\chat\chat\Common\Listeners.cs
     * csharp\FileTransfer\Client\Common\Listeners.cs
     * csharp\Secure\Secure\Common\Listeners.cs
     * csharp\Sessions\Sessions\Common\MyBusListener.cs
     * csharp\Sessions\Sessions\Common\SessionOperations.cs
     *
     * @param sessionId     Id of session whose member(s) changed.
     * @param uniqueName    Unique name of member who was removed.
     */
    virtual void SessionMemberRemoved(SessionId sessionId, const char* uniqueName) { }
};

}

#endif
