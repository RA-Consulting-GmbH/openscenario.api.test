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
#include "MemLeakDetection.h"

/**
 * Container for parameter values (name, type, value)
 */
namespace NET_ASAM_OPENSCENARIO
{
    class ParameterValue 
    {
    private:
        std::string _name;
        std::string _type;
        std::string _value;

    public:
        /**
         * Constructor
         * @param name the name of the parameter
         * @param type the type of a parameter as class
         * @param value the value of a parameter
         */
        ParameterValue(const std::string name, const std::string type, const std::string value) : _name(name), _type(type), _value(value) {}

        /**
         * The name of the parameter
         * @return the name
         */
        std::string GetName() const
        {
            return _name;
        }

        /**
         * The type of a parameter as class
         * @return the type
         */
        std::string GetType() const
        {
            return _type;
        }

        /**
         * The value of a parameter
         * @return the value
         */
        std::string GetValue() const
        {
            return _value;
        }

        /**
         * Sets the value of a parameter
         * @param value the value of a parameter
         */
        void SetValue(const std::string value) 
        {
            _value = value;
        }

    };
}
