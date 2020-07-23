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
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ParameterValue.h"
#include "MemLeakDetection.h"

/**
 * An accessor to a parameterized object
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    class IParameterizedObject
    {
    public:
        IParameterizedObject() = default;
        virtual  ~IParameterizedObject() = default;

        /**
         * A set with all keys for attributes that have parameters instead of real values.
         * @return the set of keys
         */
        virtual std::vector<std::string> GetParameterizedAttributeKeys()
        {
            return {};
        }

        /**
         * resolving a parameter using a string representation of a value
         * @param logger to log messages
         * @param attributeKey attribute key whose parameter should be resolved.
         * @param value string representation of a value
         */
        virtual void ResolveParameter(std::shared_ptr<IParserMessageLogger>& logger, std::string& attributeKey, std::string& value) {}

        /**
         * Checks whether there are unresolved attributes left (attributes that are assigned parameters
         * instead of real values).
         * @return true if the object has unresolved attributes
         */
        virtual bool HasParameterDefinitions()
        {
            return false;
        }

        /**
         * All parameter definition of a parameter.
         * @return a list of ParameterValues
         */
        virtual std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions()
        {
            return {};
        }

        /**
         * The textmarker for a specific parameterized attribute represented by its attribute key.
         * @param attributeKey the key constant
         * @return the textmarker or null if the parameter key does not exists or the parameter is not parameterized.
         */
        virtual std::shared_ptr<Textmarker> GetTextmarker(std::string& attributeKey)
        {
            return nullptr;
        }

        /**
         * The name from a key constant. This method is for assembling messages.
         * @param attributeKey the key constant
         * @return the name of the constant.
         */
        virtual std::string GetParameterNameFromAttribute(std::string& attributeKey)
        {
            return "";
        }

        /**
         * The type of the attribute as a class
         * @param attributeKey the key constant
         * @return the class as a type
         */
        virtual std::string GetTypeFromAttributeName(std::string& attributeKey)
        {
            return "";
        }
    };
}
