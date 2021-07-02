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
#include <vector>
#include "DateTime.h"
#include "MemLeakDetection.h"
#include <memory>

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A flex element serves as a flexible container for open sceanrio elements. The main benefit is
     * that it is independent from a version and is fed with version specific keys. So it is highly
     * upward compatible. This flexibility comes on the expense of possible runtime errors.
     */

    class IOpenScenarioFlexElement
    {
    public:
        IOpenScenarioFlexElement() = default;
        virtual ~IOpenScenarioFlexElement() = default;

        /**
         * Getting a string property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual std::string GetStringProperty(const std::string key) const
        {
            return "";
        }

        /**
         * Getting a unsigned int property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual uint32_t GetUnsignedIntProperty(const std::string key) const
        {
            return 0;
        }

        /**
         * Getting a int property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual int GetIntProperty(const std::string key) const
        {
            return 0;
        }

        /**
         * Getting a double property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual double GetDoubleProperty(const std::string key) const
        {
            return 0;
        }

        /**
         * Getting a unsigned short property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual uint16_t GetUnsignedShortProperty(const std::string key) const
        {
            return 0;
        }

        /**
         * Getting a boolean property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual bool GetBooleanProperty(const std::string key) const
        {
            return false;
        }

        /**
         * Getting a date time property
         *
         * @param key of the property (see xsd)
         * @return property value
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual DateTime GetDateTimeProperty(const std::string key) const
        {
            return {};
        }

        /**
         * Getting a single child element
         *
         * @param key of the property (see xsd)
         * @return the child element
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(const std::string key) const
        {
            return nullptr;
        }

        /**
         * Getting literal attribute value
         *
         * @param key of the property (see xsd)
         * @return the enumeration literal (see xsd)
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual std::string GetEnumerationLiteral(const std::string key) const
        {
            return "";
        }

        /**
         * Getting a list with child elements
         *
         * @param key of the property (see xsd)
         * @return the list with child elements
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(const std::string key) const
        {
            return {};
        }

        /**
         * Getting the parent element
         *
         * @return the list with child elements or null if root.
         */
        virtual std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const
        {
            return {};
        }

        /**
         * Getting the referenced element
         *
         * @param key of the reference property (see xsd)
         * @param name that represents the reference
         * @return the referenced element.
         * @throws KeyNotSupportedException if key is not supported or does not fit the data type
         */
        virtual std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(const std::string key, const std::string name) const
        {
            return nullptr;
        }

        /**
         * Returns the open scenario type of this object
         *
         * @return the type (see uml model)
         */
        virtual std::string GetModelType() const
        {
            return "";
        }
    };
}
