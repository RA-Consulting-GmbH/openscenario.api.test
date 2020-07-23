#pragma once
#include <iostream>
#include <fstream>
#include "ApiClassInterfaces.h"
#include "ICatalogReferenceProvider.h"
#include "IScenarioChecker.h"
#include "ApiClassImpl.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ParserContext.h"
#include "XmlParsers.h"
#include "IndexedElement.h"
#include "XmlToSimpleNodeConverter.h"
#include "PositionIndex.h"
#include "OpenScenarioProcessingHelper.h"
#include "ScenarioCheckerImpl.h"
#include "IScenarioLoader.h"
#include "IResourceLocator.h"
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
        /**
        * A loader for a scenario from XML
        */
        class XmlScenarioLoader : public IScenarioLoader
        {
        private:
            std::string _filename;
            std::shared_ptr<IResourceLocator> _resourceLocator;

        public:
            /**
             * Constructor
             * @param filename symbolic filename of the scenario
             * @param resourceLocator locator abstracting from storage.
             */
            XmlScenarioLoader(std::string& filename, std::shared_ptr<IResourceLocator>& resourceLocator) : _filename(filename), _resourceLocator(resourceLocator) {}
            virtual ~XmlScenarioLoader() = default;

            /**
             * The resource locator of the loader
             * @return the resource locator
             */
            std::shared_ptr<IResourceLocator> GetResourceLocator() const
            {
                return _resourceLocator;
            }

            /**
             * The filename od the loader
             * @return the filename
             */
            std::string GetFilename() const
            {
                return _filename;
            }

            std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) override;

        };
    }
}
