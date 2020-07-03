#pragma once
#include "OscInterfaces.h"
#include "ApiClassInterfaces.h"
#include "IParserMessageLogger.h"
#include "ApiClassImpl.h"
#include "ParameterResolver.h"
#include <map>
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
    * Helper mehtod for processing a instance of a loaded IOpenScenario
    */
     class OpenScenarioProcessingHelper 
    {
     public:
        /**
         * is the loaded scenario a catalog.
         * @param openScenario the loaded instance of IOpenScenario
         * @return true if catalog
         */
        static bool IsCatalog(std::shared_ptr<IOpenScenario> openScenario)
        {
            auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
            return openScenarioCategory != nullptr && openScenarioCategory->GetCatalogDefinition() != nullptr;
        }

        /**
         * Resolve all parameters in the loaded instance of IOpenScenario
         * @param logger to log messages
         * @param openScenario the loaded instance of IOpenScenario
         */
        static void Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<OpenScenarioImpl> openScenario)
        {
            if (!IsCatalog(openScenario))
            {
                ParameterResolver parameterResolver;
                parameterResolver.Resolve(logger, openScenario, true);
            }
        }


        /**
         * Resolve all parameters in the loaded catalog element
         * @param logger to log messages
         * @param catalogElement a catalogElement the parameters will be resolved.
         * @param parameterAssignments the parameter assignments that provide the parameter names and values
         */
        static void ResolveWithParameterAssignements(std::shared_ptr<IParserMessageLogger> logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
        {
            ParameterResolver parameterResolver;
            parameterResolver.ResolveWithParameterAssignments(logger, catalogElement, parameterAssignments);
        }

    };

}
