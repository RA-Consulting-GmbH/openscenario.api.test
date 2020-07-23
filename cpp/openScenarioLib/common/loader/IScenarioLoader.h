#pragma once
#include "IParserMessageLogger.h"
#include "ApiClassInterfaces.h"
#include "ScenarioLoaderException.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{

    /**
     * Abstracts the source the open scenario file is loaded from. t could be a file
     * system or a database.
     */
    class IScenarioLoader 
    {
    public:
        virtual ~IScenarioLoader() = default;
        /**
         * Loads a scenario.
         * @param messageLogger to log the messaes during loading.
         * @return the IOpenScensrio root object of a scenario. it may be inconsistent when errors occured.
         * @throws ScenarioLoaderException An Exception when the loader stops with a fatal error.
         */
         virtual std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) // throw(ScenarioLoaderException)
         {
             return {};
         }
    };
}
