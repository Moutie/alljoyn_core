/******************************************************************************
 *
 * Copyright 2013, Qualcomm Innovation Center, Inc.
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
 *
 *****************************************************************************/

#pragma once

#include <Status_CPP0x.h>

namespace AllJoyn {
public ref class PasswordManager sealed {
  public:
    /// <summary>
    ///Set credentials used for the authentication of thin clients.
    /// </summary>
    /// <param name="authMechanism">
    ///Mechanism to use for authentication.
    /// </param>
    /// <param name="password">
    ///Password to use for authentication
    /// </param>
    /// <returns>
    ///Return ER_OK if the request is handled.
    /// </returns>
    static QStatus SetCredentials(Platform::String ^ authMechanism, Platform::String ^ password);
};
}
// PasswordManager.h
