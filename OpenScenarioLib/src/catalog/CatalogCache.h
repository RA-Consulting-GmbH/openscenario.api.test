#pragma once
#include <vector>
#include <map>
#include "ApiClassInterfaces.h"
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "IResourceLocator.h"
#include "IScenarioLoader.h"
#include "IScenarioLoaderFactory.h"
#include "MessageLoggerDecorator.h"
#include "ScenarioLoaderException.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
    {/**
     * A cache class for a catalog directory. It enables to search for a catalog element in a specific catalog.
     * If a element is found, the search returns and stops without loading further files from the directory.
     * The loaded files are stored in cache for later searches.
     * @author Andreas Hege - RA Consulting
     *
     */
 
    class CatalogCache 
    {
    private:
        std::map<std::string, std::map<std::string, std::shared_ptr<ICatalogElement>>> _catalogElements;
        bool _isAnyCatalogToParse = false;
        std::vector<IScenarioLoaderFactory> _catalogFiles;
        std::shared_ptr<IResourceLocator> _resourceLocator;
        unsigned int _currentLoaderFactoryIndex = 0;
        std::shared_ptr<IParserMessageLogger> _messageLogger;

    public:
        /**
         * Constructor
         * @param resourceLocator locator for the directory to search into
         * @param messageLogger to log messages during parsing the catalogs
         */
        CatalogCache(std::shared_ptr<IResourceLocator>& resourceLocator, std::shared_ptr<IParserMessageLogger>& messageLogger): _resourceLocator(resourceLocator), _messageLogger(messageLogger) {}

        /**
         * Adds a catalog file in its own loader factory.
         * @param scenarioLoaderFactory the loader factory that is initialized with this file.
         */
        void AddCatalogFile(IScenarioLoaderFactory& scenarioLoaderFactory) 
        {
            _catalogFiles.push_back(scenarioLoaderFactory);
            _isAnyCatalogToParse = true;
        }

        /**
         * Searches for a specific catalog element in the directory.
         * @param catalogReference the catalog reference that represents the catalog element to be searched.
         * @return the found catalog element or null if the catalog element is not faound in the directory
         */
        std::shared_ptr<ICatalogElement> ImportCatalogElement(ICatalogReference& catalogReference) 
        {
            std::shared_ptr<ICatalogElement> catalogElement = nullptr;
            while (catalogElement == nullptr) 
            {
                catalogElement = GetCatalogElementInternal(catalogReference);
                if (catalogElement != nullptr || !_isAnyCatalogToParse) {
                    break;
                }
                else {
                    ParseNextCatalog();
                }
            }
            return catalogElement;
        }

    private:
        /*
         * parses the next catalog in the list.
         */
         void ParseNextCatalog() 
        {
            if (_currentLoaderFactoryIndex >= _catalogFiles.size()) 
            {
                _isAnyCatalogToParse = false;
                return;
            }
            else 
            {
                // Parse Catalog
                auto scenarioLoaderFactory = _catalogFiles[_currentLoaderFactoryIndex++];
                auto loader = scenarioLoaderFactory.CreateLoader(_resourceLocator);
                std::shared_ptr<IOpenScenario> openScenario = nullptr;
                bool isSuccessfullyParsed = true;

                auto messageLogger = std::make_shared<MessageLoggerDecorator>(_messageLogger);
                try 
                {
                    openScenario = loader->Load(messageLogger);
                }
                catch (ScenarioLoaderException& e) 
                {
                    (void) e;
                    // Ignore
                    isSuccessfullyParsed = false;
                }
                if (isSuccessfullyParsed && !messageLogger->HasErrors()) 
                {
                    auto catalogDefinition = openScenario->GetOpenScenarioCategory()->GetCatalogDefinition();
                    if (catalogDefinition)
                    {
                        auto catalog = catalogDefinition->GetCatalog();
                        if (catalog) 
                        {
                            // Does Controller already exists
                            const auto kCatalogName = catalog->GetName();

                            auto catalogMap = _catalogElements[kCatalogName];

                            auto controllers = catalog->GetControllers();
                            if (!controllers.empty()) 
                            {
                                for (auto&& controller : controllers) 
                                {
                                    auto name = controller->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, controller));
                                }
                            }

                            auto vehicles = catalog->GetVehicles();
                            if (!vehicles.empty()) 
                            {
                                for (auto&& vehicle : vehicles) 
                                {
                                    auto name = vehicle->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, vehicle));
                                }
                            }

                            auto miscObjects = catalog->GetMiscObjects();
                            if (!miscObjects.empty()) 
                            {
                                for (auto&& miscObject : miscObjects) 
                                {
                                    auto name = miscObject->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, miscObject));
                                }
                            }

                            auto routes = catalog->GetRoutes();
                            if (!routes.empty()) 
                            {
                                for (auto&& route : routes) 
                                {
                                    auto name = route->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, route));
                                }
                            }

                            auto environments = catalog->GetEnvironments();
                            if (!environments.empty()) 
                            {
                                for (auto&& environment : environments) 
                                {
                                    auto name = environment->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, environment));
                                }
                            }

                            auto pedestrians = catalog->GetPedestrians();
                            if (!pedestrians.empty()) 
                            {
                                for (auto&& pedestrian : pedestrians) 
                                {
                                    auto name = pedestrian->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, pedestrian));
                                }
                            }

                            auto trajectories = catalog->GetTrajectories();
                            if (!trajectories.empty()) 
                            {
                                for (auto&& trajectory : trajectories) 
                                {
                                    auto name = trajectory->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, trajectory));
                                }
                            }

                            auto maneuvers = catalog->GetManeuvers();
                            if (!maneuvers.empty()) 
                            {
                                for (auto&& maneuver : maneuvers) 
                                {
                                    auto name = maneuver->GetName();
                                    if (!name.empty())
                                        catalogMap.emplace(std::make_pair(name, maneuver));
                                }
                            }
                        }

                    }
                }
            }

        }

    protected:
        /**
         * Searches for a specific catalog element in the cache and returns a clone.
         * @param catalogReference the catalog reference that represents the catalog element to be searched.
         * @return the cloned catalog element or null if element is not in cache.
         */
         std::shared_ptr<ICatalogElement> GetCatalogElementInternal(ICatalogReference& catalogReference) 
        {
            auto catalog = _catalogElements[catalogReference.GetCatalogName()];
            if (!catalog.empty()) 
            {
                auto catalogElement = catalog[catalogReference.GetEntryName()];

                if (catalogElement) 
                {
                    // Clone it for import
                    return catalogElement;
                }

            }
            return nullptr;
        }

    };
}
