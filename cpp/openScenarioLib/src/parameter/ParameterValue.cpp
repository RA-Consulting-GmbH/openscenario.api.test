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

#include "ParameterValue.h"


/**
 * Container for parameter values (name, type, value)
 */
namespace NET_ASAM_OPENSCENARIO
{
	ParameterValue::ParameterValue(const std::string name, const SimpleType type, const std::string value) : _name(name), _type(type), _value(value) {}

    std::string ParameterValue::GetName() const
    {
        return _name;
    }

    SimpleType ParameterValue::GetType() const
    {
        return _type;
    }

    std::string ParameterValue::GetValue() const
    {
        return _value;
    }

    void ParameterValue::SetValue(const std::string value)
    {
        _value = value;
    }


}
