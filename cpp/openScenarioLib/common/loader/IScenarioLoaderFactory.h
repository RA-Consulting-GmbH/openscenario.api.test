#pragma once
#include "IScenarioLoader.h"
#include "IResourceLocator.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A factory to create a IScenarioLoader. A factory assembles the parts for a IScenarioLoader implementation.
     */
    class IScenarioLoaderFactory 
    {
    public:

        IScenarioLoaderFactory() = default;
        virtual ~IScenarioLoaderFactory() = default;

        /**
         * Assembles a loader with a specific resource locator
         * @param resourceLocator a resource locator to resolve the resources.
         * @return a assembled loader.
         */
         virtual std::shared_ptr<IScenarioLoader> CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator)
         {
             return {};
         }
    };
}
