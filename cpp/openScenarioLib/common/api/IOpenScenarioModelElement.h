#pragma once
#include <string>
#include "MemLeakDetection.h"
#include <memory>

namespace NET_ASAM_OPENSCENARIO
{
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
        virtual std::shared_ptr<void> GetAdapter(const std::string classifier) { return nullptr; };

        /**
         * Provides the parent of this object. It is null for any Object that is not of type IOpenScenario
         * (which is the root)
         * @return the model parent of this object
         */
        virtual std::weak_ptr<IOpenScenarioModelElement> GetParent() { return {}; }

    };

}
