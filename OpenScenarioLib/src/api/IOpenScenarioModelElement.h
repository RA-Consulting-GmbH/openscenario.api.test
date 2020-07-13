#pragma once
#include <string>
#include "MemLeakDetection.h"
#include <memory>

namespace RAC_OPENSCENARIO
{
    //TODO: modify this class when you use it later based on usage

    class Object
    {
        /*Empty base class for all objects*/
    public:
        Object() = default;
        virtual  ~Object() = default;
    };

    class IOpenScenarioModelElement
    {
    public:
        IOpenScenarioModelElement() = default;
        virtual  ~IOpenScenarioModelElement() = default;

        /**
         * Asks for an adapter of a specific class.
         * @param classifier the class an adapter is requested for class name as string
         * @return an adapter or null, if the specified adapter class is not supported.
         */
        virtual std::shared_ptr<Object> GetAdapter(const std::string classifier) { return nullptr; };

        /**
         * Provides the parent of this object. It is null for any Object that is not of type IOpenScenario
         * (which is the root)
         * @return the model parent of this object
         */
        virtual std::shared_ptr<IOpenScenarioModelElement> GetParent() { return nullptr; }

    };

}
