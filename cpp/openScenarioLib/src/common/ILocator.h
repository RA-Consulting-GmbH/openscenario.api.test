/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <string>
#include "Textmarker.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * A locator for objects in a text file.
    *
    */
     class ILocator
    {
     public:

         virtual ~ILocator() = default;

        /**
         * Locates the start of an object in a text file
         * @return the start marker
         */
         virtual Textmarker GetStartMarker() = 0;

        /**
         * Locates the end of an object in a text file
         * @return the end marker
         */
         virtual Textmarker GetEndMarker() = 0;

        /**
         * Locates the start of an property that belongs to an object in a text file
         * @param propertyKey the property (attribute) in xml
         * @return the start marker
         */
         virtual Textmarker GetStartMarkerOfProperty(const std::string& propertyKey) = 0;

        /**
         * Locates the end of an property that belongs to an object in a text file
         * @param propertyKey the property (attribute) in xml
         * @return the end marker
         */
         virtual Textmarker GetEndMarkerOfProperty(std::string &propertyKey) = 0;
     };
}
