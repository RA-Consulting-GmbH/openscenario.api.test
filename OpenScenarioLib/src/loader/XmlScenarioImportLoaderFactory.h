#pragma once

#include "IParserMessageLogger.h"
#include "XmlScenarioLoader.h"
#include "XmlScenarioImportLoader.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
    * A factory for creating catalog loaders
    */
    class XmlScenarioImportLoaderFactory: public IScenarioLoaderFactory 
    {
    private:

        std::shared_ptr<IParserMessageLogger> _catalogMessageLogger;
        std::string _filename;

    public:
        /**
        * Constructor
        *
        * @param catalogMessageLogger
        *            to log messages
        * @param filename
        *            base directory
        */
        XmlScenarioImportLoaderFactory(std::shared_ptr<IParserMessageLogger>& catalogMessageLogger, const std::string filename):_catalogMessageLogger(catalogMessageLogger), _filename(filename) {}

        std::shared_ptr<IScenarioLoader> CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator) override
        {
            auto innerScenarioLoader = std::make_shared<XmlScenarioLoader>(_filename, resourceLocator);
            return std::make_shared<XmlScenarioImportLoader>(innerScenarioLoader, _catalogMessageLogger);
        }
    };

}
