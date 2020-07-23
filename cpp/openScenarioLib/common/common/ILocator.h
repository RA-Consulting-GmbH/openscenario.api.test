#pragma once
#include <string>
#include "Textmarker.h"
#include "IOpenScenarioModelElement.h"
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
