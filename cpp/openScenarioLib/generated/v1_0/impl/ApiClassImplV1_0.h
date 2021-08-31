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

#include "ApiClassInterfacesV1_0.h"
#include "ApiClassWriterInterfacesV1_0.h"
#include "BaseImpl.h"
#include "IParserMessageLogger.h"
#include "ParserHelper.h"
#include "ParameterValue.h"
#include "INamedReference.h"
#include "MemLeakDetection.h"
#include "KeyNotSupportedException.h"
#include "OscConstantsV1_0.h"
#include "ExportDefinitions.h"

// helper.getTypeImportCpp(element,packageName).each{importedType->%>import =importedType%>

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAbsoluteSpeed. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAbsoluteSpeed)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteSpeedImpl: public BaseImpl, public IAbsoluteSpeedWriter, public std::enable_shared_from_this<AbsoluteSpeedImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP AbsoluteSpeedImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAbsoluteTargetLane. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAbsoluteTargetLane)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneImpl: public BaseImpl, public IAbsoluteTargetLaneWriter, public std::enable_shared_from_this<AbsoluteTargetLaneImpl> 
        {
        private:
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP AbsoluteTargetLaneImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAbsoluteTargetLaneOffset. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAbsoluteTargetLaneOffset)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneOffsetImpl: public BaseImpl, public IAbsoluteTargetLaneOffsetWriter, public std::enable_shared_from_this<AbsoluteTargetLaneOffsetImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP AbsoluteTargetLaneOffsetImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAbsoluteTargetSpeed. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAbsoluteTargetSpeed)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetSpeedImpl: public BaseImpl, public IAbsoluteTargetSpeedWriter, public std::enable_shared_from_this<AbsoluteTargetSpeedImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP AbsoluteTargetSpeedImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAccelerationCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAccelerationCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AccelerationConditionImpl: public BaseImpl, public IAccelerationConditionWriter, public std::enable_shared_from_this<AccelerationConditionImpl> 
        {
        private:
            Rule _rule {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP AccelerationConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAcquirePositionAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAcquirePositionAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AcquirePositionActionImpl: public BaseImpl, public IAcquirePositionActionWriter, public std::enable_shared_from_this<AcquirePositionActionImpl> 
        {
        private:
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP AcquirePositionActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAct. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAct)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActImpl: public BaseImpl, public IActWriter, public std::enable_shared_from_this<ActImpl> 
        {
        private:
            std::string _name {};
            std::vector<std::shared_ptr<IManeuverGroupWriter>> _maneuverGroups {};
            std::shared_ptr<ITriggerWriter> _startTrigger {};
            std::shared_ptr<ITriggerWriter> _stopTrigger {};
        public:

            OPENSCENARIOLIB_EXP ActImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IManeuverGroup>> GetManeuverGroups() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IManeuverGroupWriter>> GetWriterManeuverGroups() const override;
            OPENSCENARIOLIB_EXP int GetManeuverGroupsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuverGroup> GetManeuverGroupsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrigger> GetStartTrigger() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrigger> GetStopTrigger() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetManeuverGroups(std::vector<std::shared_ptr<IManeuverGroupWriter>>& maneuverGroups) override;

            OPENSCENARIOLIB_EXP void SetStartTrigger(std::shared_ptr<ITriggerWriter> startTrigger) override;

            OPENSCENARIOLIB_EXP void SetStopTrigger(std::shared_ptr<ITriggerWriter> stopTrigger) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggerWriter> GetWriterStartTrigger() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggerWriter> GetWriterStopTrigger() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActionImpl: public BaseImpl, public IActionWriter, public std::enable_shared_from_this<ActionImpl> 
        {
        private:
            std::string _name {};
            std::shared_ptr<IGlobalActionWriter> _globalAction {};
            std::shared_ptr<IUserDefinedActionWriter> _userDefinedAction {};
            std::shared_ptr<IPrivateActionWriter> _privateAction {};
        public:

            OPENSCENARIOLIB_EXP ActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IGlobalAction> GetGlobalAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedAction> GetUserDefinedAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPrivateAction> GetPrivateAction() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetGlobalAction(std::shared_ptr<IGlobalActionWriter> globalAction) override;

            OPENSCENARIOLIB_EXP void SetUserDefinedAction(std::shared_ptr<IUserDefinedActionWriter> userDefinedAction) override;

            OPENSCENARIOLIB_EXP void SetPrivateAction(std::shared_ptr<IPrivateActionWriter> privateAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IGlobalActionWriter> GetWriterGlobalAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedActionWriter> GetWriterUserDefinedAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPrivateActionWriter> GetWriterPrivateAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IActivateControllerAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IActivateControllerAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActivateControllerActionImpl: public BaseImpl, public IActivateControllerActionWriter, public std::enable_shared_from_this<ActivateControllerActionImpl> 
        {
        private:
            bool _lateral {};
            bool _longitudinal {};
        public:

            OPENSCENARIOLIB_EXP ActivateControllerActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetLateral() const override;
            OPENSCENARIOLIB_EXP bool GetLongitudinal() const override;


            OPENSCENARIOLIB_EXP void SetLateral(const bool lateral) override;

            OPENSCENARIOLIB_EXP void SetLongitudinal(const bool longitudinal) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLateral(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLongitudinal(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLateral() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLongitudinal() const override;

            OPENSCENARIOLIB_EXP bool IsLateralParameterized() override;

            OPENSCENARIOLIB_EXP bool IsLongitudinalParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IActors. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IActors)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActorsImpl: public BaseImpl, public IActorsWriter, public std::enable_shared_from_this<ActorsImpl> 
        {
        private:
            bool _selectTriggeringEntities {};
            std::vector<std::shared_ptr<IEntityRefWriter>> _entityRefs {};
        public:

            OPENSCENARIOLIB_EXP ActorsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetSelectTriggeringEntities() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntityRefWriter>> GetWriterEntityRefs() const override;
            OPENSCENARIOLIB_EXP int GetEntityRefsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRef> GetEntityRefsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetSelectTriggeringEntities(const bool selectTriggeringEntities) override;

            OPENSCENARIOLIB_EXP void SetEntityRefs(std::vector<std::shared_ptr<IEntityRefWriter>>& entityRefs) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToSelectTriggeringEntities(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromSelectTriggeringEntities() const override;

            OPENSCENARIOLIB_EXP bool IsSelectTriggeringEntitiesParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAddEntityAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAddEntityAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AddEntityActionImpl: public BaseImpl, public IAddEntityActionWriter, public std::enable_shared_from_this<AddEntityActionImpl> 
        {
        private:
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP AddEntityActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAssignControllerAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAssignControllerAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignControllerActionImpl: public BaseImpl, public IAssignControllerActionWriter, public std::enable_shared_from_this<AssignControllerActionImpl> 
        {
        private:
            std::shared_ptr<IControllerWriter> _controller {};
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
        public:

            OPENSCENARIOLIB_EXP AssignControllerActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IController> GetController() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;


            OPENSCENARIOLIB_EXP void SetController(std::shared_ptr<IControllerWriter> controller) override;

            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerWriter> GetWriterController() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAssignRouteAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAssignRouteAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignRouteActionImpl: public BaseImpl, public IAssignRouteActionWriter, public std::enable_shared_from_this<AssignRouteActionImpl> 
        {
        private:
            std::shared_ptr<IRouteWriter> _route {};
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
        public:

            OPENSCENARIOLIB_EXP AssignRouteActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoute> GetRoute() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;


            OPENSCENARIOLIB_EXP void SetRoute(std::shared_ptr<IRouteWriter> route) override;

            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteWriter> GetWriterRoute() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAxle. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAxle)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxleImpl: public BaseImpl, public IAxleWriter, public std::enable_shared_from_this<AxleImpl> 
        {
        private:
            double _maxSteering {};
            double _positionX {};
            double _positionZ {};
            double _trackWidth {};
            double _wheelDiameter {};
        public:

            OPENSCENARIOLIB_EXP AxleImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetMaxSteering() const override;
            OPENSCENARIOLIB_EXP double GetPositionX() const override;
            OPENSCENARIOLIB_EXP double GetPositionZ() const override;
            OPENSCENARIOLIB_EXP double GetTrackWidth() const override;
            OPENSCENARIOLIB_EXP double GetWheelDiameter() const override;


            OPENSCENARIOLIB_EXP void SetMaxSteering(const double maxSteering) override;

            OPENSCENARIOLIB_EXP void SetPositionX(const double positionX) override;

            OPENSCENARIOLIB_EXP void SetPositionZ(const double positionZ) override;

            OPENSCENARIOLIB_EXP void SetTrackWidth(const double trackWidth) override;

            OPENSCENARIOLIB_EXP void SetWheelDiameter(const double wheelDiameter) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxSteering(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPositionX(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPositionZ(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTrackWidth(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToWheelDiameter(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxSteering() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPositionX() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPositionZ() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTrackWidth() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromWheelDiameter() const override;

            OPENSCENARIOLIB_EXP bool IsMaxSteeringParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPositionXParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPositionZParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTrackWidthParameterized() override;

            OPENSCENARIOLIB_EXP bool IsWheelDiameterParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IAxles. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IAxles)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxlesImpl: public BaseImpl, public IAxlesWriter, public std::enable_shared_from_this<AxlesImpl> 
        {
        private:
            std::shared_ptr<IAxleWriter> _frontAxle {};
            std::shared_ptr<IAxleWriter> _rearAxle {};
            std::vector<std::shared_ptr<IAxleWriter>> _additionalAxles {};
        public:

            OPENSCENARIOLIB_EXP AxlesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAxle> GetFrontAxle() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAxle> GetRearAxle() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IAxle>> GetAdditionalAxles() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IAxleWriter>> GetWriterAdditionalAxles() const override;
            OPENSCENARIOLIB_EXP int GetAdditionalAxlesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAxle> GetAdditionalAxlesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetFrontAxle(std::shared_ptr<IAxleWriter> frontAxle) override;

            OPENSCENARIOLIB_EXP void SetRearAxle(std::shared_ptr<IAxleWriter> rearAxle) override;

            OPENSCENARIOLIB_EXP void SetAdditionalAxles(std::vector<std::shared_ptr<IAxleWriter>>& additionalAxles) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IAxleWriter> GetWriterFrontAxle() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAxleWriter> GetWriterRearAxle() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IBoundingBox. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IBoundingBox)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class BoundingBoxImpl: public BaseImpl, public IBoundingBoxWriter, public std::enable_shared_from_this<BoundingBoxImpl> 
        {
        private:
            std::shared_ptr<ICenterWriter> _center {};
            std::shared_ptr<IDimensionsWriter> _dimensions {};
        public:

            OPENSCENARIOLIB_EXP BoundingBoxImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICenter> GetCenter() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDimensions> GetDimensions() const override;


            OPENSCENARIOLIB_EXP void SetCenter(std::shared_ptr<ICenterWriter> center) override;

            OPENSCENARIOLIB_EXP void SetDimensions(std::shared_ptr<IDimensionsWriter> dimensions) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICenterWriter> GetWriterCenter() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDimensionsWriter> GetWriterDimensions() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IByEntityCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IByEntityCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByEntityConditionImpl: public BaseImpl, public IByEntityConditionWriter, public std::enable_shared_from_this<ByEntityConditionImpl> 
        {
        private:
            std::shared_ptr<ITriggeringEntitiesWriter> _triggeringEntities {};
            std::shared_ptr<IEntityConditionWriter> _entityCondition {};
        public:

            OPENSCENARIOLIB_EXP ByEntityConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggeringEntities> GetTriggeringEntities() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityCondition> GetEntityCondition() const override;


            OPENSCENARIOLIB_EXP void SetTriggeringEntities(std::shared_ptr<ITriggeringEntitiesWriter> triggeringEntities) override;

            OPENSCENARIOLIB_EXP void SetEntityCondition(std::shared_ptr<IEntityConditionWriter> entityCondition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggeringEntitiesWriter> GetWriterTriggeringEntities() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityConditionWriter> GetWriterEntityCondition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IByObjectType. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IByObjectType)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByObjectTypeImpl: public BaseImpl, public IByObjectTypeWriter, public std::enable_shared_from_this<ByObjectTypeImpl> 
        {
        private:
            ObjectType _type {};
        public:

            OPENSCENARIOLIB_EXP ByObjectTypeImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP ObjectType GetType() const override;


            OPENSCENARIOLIB_EXP void SetType(const ObjectType type) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromType() const override;

            OPENSCENARIOLIB_EXP bool IsTypeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IByType. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IByType)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByTypeImpl: public BaseImpl, public IByTypeWriter, public std::enable_shared_from_this<ByTypeImpl> 
        {
        private:
            ObjectType _objectType {};
        public:

            OPENSCENARIOLIB_EXP ByTypeImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP ObjectType GetObjectType() const override;


            OPENSCENARIOLIB_EXP void SetObjectType(const ObjectType objectType) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToObjectType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromObjectType() const override;

            OPENSCENARIOLIB_EXP bool IsObjectTypeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IByValueCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IByValueCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByValueConditionImpl: public BaseImpl, public IByValueConditionWriter, public std::enable_shared_from_this<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<IParameterConditionWriter> _parameterCondition {};
            std::shared_ptr<ITimeOfDayConditionWriter> _timeOfDayCondition {};
            std::shared_ptr<ISimulationTimeConditionWriter> _simulationTimeCondition {};
            std::shared_ptr<IStoryboardElementStateConditionWriter> _storyboardElementStateCondition {};
            std::shared_ptr<IUserDefinedValueConditionWriter> _userDefinedValueCondition {};
            std::shared_ptr<ITrafficSignalConditionWriter> _trafficSignalCondition {};
            std::shared_ptr<ITrafficSignalControllerConditionWriter> _trafficSignalControllerCondition {};
        public:

            OPENSCENARIOLIB_EXP ByValueConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterCondition> GetParameterCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeOfDayCondition> GetTimeOfDayCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISimulationTimeCondition> GetSimulationTimeCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryboardElementStateCondition> GetStoryboardElementStateCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedValueCondition> GetUserDefinedValueCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalCondition> GetTrafficSignalCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerCondition> GetTrafficSignalControllerCondition() const override;


            OPENSCENARIOLIB_EXP void SetParameterCondition(std::shared_ptr<IParameterConditionWriter> parameterCondition) override;

            OPENSCENARIOLIB_EXP void SetTimeOfDayCondition(std::shared_ptr<ITimeOfDayConditionWriter> timeOfDayCondition) override;

            OPENSCENARIOLIB_EXP void SetSimulationTimeCondition(std::shared_ptr<ISimulationTimeConditionWriter> simulationTimeCondition) override;

            OPENSCENARIOLIB_EXP void SetStoryboardElementStateCondition(std::shared_ptr<IStoryboardElementStateConditionWriter> storyboardElementStateCondition) override;

            OPENSCENARIOLIB_EXP void SetUserDefinedValueCondition(std::shared_ptr<IUserDefinedValueConditionWriter> userDefinedValueCondition) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalCondition(std::shared_ptr<ITrafficSignalConditionWriter> trafficSignalCondition) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalControllerCondition(std::shared_ptr<ITrafficSignalControllerConditionWriter> trafficSignalControllerCondition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterConditionWriter> GetWriterParameterCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeOfDayConditionWriter> GetWriterTimeOfDayCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISimulationTimeConditionWriter> GetWriterSimulationTimeCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryboardElementStateConditionWriter> GetWriterStoryboardElementStateCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedValueConditionWriter> GetWriterUserDefinedValueCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalConditionWriter> GetWriterTrafficSignalCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerConditionWriter> GetWriterTrafficSignalControllerCondition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICatalog. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICatalog)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogImpl: public BaseImpl, public ICatalogWriter, public std::enable_shared_from_this<CatalogImpl> 
        {
        private:
            std::string _name {};
            std::vector<std::shared_ptr<IVehicleWriter>> _vehicles {};
            std::vector<std::shared_ptr<IControllerWriter>> _controllers {};
            std::vector<std::shared_ptr<IPedestrianWriter>> _pedestrians {};
            std::vector<std::shared_ptr<IMiscObjectWriter>> _miscObjects {};
            std::vector<std::shared_ptr<IEnvironmentWriter>> _environments {};
            std::vector<std::shared_ptr<IManeuverWriter>> _maneuvers {};
            std::vector<std::shared_ptr<ITrajectoryWriter>> _trajectories {};
            std::vector<std::shared_ptr<IRouteWriter>> _routes {};
        public:

            OPENSCENARIOLIB_EXP CatalogImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IVehicle>> GetVehicles() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IVehicleWriter>> GetWriterVehicles() const override;
            OPENSCENARIOLIB_EXP int GetVehiclesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicle> GetVehiclesAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IController>> GetControllers() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IControllerWriter>> GetWriterControllers() const override;
            OPENSCENARIOLIB_EXP int GetControllersSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IController> GetControllersAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPedestrian>> GetPedestrians() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPedestrianWriter>> GetWriterPedestrians() const override;
            OPENSCENARIOLIB_EXP int GetPedestriansSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrian> GetPedestriansAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IMiscObject>> GetMiscObjects() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IMiscObjectWriter>> GetWriterMiscObjects() const override;
            OPENSCENARIOLIB_EXP int GetMiscObjectsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObject> GetMiscObjectsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEnvironment>> GetEnvironments() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEnvironmentWriter>> GetWriterEnvironments() const override;
            OPENSCENARIOLIB_EXP int GetEnvironmentsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironment> GetEnvironmentsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IManeuver>> GetManeuvers() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IManeuverWriter>> GetWriterManeuvers() const override;
            OPENSCENARIOLIB_EXP int GetManeuversSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuver> GetManeuversAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ITrajectory>> GetTrajectories() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ITrajectoryWriter>> GetWriterTrajectories() const override;
            OPENSCENARIOLIB_EXP int GetTrajectoriesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectory> GetTrajectoriesAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IRoute>> GetRoutes() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IRouteWriter>> GetWriterRoutes() const override;
            OPENSCENARIOLIB_EXP int GetRoutesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoute> GetRoutesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetVehicles(std::vector<std::shared_ptr<IVehicleWriter>>& vehicles) override;

            OPENSCENARIOLIB_EXP void SetControllers(std::vector<std::shared_ptr<IControllerWriter>>& controllers) override;

            OPENSCENARIOLIB_EXP void SetPedestrians(std::vector<std::shared_ptr<IPedestrianWriter>>& pedestrians) override;

            OPENSCENARIOLIB_EXP void SetMiscObjects(std::vector<std::shared_ptr<IMiscObjectWriter>>& miscObjects) override;

            OPENSCENARIOLIB_EXP void SetEnvironments(std::vector<std::shared_ptr<IEnvironmentWriter>>& environments) override;

            OPENSCENARIOLIB_EXP void SetManeuvers(std::vector<std::shared_ptr<IManeuverWriter>>& maneuvers) override;

            OPENSCENARIOLIB_EXP void SetTrajectories(std::vector<std::shared_ptr<ITrajectoryWriter>>& trajectories) override;

            OPENSCENARIOLIB_EXP void SetRoutes(std::vector<std::shared_ptr<IRouteWriter>>& routes) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICatalogDefinition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICatalogDefinition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogDefinitionImpl: public BaseImpl, public ICatalogDefinitionWriter, public std::enable_shared_from_this<CatalogDefinitionImpl> 
        {
        private:
            std::shared_ptr<ICatalogWriter> _catalog {};
        public:

            OPENSCENARIOLIB_EXP CatalogDefinitionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalog> GetCatalog() const override;


            OPENSCENARIOLIB_EXP void SetCatalog(std::shared_ptr<ICatalogWriter> catalog) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogWriter> GetWriterCatalog() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICatalogLocations. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICatalogLocations)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogLocationsImpl: public BaseImpl, public ICatalogLocationsWriter, public std::enable_shared_from_this<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<IVehicleCatalogLocationWriter> _vehicleCatalog {};
            std::shared_ptr<IControllerCatalogLocationWriter> _controllerCatalog {};
            std::shared_ptr<IPedestrianCatalogLocationWriter> _pedestrianCatalog {};
            std::shared_ptr<IMiscObjectCatalogLocationWriter> _miscObjectCatalog {};
            std::shared_ptr<IEnvironmentCatalogLocationWriter> _environmentCatalog {};
            std::shared_ptr<IManeuverCatalogLocationWriter> _maneuverCatalog {};
            std::shared_ptr<ITrajectoryCatalogLocationWriter> _trajectoryCatalog {};
            std::shared_ptr<IRouteCatalogLocationWriter> _routeCatalog {};
        public:

            OPENSCENARIOLIB_EXP CatalogLocationsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCatalogLocation> GetVehicleCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerCatalogLocation> GetControllerCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrianCatalogLocation> GetPedestrianCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObjectCatalogLocation> GetMiscObjectCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentCatalogLocation> GetEnvironmentCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuverCatalogLocation> GetManeuverCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryCatalogLocation> GetTrajectoryCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteCatalogLocation> GetRouteCatalog() const override;


            OPENSCENARIOLIB_EXP void SetVehicleCatalog(std::shared_ptr<IVehicleCatalogLocationWriter> vehicleCatalog) override;

            OPENSCENARIOLIB_EXP void SetControllerCatalog(std::shared_ptr<IControllerCatalogLocationWriter> controllerCatalog) override;

            OPENSCENARIOLIB_EXP void SetPedestrianCatalog(std::shared_ptr<IPedestrianCatalogLocationWriter> pedestrianCatalog) override;

            OPENSCENARIOLIB_EXP void SetMiscObjectCatalog(std::shared_ptr<IMiscObjectCatalogLocationWriter> miscObjectCatalog) override;

            OPENSCENARIOLIB_EXP void SetEnvironmentCatalog(std::shared_ptr<IEnvironmentCatalogLocationWriter> environmentCatalog) override;

            OPENSCENARIOLIB_EXP void SetManeuverCatalog(std::shared_ptr<IManeuverCatalogLocationWriter> maneuverCatalog) override;

            OPENSCENARIOLIB_EXP void SetTrajectoryCatalog(std::shared_ptr<ITrajectoryCatalogLocationWriter> trajectoryCatalog) override;

            OPENSCENARIOLIB_EXP void SetRouteCatalog(std::shared_ptr<IRouteCatalogLocationWriter> routeCatalog) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCatalogLocationWriter> GetWriterVehicleCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerCatalogLocationWriter> GetWriterControllerCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrianCatalogLocationWriter> GetWriterPedestrianCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObjectCatalogLocationWriter> GetWriterMiscObjectCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentCatalogLocationWriter> GetWriterEnvironmentCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuverCatalogLocationWriter> GetWriterManeuverCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryCatalogLocationWriter> GetWriterTrajectoryCatalog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteCatalogLocationWriter> GetWriterRouteCatalog() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICatalogReference. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICatalogReference)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogReferenceImpl: public BaseImpl, public ICatalogReferenceWriter, public std::enable_shared_from_this<CatalogReferenceImpl> 
        {
        private:
            std::string _catalogName {};
            std::string _entryName {};
            std::vector<std::shared_ptr<IParameterAssignmentWriter>> _parameterAssignments {};
            std::shared_ptr<ICatalogElement> _ref {};
        public:

            OPENSCENARIOLIB_EXP CatalogReferenceImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetCatalogName() const override;
            OPENSCENARIOLIB_EXP std::string GetEntryName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterAssignment>> GetParameterAssignments() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterAssignmentWriter>> GetWriterParameterAssignments() const override;
            OPENSCENARIOLIB_EXP int GetParameterAssignmentsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterAssignment> GetParameterAssignmentsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogElement> GetRef() const override;


            OPENSCENARIOLIB_EXP void SetCatalogName(const std::string catalogName) override;

            OPENSCENARIOLIB_EXP void SetEntryName(const std::string entryName) override;

            OPENSCENARIOLIB_EXP void SetParameterAssignments(std::vector<std::shared_ptr<IParameterAssignmentWriter>>& parameterAssignments) override;

            OPENSCENARIOLIB_EXP void SetRef(const std::shared_ptr<ICatalogElement> ref) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToCatalogName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntryName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromCatalogName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntryName() const override;

            OPENSCENARIOLIB_EXP bool IsCatalogNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntryNameParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICenter. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICenter)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CenterImpl: public BaseImpl, public ICenterWriter, public std::enable_shared_from_this<CenterImpl> 
        {
        private:
            double _x {};
            double _y {};
            double _z {};
        public:

            OPENSCENARIOLIB_EXP CenterImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetX() const override;
            OPENSCENARIOLIB_EXP double GetY() const override;
            OPENSCENARIOLIB_EXP double GetZ() const override;


            OPENSCENARIOLIB_EXP void SetX(const double x) override;

            OPENSCENARIOLIB_EXP void SetY(const double y) override;

            OPENSCENARIOLIB_EXP void SetZ(const double z) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToX(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToY(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToZ(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromX() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromY() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromZ() const override;

            OPENSCENARIOLIB_EXP bool IsXParameterized() override;

            OPENSCENARIOLIB_EXP bool IsYParameterized() override;

            OPENSCENARIOLIB_EXP bool IsZParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICentralSwarmObject. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICentralSwarmObject)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CentralSwarmObjectImpl: public BaseImpl, public ICentralSwarmObjectWriter, public std::enable_shared_from_this<CentralSwarmObjectImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
        public:

            OPENSCENARIOLIB_EXP CentralSwarmObjectImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IClothoid. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IClothoid)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ClothoidImpl: public BaseImpl, public IClothoidWriter, public std::enable_shared_from_this<ClothoidImpl> 
        {
        private:
            double _curvature {};
            double _curvatureDot {};
            double _length {};
            double _startTime {};
            double _stopTime {};
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP ClothoidImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetCurvature() const override;
            OPENSCENARIOLIB_EXP double GetCurvatureDot() const override;
            OPENSCENARIOLIB_EXP double GetLength() const override;
            OPENSCENARIOLIB_EXP double GetStartTime() const override;
            OPENSCENARIOLIB_EXP double GetStopTime() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetCurvature(const double curvature) override;

            OPENSCENARIOLIB_EXP void SetCurvatureDot(const double curvatureDot) override;

            OPENSCENARIOLIB_EXP void SetLength(const double length) override;

            OPENSCENARIOLIB_EXP void SetStartTime(const double startTime) override;

            OPENSCENARIOLIB_EXP void SetStopTime(const double stopTime) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToCurvature(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToCurvatureDot(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLength(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToStartTime(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToStopTime(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromCurvature() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromCurvatureDot() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLength() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromStartTime() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromStopTime() const override;

            OPENSCENARIOLIB_EXP bool IsCurvatureParameterized() override;

            OPENSCENARIOLIB_EXP bool IsCurvatureDotParameterized() override;

            OPENSCENARIOLIB_EXP bool IsLengthParameterized() override;

            OPENSCENARIOLIB_EXP bool IsStartTimeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsStopTimeParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICollisionCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICollisionCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CollisionConditionImpl: public BaseImpl, public ICollisionConditionWriter, public std::enable_shared_from_this<CollisionConditionImpl> 
        {
        private:
            std::shared_ptr<IEntityRefWriter> _entityRef {};
            std::shared_ptr<IByObjectTypeWriter> _byType {};
        public:

            OPENSCENARIOLIB_EXP CollisionConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRef> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IByObjectType> GetByType() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<IEntityRefWriter> entityRef) override;

            OPENSCENARIOLIB_EXP void SetByType(std::shared_ptr<IByObjectTypeWriter> byType) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRefWriter> GetWriterEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IByObjectTypeWriter> GetWriterByType() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionImpl: public BaseImpl, public IConditionWriter, public std::enable_shared_from_this<ConditionImpl> 
        {
        private:
            ConditionEdge _conditionEdge {};
            double _delay {};
            std::string _name {};
            std::shared_ptr<IByEntityConditionWriter> _byEntityCondition {};
            std::shared_ptr<IByValueConditionWriter> _byValueCondition {};
        public:

            OPENSCENARIOLIB_EXP ConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP ConditionEdge GetConditionEdge() const override;
            OPENSCENARIOLIB_EXP double GetDelay() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IByEntityCondition> GetByEntityCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IByValueCondition> GetByValueCondition() const override;


            OPENSCENARIOLIB_EXP void SetConditionEdge(const ConditionEdge conditionEdge) override;

            OPENSCENARIOLIB_EXP void SetDelay(const double delay) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetByEntityCondition(std::shared_ptr<IByEntityConditionWriter> byEntityCondition) override;

            OPENSCENARIOLIB_EXP void SetByValueCondition(std::shared_ptr<IByValueConditionWriter> byValueCondition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToConditionEdge(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDelay(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromConditionEdge() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDelay() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsConditionEdgeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDelayParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IByEntityConditionWriter> GetWriterByEntityCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IByValueConditionWriter> GetWriterByValueCondition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IConditionGroup. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IConditionGroup)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionGroupImpl: public BaseImpl, public IConditionGroupWriter, public std::enable_shared_from_this<ConditionGroupImpl> 
        {
        private:
            std::vector<std::shared_ptr<IConditionWriter>> _conditions {};
        public:

            OPENSCENARIOLIB_EXP ConditionGroupImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ICondition>> GetConditions() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IConditionWriter>> GetWriterConditions() const override;
            OPENSCENARIOLIB_EXP int GetConditionsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICondition> GetConditionsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetConditions(std::vector<std::shared_ptr<IConditionWriter>>& conditions) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IControlPoint. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IControlPoint)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControlPointImpl: public BaseImpl, public IControlPointWriter, public std::enable_shared_from_this<ControlPointImpl> 
        {
        private:
            double _time {};
            double _weight {};
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP ControlPointImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetTime() const override;
            OPENSCENARIOLIB_EXP double GetWeight() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetTime(const double time) override;

            OPENSCENARIOLIB_EXP void SetWeight(const double weight) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTime(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToWeight(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTime() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromWeight() const override;

            OPENSCENARIOLIB_EXP bool IsTimeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsWeightParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IController. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IController)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerImpl: public BaseImpl, public IControllerWriter, public std::enable_shared_from_this<ControllerImpl> 
        {
        private:
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<IPropertiesWriter> _properties {};
        public:

            OPENSCENARIOLIB_EXP ControllerImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IProperties> GetProperties() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetProperties(std::shared_ptr<IPropertiesWriter> properties) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertiesWriter> GetWriterProperties() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IControllerAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IControllerAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerActionImpl: public BaseImpl, public IControllerActionWriter, public std::enable_shared_from_this<ControllerActionImpl> 
        {
        private:
            std::shared_ptr<IAssignControllerActionWriter> _assignControllerAction {};
            std::shared_ptr<IOverrideControllerValueActionWriter> _overrideControllerValueAction {};
        public:

            OPENSCENARIOLIB_EXP ControllerActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAssignControllerAction> GetAssignControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideControllerValueAction> GetOverrideControllerValueAction() const override;


            OPENSCENARIOLIB_EXP void SetAssignControllerAction(std::shared_ptr<IAssignControllerActionWriter> assignControllerAction) override;

            OPENSCENARIOLIB_EXP void SetOverrideControllerValueAction(std::shared_ptr<IOverrideControllerValueActionWriter> overrideControllerValueAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IAssignControllerActionWriter> GetWriterAssignControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideControllerValueActionWriter> GetWriterOverrideControllerValueAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IControllerCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IControllerCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerCatalogLocationImpl: public BaseImpl, public IControllerCatalogLocationWriter, public std::enable_shared_from_this<ControllerCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP ControllerCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IControllerDistribution. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IControllerDistribution)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionImpl: public BaseImpl, public IControllerDistributionWriter, public std::enable_shared_from_this<ControllerDistributionImpl> 
        {
        private:
            std::vector<std::shared_ptr<IControllerDistributionEntryWriter>> _controllerDistributionEntries {};
        public:

            OPENSCENARIOLIB_EXP ControllerDistributionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IControllerDistributionEntry>> GetControllerDistributionEntries() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IControllerDistributionEntryWriter>> GetWriterControllerDistributionEntries() const override;
            OPENSCENARIOLIB_EXP int GetControllerDistributionEntriesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerDistributionEntry> GetControllerDistributionEntriesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetControllerDistributionEntries(std::vector<std::shared_ptr<IControllerDistributionEntryWriter>>& controllerDistributionEntries) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IControllerDistributionEntry. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IControllerDistributionEntry)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryImpl: public BaseImpl, public IControllerDistributionEntryWriter, public std::enable_shared_from_this<ControllerDistributionEntryImpl> 
        {
        private:
            double _weight {};
            std::shared_ptr<IControllerWriter> _controller {};
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
        public:

            OPENSCENARIOLIB_EXP ControllerDistributionEntryImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetWeight() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IController> GetController() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;


            OPENSCENARIOLIB_EXP void SetWeight(const double weight) override;

            OPENSCENARIOLIB_EXP void SetController(std::shared_ptr<IControllerWriter> controller) override;

            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToWeight(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromWeight() const override;

            OPENSCENARIOLIB_EXP bool IsWeightParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerWriter> GetWriterController() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ICustomCommandAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ICustomCommandAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CustomCommandActionImpl: public BaseImpl, public ICustomCommandActionWriter, public std::enable_shared_from_this<CustomCommandActionImpl> 
        {
        private:
            std::string _content {};
            std::string _type {};
        public:

            OPENSCENARIOLIB_EXP CustomCommandActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetContent() const override;
            OPENSCENARIOLIB_EXP std::string GetType() const override;


            OPENSCENARIOLIB_EXP void SetContent(const std::string content) override;

            OPENSCENARIOLIB_EXP void SetType(const std::string type) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToContent(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromContent() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromType() const override;

            OPENSCENARIOLIB_EXP bool IsContentParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTypeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IDeleteEntityAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IDeleteEntityAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeleteEntityActionImpl: public BaseImpl, public IDeleteEntityActionWriter, public std::enable_shared_from_this<DeleteEntityActionImpl> 
        {
        private:
        public:

            OPENSCENARIOLIB_EXP DeleteEntityActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;



            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IDimensions. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IDimensions)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DimensionsImpl: public BaseImpl, public IDimensionsWriter, public std::enable_shared_from_this<DimensionsImpl> 
        {
        private:
            double _height {};
            double _length {};
            double _width {};
        public:

            OPENSCENARIOLIB_EXP DimensionsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetHeight() const override;
            OPENSCENARIOLIB_EXP double GetLength() const override;
            OPENSCENARIOLIB_EXP double GetWidth() const override;


            OPENSCENARIOLIB_EXP void SetHeight(const double height) override;

            OPENSCENARIOLIB_EXP void SetLength(const double length) override;

            OPENSCENARIOLIB_EXP void SetWidth(const double width) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToHeight(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLength(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToWidth(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromHeight() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLength() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromWidth() const override;

            OPENSCENARIOLIB_EXP bool IsHeightParameterized() override;

            OPENSCENARIOLIB_EXP bool IsLengthParameterized() override;

            OPENSCENARIOLIB_EXP bool IsWidthParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IDirectory. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IDirectory)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectoryImpl: public BaseImpl, public IDirectoryWriter, public std::enable_shared_from_this<DirectoryImpl> 
        {
        private:
            std::string _path {};
        public:

            OPENSCENARIOLIB_EXP DirectoryImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetPath() const override;


            OPENSCENARIOLIB_EXP void SetPath(const std::string path) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPath(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPath() const override;

            OPENSCENARIOLIB_EXP bool IsPathParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IDistanceCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IDistanceCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistanceConditionImpl: public BaseImpl, public IDistanceConditionWriter, public std::enable_shared_from_this<DistanceConditionImpl> 
        {
        private:
            bool _alongRoute {};
            bool _freespace {};
            Rule _rule {};
            double _value {};
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP DistanceConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetAlongRoute() const override;
            OPENSCENARIOLIB_EXP bool GetFreespace() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetAlongRoute(const bool alongRoute) override;

            OPENSCENARIOLIB_EXP void SetFreespace(const bool freespace) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToAlongRoute(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFreespace(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromAlongRoute() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFreespace() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsAlongRouteParameterized() override;

            OPENSCENARIOLIB_EXP bool IsFreespaceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IDynamicConstraints. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IDynamicConstraints)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DynamicConstraintsImpl: public BaseImpl, public IDynamicConstraintsWriter, public std::enable_shared_from_this<DynamicConstraintsImpl> 
        {
        private:
            double _maxAcceleration {};
            double _maxDeceleration {};
            double _maxSpeed {};
        public:

            OPENSCENARIOLIB_EXP DynamicConstraintsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetMaxAcceleration() const override;
            OPENSCENARIOLIB_EXP double GetMaxDeceleration() const override;
            OPENSCENARIOLIB_EXP double GetMaxSpeed() const override;


            OPENSCENARIOLIB_EXP void SetMaxAcceleration(const double maxAcceleration) override;

            OPENSCENARIOLIB_EXP void SetMaxDeceleration(const double maxDeceleration) override;

            OPENSCENARIOLIB_EXP void SetMaxSpeed(const double maxSpeed) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxAcceleration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxDeceleration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxSpeed(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxAcceleration() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxDeceleration() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxSpeed() const override;

            OPENSCENARIOLIB_EXP bool IsMaxAccelerationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsMaxDecelerationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsMaxSpeedParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEndOfRoadCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEndOfRoadCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EndOfRoadConditionImpl: public BaseImpl, public IEndOfRoadConditionWriter, public std::enable_shared_from_this<EndOfRoadConditionImpl> 
        {
        private:
            double _duration {};
        public:

            OPENSCENARIOLIB_EXP EndOfRoadConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDuration() const override;


            OPENSCENARIOLIB_EXP void SetDuration(const double duration) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDuration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDuration() const override;

            OPENSCENARIOLIB_EXP bool IsDurationParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEntities. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEntities)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntitiesImpl: public BaseImpl, public IEntitiesWriter, public std::enable_shared_from_this<EntitiesImpl> 
        {
        private:
            std::vector<std::shared_ptr<IScenarioObjectWriter>> _scenarioObjects {};
            std::vector<std::shared_ptr<IEntitySelectionWriter>> _entitySelections {};
        public:

            OPENSCENARIOLIB_EXP EntitiesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IScenarioObject>> GetScenarioObjects() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IScenarioObjectWriter>> GetWriterScenarioObjects() const override;
            OPENSCENARIOLIB_EXP int GetScenarioObjectsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IScenarioObject> GetScenarioObjectsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntitySelection>> GetEntitySelections() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntitySelectionWriter>> GetWriterEntitySelections() const override;
            OPENSCENARIOLIB_EXP int GetEntitySelectionsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntitySelection> GetEntitySelectionsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetScenarioObjects(std::vector<std::shared_ptr<IScenarioObjectWriter>>& scenarioObjects) override;

            OPENSCENARIOLIB_EXP void SetEntitySelections(std::vector<std::shared_ptr<IEntitySelectionWriter>>& entitySelections) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEntityAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEntityAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityActionImpl: public BaseImpl, public IEntityActionWriter, public std::enable_shared_from_this<EntityActionImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            std::shared_ptr<IAddEntityActionWriter> _addEntityAction {};
            std::shared_ptr<IDeleteEntityActionWriter> _deleteEntityAction {};
        public:

            OPENSCENARIOLIB_EXP EntityActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAddEntityAction> GetAddEntityAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDeleteEntityAction> GetDeleteEntityAction() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetAddEntityAction(std::shared_ptr<IAddEntityActionWriter> addEntityAction) override;

            OPENSCENARIOLIB_EXP void SetDeleteEntityAction(std::shared_ptr<IDeleteEntityActionWriter> deleteEntityAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IAddEntityActionWriter> GetWriterAddEntityAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDeleteEntityActionWriter> GetWriterDeleteEntityAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEntityCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEntityCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityConditionImpl: public BaseImpl, public IEntityConditionWriter, public std::enable_shared_from_this<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<IEndOfRoadConditionWriter> _endOfRoadCondition {};
            std::shared_ptr<ICollisionConditionWriter> _collisionCondition {};
            std::shared_ptr<IOffroadConditionWriter> _offroadCondition {};
            std::shared_ptr<ITimeHeadwayConditionWriter> _timeHeadwayCondition {};
            std::shared_ptr<ITimeToCollisionConditionWriter> _timeToCollisionCondition {};
            std::shared_ptr<IAccelerationConditionWriter> _accelerationCondition {};
            std::shared_ptr<IStandStillConditionWriter> _standStillCondition {};
            std::shared_ptr<ISpeedConditionWriter> _speedCondition {};
            std::shared_ptr<IRelativeSpeedConditionWriter> _relativeSpeedCondition {};
            std::shared_ptr<ITraveledDistanceConditionWriter> _traveledDistanceCondition {};
            std::shared_ptr<IReachPositionConditionWriter> _reachPositionCondition {};
            std::shared_ptr<IDistanceConditionWriter> _distanceCondition {};
            std::shared_ptr<IRelativeDistanceConditionWriter> _relativeDistanceCondition {};
        public:

            OPENSCENARIOLIB_EXP EntityConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEndOfRoadCondition> GetEndOfRoadCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICollisionCondition> GetCollisionCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOffroadCondition> GetOffroadCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeHeadwayCondition> GetTimeHeadwayCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeToCollisionCondition> GetTimeToCollisionCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAccelerationCondition> GetAccelerationCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStandStillCondition> GetStandStillCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedCondition> GetSpeedCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeSpeedCondition> GetRelativeSpeedCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITraveledDistanceCondition> GetTraveledDistanceCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IReachPositionCondition> GetReachPositionCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDistanceCondition> GetDistanceCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeDistanceCondition> GetRelativeDistanceCondition() const override;


            OPENSCENARIOLIB_EXP void SetEndOfRoadCondition(std::shared_ptr<IEndOfRoadConditionWriter> endOfRoadCondition) override;

            OPENSCENARIOLIB_EXP void SetCollisionCondition(std::shared_ptr<ICollisionConditionWriter> collisionCondition) override;

            OPENSCENARIOLIB_EXP void SetOffroadCondition(std::shared_ptr<IOffroadConditionWriter> offroadCondition) override;

            OPENSCENARIOLIB_EXP void SetTimeHeadwayCondition(std::shared_ptr<ITimeHeadwayConditionWriter> timeHeadwayCondition) override;

            OPENSCENARIOLIB_EXP void SetTimeToCollisionCondition(std::shared_ptr<ITimeToCollisionConditionWriter> timeToCollisionCondition) override;

            OPENSCENARIOLIB_EXP void SetAccelerationCondition(std::shared_ptr<IAccelerationConditionWriter> accelerationCondition) override;

            OPENSCENARIOLIB_EXP void SetStandStillCondition(std::shared_ptr<IStandStillConditionWriter> standStillCondition) override;

            OPENSCENARIOLIB_EXP void SetSpeedCondition(std::shared_ptr<ISpeedConditionWriter> speedCondition) override;

            OPENSCENARIOLIB_EXP void SetRelativeSpeedCondition(std::shared_ptr<IRelativeSpeedConditionWriter> relativeSpeedCondition) override;

            OPENSCENARIOLIB_EXP void SetTraveledDistanceCondition(std::shared_ptr<ITraveledDistanceConditionWriter> traveledDistanceCondition) override;

            OPENSCENARIOLIB_EXP void SetReachPositionCondition(std::shared_ptr<IReachPositionConditionWriter> reachPositionCondition) override;

            OPENSCENARIOLIB_EXP void SetDistanceCondition(std::shared_ptr<IDistanceConditionWriter> distanceCondition) override;

            OPENSCENARIOLIB_EXP void SetRelativeDistanceCondition(std::shared_ptr<IRelativeDistanceConditionWriter> relativeDistanceCondition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IEndOfRoadConditionWriter> GetWriterEndOfRoadCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICollisionConditionWriter> GetWriterCollisionCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOffroadConditionWriter> GetWriterOffroadCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeHeadwayConditionWriter> GetWriterTimeHeadwayCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeToCollisionConditionWriter> GetWriterTimeToCollisionCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAccelerationConditionWriter> GetWriterAccelerationCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStandStillConditionWriter> GetWriterStandStillCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedConditionWriter> GetWriterSpeedCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeSpeedConditionWriter> GetWriterRelativeSpeedCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITraveledDistanceConditionWriter> GetWriterTraveledDistanceCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IReachPositionConditionWriter> GetWriterReachPositionCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDistanceConditionWriter> GetWriterDistanceCondition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeDistanceConditionWriter> GetWriterRelativeDistanceCondition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEntityObject. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEntityObject)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityObjectImpl: public BaseImpl, public IEntityObjectWriter, public std::enable_shared_from_this<EntityObjectImpl> 
        {
        private:
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
            std::shared_ptr<IVehicleWriter> _vehicle {};
            std::shared_ptr<IPedestrianWriter> _pedestrian {};
            std::shared_ptr<IMiscObjectWriter> _miscObject {};
        public:

            OPENSCENARIOLIB_EXP EntityObjectImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicle> GetVehicle() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrian> GetPedestrian() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObject> GetMiscObject() const override;


            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void SetVehicle(std::shared_ptr<IVehicleWriter> vehicle) override;

            OPENSCENARIOLIB_EXP void SetPedestrian(std::shared_ptr<IPedestrianWriter> pedestrian) override;

            OPENSCENARIOLIB_EXP void SetMiscObject(std::shared_ptr<IMiscObjectWriter> miscObject) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleWriter> GetWriterVehicle() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrianWriter> GetWriterPedestrian() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObjectWriter> GetWriterMiscObject() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEntityRef. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEntityRef)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityRefImpl: public BaseImpl, public IEntityRefWriter, public std::enable_shared_from_this<EntityRefImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
        public:

            OPENSCENARIOLIB_EXP EntityRefImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEntitySelection. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEntitySelection)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntitySelectionImpl: public BaseImpl, public IEntitySelectionWriter, public std::enable_shared_from_this<EntitySelectionImpl> 
        {
        private:
            std::string _name {};
            std::shared_ptr<ISelectedEntitiesWriter> _members {};
        public:

            OPENSCENARIOLIB_EXP EntitySelectionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISelectedEntities> GetMembers() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetMembers(std::shared_ptr<ISelectedEntitiesWriter> members) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ISelectedEntitiesWriter> GetWriterMembers() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEnvironment. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEnvironment)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentImpl: public BaseImpl, public IEnvironmentWriter, public std::enable_shared_from_this<EnvironmentImpl> 
        {
        private:
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<ITimeOfDayWriter> _timeOfDay {};
            std::shared_ptr<IWeatherWriter> _weather {};
            std::shared_ptr<IRoadConditionWriter> _roadCondition {};
        public:

            OPENSCENARIOLIB_EXP EnvironmentImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeOfDay> GetTimeOfDay() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IWeather> GetWeather() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadCondition> GetRoadCondition() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetTimeOfDay(std::shared_ptr<ITimeOfDayWriter> timeOfDay) override;

            OPENSCENARIOLIB_EXP void SetWeather(std::shared_ptr<IWeatherWriter> weather) override;

            OPENSCENARIOLIB_EXP void SetRoadCondition(std::shared_ptr<IRoadConditionWriter> roadCondition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeOfDayWriter> GetWriterTimeOfDay() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IWeatherWriter> GetWriterWeather() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadConditionWriter> GetWriterRoadCondition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEnvironmentAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEnvironmentAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentActionImpl: public BaseImpl, public IEnvironmentActionWriter, public std::enable_shared_from_this<EnvironmentActionImpl> 
        {
        private:
            std::shared_ptr<IEnvironmentWriter> _environment {};
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
        public:

            OPENSCENARIOLIB_EXP EnvironmentActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironment> GetEnvironment() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;


            OPENSCENARIOLIB_EXP void SetEnvironment(std::shared_ptr<IEnvironmentWriter> environment) override;

            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentWriter> GetWriterEnvironment() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEnvironmentCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEnvironmentCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentCatalogLocationImpl: public BaseImpl, public IEnvironmentCatalogLocationWriter, public std::enable_shared_from_this<EnvironmentCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP EnvironmentCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IEvent. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IEvent)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EventImpl: public BaseImpl, public IEventWriter, public std::enable_shared_from_this<EventImpl> 
        {
        private:
            uint32_t _maximumExecutionCount {};
            std::string _name {};
            Priority _priority {};
            std::vector<std::shared_ptr<IActionWriter>> _actions {};
            std::shared_ptr<ITriggerWriter> _startTrigger {};
        public:

            OPENSCENARIOLIB_EXP EventImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP uint32_t GetMaximumExecutionCount() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP Priority GetPriority() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IAction>> GetActions() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IActionWriter>> GetWriterActions() const override;
            OPENSCENARIOLIB_EXP int GetActionsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAction> GetActionsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrigger> GetStartTrigger() const override;


            OPENSCENARIOLIB_EXP void SetMaximumExecutionCount(const uint32_t maximumExecutionCount) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetPriority(const Priority priority) override;

            OPENSCENARIOLIB_EXP void SetActions(std::vector<std::shared_ptr<IActionWriter>>& actions) override;

            OPENSCENARIOLIB_EXP void SetStartTrigger(std::shared_ptr<ITriggerWriter> startTrigger) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaximumExecutionCount(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPriority(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaximumExecutionCount() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPriority() const override;

            OPENSCENARIOLIB_EXP bool IsMaximumExecutionCountParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPriorityParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggerWriter> GetWriterStartTrigger() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IFile. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IFile)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileImpl: public BaseImpl, public IFileWriter, public std::enable_shared_from_this<FileImpl> 
        {
        private:
            std::string _filepath {};
        public:

            OPENSCENARIOLIB_EXP FileImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetFilepath() const override;


            OPENSCENARIOLIB_EXP void SetFilepath(const std::string filepath) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFilepath(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFilepath() const override;

            OPENSCENARIOLIB_EXP bool IsFilepathParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IFileHeader. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IFileHeader)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileHeaderImpl: public BaseImpl, public IFileHeaderWriter, public std::enable_shared_from_this<FileHeaderImpl> 
        {
        private:
            std::string _author {};
            DateTime _date {};
            std::string _description {};
            uint16_t _revMajor {};
            uint16_t _revMinor {};
        public:

            OPENSCENARIOLIB_EXP FileHeaderImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetAuthor() const override;
            OPENSCENARIOLIB_EXP DateTime GetDate() const override;
            OPENSCENARIOLIB_EXP std::string GetDescription() const override;
            OPENSCENARIOLIB_EXP uint16_t GetRevMajor() const override;
            OPENSCENARIOLIB_EXP uint16_t GetRevMinor() const override;


            OPENSCENARIOLIB_EXP void SetAuthor(const std::string author) override;

            OPENSCENARIOLIB_EXP void SetDate(const DateTime date) override;

            OPENSCENARIOLIB_EXP void SetDescription(const std::string description) override;

            OPENSCENARIOLIB_EXP void SetRevMajor(const uint16_t revMajor) override;

            OPENSCENARIOLIB_EXP void SetRevMinor(const uint16_t revMinor) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToAuthor(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDate(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDescription(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRevMajor(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRevMinor(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromAuthor() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDate() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDescription() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRevMajor() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRevMinor() const override;

            OPENSCENARIOLIB_EXP bool IsAuthorParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDateParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDescriptionParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRevMajorParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRevMinorParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IFinalSpeed. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IFinalSpeed)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FinalSpeedImpl: public BaseImpl, public IFinalSpeedWriter, public std::enable_shared_from_this<FinalSpeedImpl> 
        {
        private:
            std::shared_ptr<IAbsoluteSpeedWriter> _absoluteSpeed {};
            std::shared_ptr<IRelativeSpeedToMasterWriter> _relativeSpeedToMaster {};
        public:

            OPENSCENARIOLIB_EXP FinalSpeedImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteSpeed> GetAbsoluteSpeed() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeSpeedToMaster> GetRelativeSpeedToMaster() const override;


            OPENSCENARIOLIB_EXP void SetAbsoluteSpeed(std::shared_ptr<IAbsoluteSpeedWriter> absoluteSpeed) override;

            OPENSCENARIOLIB_EXP void SetRelativeSpeedToMaster(std::shared_ptr<IRelativeSpeedToMasterWriter> relativeSpeedToMaster) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteSpeedWriter> GetWriterAbsoluteSpeed() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeSpeedToMasterWriter> GetWriterRelativeSpeedToMaster() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IFog. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IFog)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FogImpl: public BaseImpl, public IFogWriter, public std::enable_shared_from_this<FogImpl> 
        {
        private:
            double _visualRange {};
            std::shared_ptr<IBoundingBoxWriter> _boundingBox {};
        public:

            OPENSCENARIOLIB_EXP FogImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetVisualRange() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBox> GetBoundingBox() const override;


            OPENSCENARIOLIB_EXP void SetVisualRange(const double visualRange) override;

            OPENSCENARIOLIB_EXP void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToVisualRange(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromVisualRange() const override;

            OPENSCENARIOLIB_EXP bool IsVisualRangeParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IFollowTrajectoryAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IFollowTrajectoryAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FollowTrajectoryActionImpl: public BaseImpl, public IFollowTrajectoryActionWriter, public std::enable_shared_from_this<FollowTrajectoryActionImpl> 
        {
        private:
            std::shared_ptr<ITrajectoryWriter> _trajectory {};
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
            std::shared_ptr<ITimeReferenceWriter> _timeReference {};
            std::shared_ptr<ITrajectoryFollowingModeWriter> _trajectoryFollowingMode {};
        public:

            OPENSCENARIOLIB_EXP FollowTrajectoryActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectory> GetTrajectory() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeReference> GetTimeReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryFollowingMode> GetTrajectoryFollowingMode() const override;


            OPENSCENARIOLIB_EXP void SetTrajectory(std::shared_ptr<ITrajectoryWriter> trajectory) override;

            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void SetTimeReference(std::shared_ptr<ITimeReferenceWriter> timeReference) override;

            OPENSCENARIOLIB_EXP void SetTrajectoryFollowingMode(std::shared_ptr<ITrajectoryFollowingModeWriter> trajectoryFollowingMode) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryWriter> GetWriterTrajectory() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeReferenceWriter> GetWriterTimeReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryFollowingModeWriter> GetWriterTrajectoryFollowingMode() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IGlobalAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IGlobalAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GlobalActionImpl: public BaseImpl, public IGlobalActionWriter, public std::enable_shared_from_this<GlobalActionImpl> 
        {
        private:
            std::shared_ptr<IEnvironmentActionWriter> _environmentAction {};
            std::shared_ptr<IEntityActionWriter> _entityAction {};
            std::shared_ptr<IParameterActionWriter> _parameterAction {};
            std::shared_ptr<IInfrastructureActionWriter> _infrastructureAction {};
            std::shared_ptr<ITrafficActionWriter> _trafficAction {};
        public:

            OPENSCENARIOLIB_EXP GlobalActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentAction> GetEnvironmentAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityAction> GetEntityAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterAction> GetParameterAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IInfrastructureAction> GetInfrastructureAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficAction> GetTrafficAction() const override;


            OPENSCENARIOLIB_EXP void SetEnvironmentAction(std::shared_ptr<IEnvironmentActionWriter> environmentAction) override;

            OPENSCENARIOLIB_EXP void SetEntityAction(std::shared_ptr<IEntityActionWriter> entityAction) override;

            OPENSCENARIOLIB_EXP void SetParameterAction(std::shared_ptr<IParameterActionWriter> parameterAction) override;

            OPENSCENARIOLIB_EXP void SetInfrastructureAction(std::shared_ptr<IInfrastructureActionWriter> infrastructureAction) override;

            OPENSCENARIOLIB_EXP void SetTrafficAction(std::shared_ptr<ITrafficActionWriter> trafficAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentActionWriter> GetWriterEnvironmentAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityActionWriter> GetWriterEntityAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterActionWriter> GetWriterParameterAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IInfrastructureActionWriter> GetWriterInfrastructureAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficActionWriter> GetWriterTrafficAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IInRoutePosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IInRoutePosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InRoutePositionImpl: public BaseImpl, public IInRoutePositionWriter, public std::enable_shared_from_this<InRoutePositionImpl> 
        {
        private:
            std::shared_ptr<IPositionOfCurrentEntityWriter> _fromCurrentEntity {};
            std::shared_ptr<IPositionInRoadCoordinatesWriter> _fromRoadCoordinates {};
            std::shared_ptr<IPositionInLaneCoordinatesWriter> _fromLaneCoordinates {};
        public:

            OPENSCENARIOLIB_EXP InRoutePositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionOfCurrentEntity> GetFromCurrentEntity() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionInRoadCoordinates> GetFromRoadCoordinates() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionInLaneCoordinates> GetFromLaneCoordinates() const override;


            OPENSCENARIOLIB_EXP void SetFromCurrentEntity(std::shared_ptr<IPositionOfCurrentEntityWriter> fromCurrentEntity) override;

            OPENSCENARIOLIB_EXP void SetFromRoadCoordinates(std::shared_ptr<IPositionInRoadCoordinatesWriter> fromRoadCoordinates) override;

            OPENSCENARIOLIB_EXP void SetFromLaneCoordinates(std::shared_ptr<IPositionInLaneCoordinatesWriter> fromLaneCoordinates) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionOfCurrentEntityWriter> GetWriterFromCurrentEntity() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionInRoadCoordinatesWriter> GetWriterFromRoadCoordinates() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionInLaneCoordinatesWriter> GetWriterFromLaneCoordinates() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IInfrastructureAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IInfrastructureAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InfrastructureActionImpl: public BaseImpl, public IInfrastructureActionWriter, public std::enable_shared_from_this<InfrastructureActionImpl> 
        {
        private:
            std::shared_ptr<ITrafficSignalActionWriter> _trafficSignalAction {};
        public:

            OPENSCENARIOLIB_EXP InfrastructureActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalAction> GetTrafficSignalAction() const override;


            OPENSCENARIOLIB_EXP void SetTrafficSignalAction(std::shared_ptr<ITrafficSignalActionWriter> trafficSignalAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalActionWriter> GetWriterTrafficSignalAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IInit. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IInit)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InitImpl: public BaseImpl, public IInitWriter, public std::enable_shared_from_this<InitImpl> 
        {
        private:
            std::shared_ptr<IInitActionsWriter> _actions {};
        public:

            OPENSCENARIOLIB_EXP InitImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IInitActions> GetActions() const override;


            OPENSCENARIOLIB_EXP void SetActions(std::shared_ptr<IInitActionsWriter> actions) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IInitActionsWriter> GetWriterActions() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IInitActions. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IInitActions)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InitActionsImpl: public BaseImpl, public IInitActionsWriter, public std::enable_shared_from_this<InitActionsImpl> 
        {
        private:
            std::vector<std::shared_ptr<IGlobalActionWriter>> _globalActions {};
            std::vector<std::shared_ptr<IUserDefinedActionWriter>> _userDefinedActions {};
            std::vector<std::shared_ptr<IPrivateWriter>> _privates {};
        public:

            OPENSCENARIOLIB_EXP InitActionsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IGlobalAction>> GetGlobalActions() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IGlobalActionWriter>> GetWriterGlobalActions() const override;
            OPENSCENARIOLIB_EXP int GetGlobalActionsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IGlobalAction> GetGlobalActionsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IUserDefinedAction>> GetUserDefinedActions() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IUserDefinedActionWriter>> GetWriterUserDefinedActions() const override;
            OPENSCENARIOLIB_EXP int GetUserDefinedActionsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedAction> GetUserDefinedActionsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPrivate>> GetPrivates() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPrivateWriter>> GetWriterPrivates() const override;
            OPENSCENARIOLIB_EXP int GetPrivatesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPrivate> GetPrivatesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetGlobalActions(std::vector<std::shared_ptr<IGlobalActionWriter>>& globalActions) override;

            OPENSCENARIOLIB_EXP void SetUserDefinedActions(std::vector<std::shared_ptr<IUserDefinedActionWriter>>& userDefinedActions) override;

            OPENSCENARIOLIB_EXP void SetPrivates(std::vector<std::shared_ptr<IPrivateWriter>>& privates) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IKnot. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IKnot)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class KnotImpl: public BaseImpl, public IKnotWriter, public std::enable_shared_from_this<KnotImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP KnotImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILaneChangeAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILaneChangeAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeActionImpl: public BaseImpl, public ILaneChangeActionWriter, public std::enable_shared_from_this<LaneChangeActionImpl> 
        {
        private:
            double _targetLaneOffset {};
            std::shared_ptr<ITransitionDynamicsWriter> _laneChangeActionDynamics {};
            std::shared_ptr<ILaneChangeTargetWriter> _laneChangeTarget {};
        public:

            OPENSCENARIOLIB_EXP LaneChangeActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetTargetLaneOffset() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITransitionDynamics> GetLaneChangeActionDynamics() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneChangeTarget> GetLaneChangeTarget() const override;


            OPENSCENARIOLIB_EXP void SetTargetLaneOffset(const double targetLaneOffset) override;

            OPENSCENARIOLIB_EXP void SetLaneChangeActionDynamics(std::shared_ptr<ITransitionDynamicsWriter> laneChangeActionDynamics) override;

            OPENSCENARIOLIB_EXP void SetLaneChangeTarget(std::shared_ptr<ILaneChangeTargetWriter> laneChangeTarget) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTargetLaneOffset(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTargetLaneOffset() const override;

            OPENSCENARIOLIB_EXP bool IsTargetLaneOffsetParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITransitionDynamicsWriter> GetWriterLaneChangeActionDynamics() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneChangeTargetWriter> GetWriterLaneChangeTarget() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILaneChangeTarget. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILaneChangeTarget)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeTargetImpl: public BaseImpl, public ILaneChangeTargetWriter, public std::enable_shared_from_this<LaneChangeTargetImpl> 
        {
        private:
            std::shared_ptr<IRelativeTargetLaneWriter> _relativeTargetLane {};
            std::shared_ptr<IAbsoluteTargetLaneWriter> _absoluteTargetLane {};
        public:

            OPENSCENARIOLIB_EXP LaneChangeTargetImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetLane> GetRelativeTargetLane() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetLane> GetAbsoluteTargetLane() const override;


            OPENSCENARIOLIB_EXP void SetRelativeTargetLane(std::shared_ptr<IRelativeTargetLaneWriter> relativeTargetLane) override;

            OPENSCENARIOLIB_EXP void SetAbsoluteTargetLane(std::shared_ptr<IAbsoluteTargetLaneWriter> absoluteTargetLane) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetLaneWriter> GetWriterRelativeTargetLane() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetLaneWriter> GetWriterAbsoluteTargetLane() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILaneOffsetAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILaneOffsetAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionImpl: public BaseImpl, public ILaneOffsetActionWriter, public std::enable_shared_from_this<LaneOffsetActionImpl> 
        {
        private:
            bool _continuous {};
            std::shared_ptr<ILaneOffsetActionDynamicsWriter> _laneOffsetActionDynamics {};
            std::shared_ptr<ILaneOffsetTargetWriter> _laneOffsetTarget {};
        public:

            OPENSCENARIOLIB_EXP LaneOffsetActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetContinuous() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetActionDynamics> GetLaneOffsetActionDynamics() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetTarget> GetLaneOffsetTarget() const override;


            OPENSCENARIOLIB_EXP void SetContinuous(const bool continuous) override;

            OPENSCENARIOLIB_EXP void SetLaneOffsetActionDynamics(std::shared_ptr<ILaneOffsetActionDynamicsWriter> laneOffsetActionDynamics) override;

            OPENSCENARIOLIB_EXP void SetLaneOffsetTarget(std::shared_ptr<ILaneOffsetTargetWriter> laneOffsetTarget) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToContinuous(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromContinuous() const override;

            OPENSCENARIOLIB_EXP bool IsContinuousParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetActionDynamicsWriter> GetWriterLaneOffsetActionDynamics() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetTargetWriter> GetWriterLaneOffsetTarget() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILaneOffsetActionDynamics. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILaneOffsetActionDynamics)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionDynamicsImpl: public BaseImpl, public ILaneOffsetActionDynamicsWriter, public std::enable_shared_from_this<LaneOffsetActionDynamicsImpl> 
        {
        private:
            DynamicsShape _dynamicsShape {};
            double _maxLateralAcc {};
        public:

            OPENSCENARIOLIB_EXP LaneOffsetActionDynamicsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP DynamicsShape GetDynamicsShape() const override;
            OPENSCENARIOLIB_EXP double GetMaxLateralAcc() const override;


            OPENSCENARIOLIB_EXP void SetDynamicsShape(const DynamicsShape dynamicsShape) override;

            OPENSCENARIOLIB_EXP void SetMaxLateralAcc(const double maxLateralAcc) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDynamicsShape(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxLateralAcc(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDynamicsShape() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxLateralAcc() const override;

            OPENSCENARIOLIB_EXP bool IsDynamicsShapeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsMaxLateralAccParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILaneOffsetTarget. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILaneOffsetTarget)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetTargetImpl: public BaseImpl, public ILaneOffsetTargetWriter, public std::enable_shared_from_this<LaneOffsetTargetImpl> 
        {
        private:
            std::shared_ptr<IRelativeTargetLaneOffsetWriter> _relativeTargetLaneOffset {};
            std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> _absoluteTargetLaneOffset {};
        public:

            OPENSCENARIOLIB_EXP LaneOffsetTargetImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetLaneOffset> GetRelativeTargetLaneOffset() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetLaneOffset> GetAbsoluteTargetLaneOffset() const override;


            OPENSCENARIOLIB_EXP void SetRelativeTargetLaneOffset(std::shared_ptr<IRelativeTargetLaneOffsetWriter> relativeTargetLaneOffset) override;

            OPENSCENARIOLIB_EXP void SetAbsoluteTargetLaneOffset(std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> absoluteTargetLaneOffset) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetLaneOffsetWriter> GetWriterRelativeTargetLaneOffset() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> GetWriterAbsoluteTargetLaneOffset() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILanePosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILanePosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LanePositionImpl: public BaseImpl, public ILanePositionWriter, public std::enable_shared_from_this<LanePositionImpl> 
        {
        private:
            std::string _laneId {};
            double _offset {};
            std::string _roadId {};
            double _s {};
            std::shared_ptr<IOrientationWriter> _orientation {};
        public:

            OPENSCENARIOLIB_EXP LanePositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetLaneId() const override;
            OPENSCENARIOLIB_EXP double GetOffset() const override;
            OPENSCENARIOLIB_EXP std::string GetRoadId() const override;
            OPENSCENARIOLIB_EXP double GetS() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;


            OPENSCENARIOLIB_EXP void SetLaneId(const std::string laneId) override;

            OPENSCENARIOLIB_EXP void SetOffset(const double offset) override;

            OPENSCENARIOLIB_EXP void SetRoadId(const std::string roadId) override;

            OPENSCENARIOLIB_EXP void SetS(const double s) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLaneId(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToOffset(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRoadId(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToS(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLaneId() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromOffset() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRoadId() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromS() const override;

            OPENSCENARIOLIB_EXP bool IsLaneIdParameterized() override;

            OPENSCENARIOLIB_EXP bool IsOffsetParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRoadIdParameterized() override;

            OPENSCENARIOLIB_EXP bool IsSParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILateralAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILateralAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralActionImpl: public BaseImpl, public ILateralActionWriter, public std::enable_shared_from_this<LateralActionImpl> 
        {
        private:
            std::shared_ptr<ILaneChangeActionWriter> _laneChangeAction {};
            std::shared_ptr<ILaneOffsetActionWriter> _laneOffsetAction {};
            std::shared_ptr<ILateralDistanceActionWriter> _lateralDistanceAction {};
        public:

            OPENSCENARIOLIB_EXP LateralActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneChangeAction> GetLaneChangeAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetAction> GetLaneOffsetAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILateralDistanceAction> GetLateralDistanceAction() const override;


            OPENSCENARIOLIB_EXP void SetLaneChangeAction(std::shared_ptr<ILaneChangeActionWriter> laneChangeAction) override;

            OPENSCENARIOLIB_EXP void SetLaneOffsetAction(std::shared_ptr<ILaneOffsetActionWriter> laneOffsetAction) override;

            OPENSCENARIOLIB_EXP void SetLateralDistanceAction(std::shared_ptr<ILateralDistanceActionWriter> lateralDistanceAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneChangeActionWriter> GetWriterLaneChangeAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetActionWriter> GetWriterLaneOffsetAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILateralDistanceActionWriter> GetWriterLateralDistanceAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILateralDistanceAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILateralDistanceAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDistanceActionImpl: public BaseImpl, public ILateralDistanceActionWriter, public std::enable_shared_from_this<LateralDistanceActionImpl> 
        {
        private:
            bool _continuous {};
            double _distance {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            bool _freespace {};
            std::shared_ptr<IDynamicConstraintsWriter> _dynamicConstraints {};
        public:

            OPENSCENARIOLIB_EXP LateralDistanceActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetContinuous() const override;
            OPENSCENARIOLIB_EXP double GetDistance() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP bool GetFreespace() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() const override;


            OPENSCENARIOLIB_EXP void SetContinuous(const bool continuous) override;

            OPENSCENARIOLIB_EXP void SetDistance(const double distance) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetFreespace(const bool freespace) override;

            OPENSCENARIOLIB_EXP void SetDynamicConstraints(std::shared_ptr<IDynamicConstraintsWriter> dynamicConstraints) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToContinuous(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDistance(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFreespace(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromContinuous() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDistance() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFreespace() const override;

            OPENSCENARIOLIB_EXP bool IsContinuousParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDistanceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsFreespaceParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDynamicConstraintsWriter> GetWriterDynamicConstraints() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILongitudinalAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILongitudinalAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalActionImpl: public BaseImpl, public ILongitudinalActionWriter, public std::enable_shared_from_this<LongitudinalActionImpl> 
        {
        private:
            std::shared_ptr<ISpeedActionWriter> _speedAction {};
            std::shared_ptr<ILongitudinalDistanceActionWriter> _longitudinalDistanceAction {};
        public:

            OPENSCENARIOLIB_EXP LongitudinalActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedAction> GetSpeedAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILongitudinalDistanceAction> GetLongitudinalDistanceAction() const override;


            OPENSCENARIOLIB_EXP void SetSpeedAction(std::shared_ptr<ISpeedActionWriter> speedAction) override;

            OPENSCENARIOLIB_EXP void SetLongitudinalDistanceAction(std::shared_ptr<ILongitudinalDistanceActionWriter> longitudinalDistanceAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedActionWriter> GetWriterSpeedAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILongitudinalDistanceActionWriter> GetWriterLongitudinalDistanceAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ILongitudinalDistanceAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ILongitudinalDistanceAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDistanceActionImpl: public BaseImpl, public ILongitudinalDistanceActionWriter, public std::enable_shared_from_this<LongitudinalDistanceActionImpl> 
        {
        private:
            bool _continuous {};
            double _distance {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            bool _freespace {};
            double _timeGap {};
            std::shared_ptr<IDynamicConstraintsWriter> _dynamicConstraints {};
        public:

            OPENSCENARIOLIB_EXP LongitudinalDistanceActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetContinuous() const override;
            OPENSCENARIOLIB_EXP double GetDistance() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP bool GetFreespace() const override;
            OPENSCENARIOLIB_EXP double GetTimeGap() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() const override;


            OPENSCENARIOLIB_EXP void SetContinuous(const bool continuous) override;

            OPENSCENARIOLIB_EXP void SetDistance(const double distance) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetFreespace(const bool freespace) override;

            OPENSCENARIOLIB_EXP void SetTimeGap(const double timeGap) override;

            OPENSCENARIOLIB_EXP void SetDynamicConstraints(std::shared_ptr<IDynamicConstraintsWriter> dynamicConstraints) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToContinuous(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDistance(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFreespace(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTimeGap(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromContinuous() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDistance() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFreespace() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTimeGap() const override;

            OPENSCENARIOLIB_EXP bool IsContinuousParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDistanceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsFreespaceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTimeGapParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDynamicConstraintsWriter> GetWriterDynamicConstraints() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IManeuver. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IManeuver)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverImpl: public BaseImpl, public IManeuverWriter, public std::enable_shared_from_this<ManeuverImpl> 
        {
        private:
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::vector<std::shared_ptr<IEventWriter>> _events {};
        public:

            OPENSCENARIOLIB_EXP ManeuverImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEvent>> GetEvents() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEventWriter>> GetWriterEvents() const override;
            OPENSCENARIOLIB_EXP int GetEventsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEvent> GetEventsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetEvents(std::vector<std::shared_ptr<IEventWriter>>& events) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IManeuverCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IManeuverCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverCatalogLocationImpl: public BaseImpl, public IManeuverCatalogLocationWriter, public std::enable_shared_from_this<ManeuverCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP ManeuverCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IManeuverGroup. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IManeuverGroup)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverGroupImpl: public BaseImpl, public IManeuverGroupWriter, public std::enable_shared_from_this<ManeuverGroupImpl> 
        {
        private:
            uint32_t _maximumExecutionCount {};
            std::string _name {};
            std::shared_ptr<IActorsWriter> _actors {};
            std::vector<std::shared_ptr<ICatalogReferenceWriter>> _catalogReferences {};
            std::vector<std::shared_ptr<IManeuverWriter>> _maneuvers {};
        public:

            OPENSCENARIOLIB_EXP ManeuverGroupImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP uint32_t GetMaximumExecutionCount() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IActors> GetActors() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ICatalogReferenceWriter>> GetWriterCatalogReferences() const override;
            OPENSCENARIOLIB_EXP int GetCatalogReferencesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReferencesAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IManeuver>> GetManeuvers() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IManeuverWriter>> GetWriterManeuvers() const override;
            OPENSCENARIOLIB_EXP int GetManeuversSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuver> GetManeuversAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetMaximumExecutionCount(const uint32_t maximumExecutionCount) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetActors(std::shared_ptr<IActorsWriter> actors) override;

            OPENSCENARIOLIB_EXP void SetCatalogReferences(std::vector<std::shared_ptr<ICatalogReferenceWriter>>& catalogReferences) override;

            OPENSCENARIOLIB_EXP void SetManeuvers(std::vector<std::shared_ptr<IManeuverWriter>>& maneuvers) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaximumExecutionCount(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaximumExecutionCount() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsMaximumExecutionCountParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IActorsWriter> GetWriterActors() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IMiscObject. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IMiscObject)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectImpl: public BaseImpl, public IMiscObjectWriter, public std::enable_shared_from_this<MiscObjectImpl> 
        {
        private:
            double _mass {};
            MiscObjectCategory _miscObjectCategory {};
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<IBoundingBoxWriter> _boundingBox {};
            std::shared_ptr<IPropertiesWriter> _properties {};
        public:

            OPENSCENARIOLIB_EXP MiscObjectImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetMass() const override;
            OPENSCENARIOLIB_EXP MiscObjectCategory GetMiscObjectCategory() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBox> GetBoundingBox() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IProperties> GetProperties() const override;


            OPENSCENARIOLIB_EXP void SetMass(const double mass) override;

            OPENSCENARIOLIB_EXP void SetMiscObjectCategory(const MiscObjectCategory miscObjectCategory) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox) override;

            OPENSCENARIOLIB_EXP void SetProperties(std::shared_ptr<IPropertiesWriter> properties) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMass(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMiscObjectCategory(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMass() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMiscObjectCategory() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsMassParameterized() override;

            OPENSCENARIOLIB_EXP bool IsMiscObjectCategoryParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertiesWriter> GetWriterProperties() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IMiscObjectCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IMiscObjectCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCatalogLocationImpl: public BaseImpl, public IMiscObjectCatalogLocationWriter, public std::enable_shared_from_this<MiscObjectCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP MiscObjectCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IModifyRule. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IModifyRule)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ModifyRuleImpl: public BaseImpl, public IModifyRuleWriter, public std::enable_shared_from_this<ModifyRuleImpl> 
        {
        private:
            std::shared_ptr<IParameterAddValueRuleWriter> _addValue {};
            std::shared_ptr<IParameterMultiplyByValueRuleWriter> _multiplyByValue {};
        public:

            OPENSCENARIOLIB_EXP ModifyRuleImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterAddValueRule> GetAddValue() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterMultiplyByValueRule> GetMultiplyByValue() const override;


            OPENSCENARIOLIB_EXP void SetAddValue(std::shared_ptr<IParameterAddValueRuleWriter> addValue) override;

            OPENSCENARIOLIB_EXP void SetMultiplyByValue(std::shared_ptr<IParameterMultiplyByValueRuleWriter> multiplyByValue) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterAddValueRuleWriter> GetWriterAddValue() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterMultiplyByValueRuleWriter> GetWriterMultiplyByValue() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements INone. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of INone)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NoneImpl: public BaseImpl, public INoneWriter, public std::enable_shared_from_this<NoneImpl> 
        {
        private:
        public:

            OPENSCENARIOLIB_EXP NoneImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;



            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements INurbs. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of INurbs)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NurbsImpl: public BaseImpl, public INurbsWriter, public std::enable_shared_from_this<NurbsImpl> 
        {
        private:
            uint32_t _order {};
            std::vector<std::shared_ptr<IControlPointWriter>> _controlPoints {};
            std::vector<std::shared_ptr<IKnotWriter>> _knots {};
        public:

            OPENSCENARIOLIB_EXP NurbsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP uint32_t GetOrder() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IControlPoint>> GetControlPoints() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IControlPointWriter>> GetWriterControlPoints() const override;
            OPENSCENARIOLIB_EXP int GetControlPointsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControlPoint> GetControlPointsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IKnot>> GetKnots() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IKnotWriter>> GetWriterKnots() const override;
            OPENSCENARIOLIB_EXP int GetKnotsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IKnot> GetKnotsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetOrder(const uint32_t order) override;

            OPENSCENARIOLIB_EXP void SetControlPoints(std::vector<std::shared_ptr<IControlPointWriter>>& controlPoints) override;

            OPENSCENARIOLIB_EXP void SetKnots(std::vector<std::shared_ptr<IKnotWriter>>& knots) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToOrder(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromOrder() const override;

            OPENSCENARIOLIB_EXP bool IsOrderParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IObjectController. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IObjectController)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ObjectControllerImpl: public BaseImpl, public IObjectControllerWriter, public std::enable_shared_from_this<ObjectControllerImpl> 
        {
        private:
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
            std::shared_ptr<IControllerWriter> _controller {};
        public:

            OPENSCENARIOLIB_EXP ObjectControllerImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IController> GetController() const override;


            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void SetController(std::shared_ptr<IControllerWriter> controller) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerWriter> GetWriterController() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOffroadCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOffroadCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OffroadConditionImpl: public BaseImpl, public IOffroadConditionWriter, public std::enable_shared_from_this<OffroadConditionImpl> 
        {
        private:
            double _duration {};
        public:

            OPENSCENARIOLIB_EXP OffroadConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDuration() const override;


            OPENSCENARIOLIB_EXP void SetDuration(const double duration) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDuration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDuration() const override;

            OPENSCENARIOLIB_EXP bool IsDurationParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOpenScenario. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOpenScenario)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioImpl: public BaseImpl, public IOpenScenarioWriter, public std::enable_shared_from_this<OpenScenarioImpl> 
        {
        private:
            std::shared_ptr<IFileHeaderWriter> _fileHeader {};
            std::shared_ptr<IOpenScenarioCategoryWriter> _openScenarioCategory {};
        public:

            OPENSCENARIOLIB_EXP OpenScenarioImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFileHeader> GetFileHeader() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioCategory> GetOpenScenarioCategory() const override;


            OPENSCENARIOLIB_EXP void SetFileHeader(std::shared_ptr<IFileHeaderWriter> fileHeader) override;

            OPENSCENARIOLIB_EXP void SetOpenScenarioCategory(std::shared_ptr<IOpenScenarioCategoryWriter> openScenarioCategory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IFileHeaderWriter> GetWriterFileHeader() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioCategoryWriter> GetWriterOpenScenarioCategory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOpenScenarioCategory. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOpenScenarioCategory)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCategoryImpl: public BaseImpl, public IOpenScenarioCategoryWriter, public std::enable_shared_from_this<OpenScenarioCategoryImpl> 
        {
        private:
            std::shared_ptr<IScenarioDefinitionWriter> _scenarioDefinition {};
            std::shared_ptr<ICatalogDefinitionWriter> _catalogDefinition {};
        public:

            OPENSCENARIOLIB_EXP OpenScenarioCategoryImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IScenarioDefinition> GetScenarioDefinition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogDefinition> GetCatalogDefinition() const override;


            OPENSCENARIOLIB_EXP void SetScenarioDefinition(std::shared_ptr<IScenarioDefinitionWriter> scenarioDefinition) override;

            OPENSCENARIOLIB_EXP void SetCatalogDefinition(std::shared_ptr<ICatalogDefinitionWriter> catalogDefinition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IScenarioDefinitionWriter> GetWriterScenarioDefinition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogDefinitionWriter> GetWriterCatalogDefinition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOrientation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOrientation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OrientationImpl: public BaseImpl, public IOrientationWriter, public std::enable_shared_from_this<OrientationImpl> 
        {
        private:
            double _h {};
            double _p {};
            double _r {};
            ReferenceContext _type {};
        public:

            OPENSCENARIOLIB_EXP OrientationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetH() const override;
            OPENSCENARIOLIB_EXP double GetP() const override;
            OPENSCENARIOLIB_EXP double GetR() const override;
            OPENSCENARIOLIB_EXP ReferenceContext GetType() const override;


            OPENSCENARIOLIB_EXP void SetH(const double h) override;

            OPENSCENARIOLIB_EXP void SetP(const double p) override;

            OPENSCENARIOLIB_EXP void SetR(const double r) override;

            OPENSCENARIOLIB_EXP void SetType(const ReferenceContext type) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToH(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToP(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToR(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromH() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromP() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromR() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromType() const override;

            OPENSCENARIOLIB_EXP bool IsHParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTypeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideBrakeAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideBrakeAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideBrakeActionImpl: public BaseImpl, public IOverrideBrakeActionWriter, public std::enable_shared_from_this<OverrideBrakeActionImpl> 
        {
        private:
            bool _active {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP OverrideBrakeActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetActive() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetActive(const bool active) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToActive(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromActive() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsActiveParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideClutchAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideClutchAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideClutchActionImpl: public BaseImpl, public IOverrideClutchActionWriter, public std::enable_shared_from_this<OverrideClutchActionImpl> 
        {
        private:
            bool _active {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP OverrideClutchActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetActive() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetActive(const bool active) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToActive(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromActive() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsActiveParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideControllerValueAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideControllerValueAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideControllerValueActionImpl: public BaseImpl, public IOverrideControllerValueActionWriter, public std::enable_shared_from_this<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<IOverrideThrottleActionWriter> _throttle {};
            std::shared_ptr<IOverrideBrakeActionWriter> _brake {};
            std::shared_ptr<IOverrideClutchActionWriter> _clutch {};
            std::shared_ptr<IOverrideParkingBrakeActionWriter> _parkingBrake {};
            std::shared_ptr<IOverrideSteeringWheelActionWriter> _steeringWheel {};
            std::shared_ptr<IOverrideGearActionWriter> _gear {};
        public:

            OPENSCENARIOLIB_EXP OverrideControllerValueActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideThrottleAction> GetThrottle() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideBrakeAction> GetBrake() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideClutchAction> GetClutch() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideParkingBrakeAction> GetParkingBrake() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideSteeringWheelAction> GetSteeringWheel() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideGearAction> GetGear() const override;


            OPENSCENARIOLIB_EXP void SetThrottle(std::shared_ptr<IOverrideThrottleActionWriter> throttle) override;

            OPENSCENARIOLIB_EXP void SetBrake(std::shared_ptr<IOverrideBrakeActionWriter> brake) override;

            OPENSCENARIOLIB_EXP void SetClutch(std::shared_ptr<IOverrideClutchActionWriter> clutch) override;

            OPENSCENARIOLIB_EXP void SetParkingBrake(std::shared_ptr<IOverrideParkingBrakeActionWriter> parkingBrake) override;

            OPENSCENARIOLIB_EXP void SetSteeringWheel(std::shared_ptr<IOverrideSteeringWheelActionWriter> steeringWheel) override;

            OPENSCENARIOLIB_EXP void SetGear(std::shared_ptr<IOverrideGearActionWriter> gear) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideThrottleActionWriter> GetWriterThrottle() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideBrakeActionWriter> GetWriterBrake() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideClutchActionWriter> GetWriterClutch() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideParkingBrakeActionWriter> GetWriterParkingBrake() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideSteeringWheelActionWriter> GetWriterSteeringWheel() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideGearActionWriter> GetWriterGear() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideGearAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideGearAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideGearActionImpl: public BaseImpl, public IOverrideGearActionWriter, public std::enable_shared_from_this<OverrideGearActionImpl> 
        {
        private:
            bool _active {};
            double _number {};
        public:

            OPENSCENARIOLIB_EXP OverrideGearActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetActive() const override;
            OPENSCENARIOLIB_EXP double GetNumber() const override;


            OPENSCENARIOLIB_EXP void SetActive(const bool active) override;

            OPENSCENARIOLIB_EXP void SetNumber(const double number) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToActive(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToNumber(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromActive() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromNumber() const override;

            OPENSCENARIOLIB_EXP bool IsActiveParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNumberParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideParkingBrakeAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideParkingBrakeAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideParkingBrakeActionImpl: public BaseImpl, public IOverrideParkingBrakeActionWriter, public std::enable_shared_from_this<OverrideParkingBrakeActionImpl> 
        {
        private:
            bool _active {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP OverrideParkingBrakeActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetActive() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetActive(const bool active) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToActive(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromActive() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsActiveParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideSteeringWheelAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideSteeringWheelAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideSteeringWheelActionImpl: public BaseImpl, public IOverrideSteeringWheelActionWriter, public std::enable_shared_from_this<OverrideSteeringWheelActionImpl> 
        {
        private:
            bool _active {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP OverrideSteeringWheelActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetActive() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetActive(const bool active) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToActive(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromActive() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsActiveParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IOverrideThrottleAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IOverrideThrottleAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideThrottleActionImpl: public BaseImpl, public IOverrideThrottleActionWriter, public std::enable_shared_from_this<OverrideThrottleActionImpl> 
        {
        private:
            bool _active {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP OverrideThrottleActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetActive() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetActive(const bool active) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToActive(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromActive() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsActiveParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterActionImpl: public BaseImpl, public IParameterActionWriter, public std::enable_shared_from_this<ParameterActionImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IParameterDeclaration>> _parameterRef {};
            std::shared_ptr<IParameterSetActionWriter> _setAction {};
            std::shared_ptr<IParameterModifyActionWriter> _modifyAction {};
        public:

            OPENSCENARIOLIB_EXP ParameterActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterSetAction> GetSetAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterModifyAction> GetModifyAction() const override;


            OPENSCENARIOLIB_EXP void SetParameterRef(std::shared_ptr<INamedReference<IParameterDeclaration>> parameterRef) override;

            OPENSCENARIOLIB_EXP void SetSetAction(std::shared_ptr<IParameterSetActionWriter> setAction) override;

            OPENSCENARIOLIB_EXP void SetModifyAction(std::shared_ptr<IParameterModifyActionWriter> modifyAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToParameterRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromParameterRef() const override;

            OPENSCENARIOLIB_EXP bool IsParameterRefParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterSetActionWriter> GetWriterSetAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterModifyActionWriter> GetWriterModifyAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterAddValueRule. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterAddValueRule)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAddValueRuleImpl: public BaseImpl, public IParameterAddValueRuleWriter, public std::enable_shared_from_this<ParameterAddValueRuleImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP ParameterAddValueRuleImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterAssignment. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterAssignment)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAssignmentImpl: public BaseImpl, public IParameterAssignmentWriter, public std::enable_shared_from_this<ParameterAssignmentImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IParameterDeclaration>> _parameterRef {};
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP ParameterAssignmentImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() const override;
            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetParameterRef(std::shared_ptr<INamedReference<IParameterDeclaration>> parameterRef) override;

            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterConditionImpl: public BaseImpl, public IParameterConditionWriter, public std::enable_shared_from_this<ParameterConditionImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IParameterDeclaration>> _parameterRef {};
            Rule _rule {};
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP ParameterConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetParameterRef(std::shared_ptr<INamedReference<IParameterDeclaration>> parameterRef) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToParameterRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromParameterRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsParameterRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterDeclaration. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterDeclaration)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterDeclarationImpl: public BaseImpl, public IParameterDeclarationWriter, public std::enable_shared_from_this<ParameterDeclarationImpl> 
        {
        private:
            std::string _name {};
            ParameterType _parameterType {};
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP ParameterDeclarationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP ParameterType GetParameterType() const override;
            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterType(const ParameterType parameterType) override;

            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToParameterType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromParameterType() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsParameterTypeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterModifyAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterModifyAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterModifyActionImpl: public BaseImpl, public IParameterModifyActionWriter, public std::enable_shared_from_this<ParameterModifyActionImpl> 
        {
        private:
            std::shared_ptr<IModifyRuleWriter> _rule {};
        public:

            OPENSCENARIOLIB_EXP ParameterModifyActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IModifyRule> GetRule() const override;


            OPENSCENARIOLIB_EXP void SetRule(std::shared_ptr<IModifyRuleWriter> rule) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IModifyRuleWriter> GetWriterRule() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterMultiplyByValueRule. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterMultiplyByValueRule)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterMultiplyByValueRuleImpl: public BaseImpl, public IParameterMultiplyByValueRuleWriter, public std::enable_shared_from_this<ParameterMultiplyByValueRuleImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP ParameterMultiplyByValueRuleImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IParameterSetAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IParameterSetAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterSetActionImpl: public BaseImpl, public IParameterSetActionWriter, public std::enable_shared_from_this<ParameterSetActionImpl> 
        {
        private:
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP ParameterSetActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPedestrian. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPedestrian)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianImpl: public BaseImpl, public IPedestrianWriter, public std::enable_shared_from_this<PedestrianImpl> 
        {
        private:
            double _mass {};
            std::string _model {};
            std::string _name {};
            PedestrianCategory _pedestrianCategory {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<IBoundingBoxWriter> _boundingBox {};
            std::shared_ptr<IPropertiesWriter> _properties {};
        public:

            OPENSCENARIOLIB_EXP PedestrianImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetMass() const override;
            OPENSCENARIOLIB_EXP std::string GetModel() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP PedestrianCategory GetPedestrianCategory() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBox> GetBoundingBox() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IProperties> GetProperties() const override;


            OPENSCENARIOLIB_EXP void SetMass(const double mass) override;

            OPENSCENARIOLIB_EXP void SetModel(const std::string model) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetPedestrianCategory(const PedestrianCategory pedestrianCategory) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox) override;

            OPENSCENARIOLIB_EXP void SetProperties(std::shared_ptr<IPropertiesWriter> properties) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMass(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToModel(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPedestrianCategory(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMass() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromModel() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPedestrianCategory() const override;

            OPENSCENARIOLIB_EXP bool IsMassParameterized() override;

            OPENSCENARIOLIB_EXP bool IsModelParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPedestrianCategoryParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertiesWriter> GetWriterProperties() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPedestrianCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPedestrianCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCatalogLocationImpl: public BaseImpl, public IPedestrianCatalogLocationWriter, public std::enable_shared_from_this<PedestrianCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP PedestrianCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPerformance. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPerformance)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PerformanceImpl: public BaseImpl, public IPerformanceWriter, public std::enable_shared_from_this<PerformanceImpl> 
        {
        private:
            double _maxAcceleration {};
            double _maxDeceleration {};
            double _maxSpeed {};
        public:

            OPENSCENARIOLIB_EXP PerformanceImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetMaxAcceleration() const override;
            OPENSCENARIOLIB_EXP double GetMaxDeceleration() const override;
            OPENSCENARIOLIB_EXP double GetMaxSpeed() const override;


            OPENSCENARIOLIB_EXP void SetMaxAcceleration(const double maxAcceleration) override;

            OPENSCENARIOLIB_EXP void SetMaxDeceleration(const double maxDeceleration) override;

            OPENSCENARIOLIB_EXP void SetMaxSpeed(const double maxSpeed) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxAcceleration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxDeceleration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMaxSpeed(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxAcceleration() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxDeceleration() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMaxSpeed() const override;

            OPENSCENARIOLIB_EXP bool IsMaxAccelerationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsMaxDecelerationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsMaxSpeedParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPhase. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPhase)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PhaseImpl: public BaseImpl, public IPhaseWriter, public std::enable_shared_from_this<PhaseImpl> 
        {
        private:
            double _duration {};
            std::string _name {};
            std::vector<std::shared_ptr<ITrafficSignalStateWriter>> _trafficSignalStates {};
        public:

            OPENSCENARIOLIB_EXP PhaseImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDuration() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ITrafficSignalState>> GetTrafficSignalStates() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ITrafficSignalStateWriter>> GetWriterTrafficSignalStates() const override;
            OPENSCENARIOLIB_EXP int GetTrafficSignalStatesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalState> GetTrafficSignalStatesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetDuration(const double duration) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalStates(std::vector<std::shared_ptr<ITrafficSignalStateWriter>>& trafficSignalStates) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDuration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDuration() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsDurationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPolyline. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPolyline)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PolylineImpl: public BaseImpl, public IPolylineWriter, public std::enable_shared_from_this<PolylineImpl> 
        {
        private:
            std::vector<std::shared_ptr<IVertexWriter>> _vertices {};
        public:

            OPENSCENARIOLIB_EXP PolylineImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IVertex>> GetVertices() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IVertexWriter>> GetWriterVertices() const override;
            OPENSCENARIOLIB_EXP int GetVerticesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVertex> GetVerticesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetVertices(std::vector<std::shared_ptr<IVertexWriter>>& vertices) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionImpl: public BaseImpl, public IPositionWriter, public std::enable_shared_from_this<PositionImpl> 
        {
        private:
            std::shared_ptr<IWorldPositionWriter> _worldPosition {};
            std::shared_ptr<IRelativeWorldPositionWriter> _relativeWorldPosition {};
            std::shared_ptr<IRelativeObjectPositionWriter> _relativeObjectPosition {};
            std::shared_ptr<IRoadPositionWriter> _roadPosition {};
            std::shared_ptr<IRelativeRoadPositionWriter> _relativeRoadPosition {};
            std::shared_ptr<ILanePositionWriter> _lanePosition {};
            std::shared_ptr<IRelativeLanePositionWriter> _relativeLanePosition {};
            std::shared_ptr<IRoutePositionWriter> _routePosition {};
        public:

            OPENSCENARIOLIB_EXP PositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IWorldPosition> GetWorldPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeWorldPosition> GetRelativeWorldPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeObjectPosition> GetRelativeObjectPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadPosition> GetRoadPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeRoadPosition> GetRelativeRoadPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILanePosition> GetLanePosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeLanePosition> GetRelativeLanePosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoutePosition> GetRoutePosition() const override;


            OPENSCENARIOLIB_EXP void SetWorldPosition(std::shared_ptr<IWorldPositionWriter> worldPosition) override;

            OPENSCENARIOLIB_EXP void SetRelativeWorldPosition(std::shared_ptr<IRelativeWorldPositionWriter> relativeWorldPosition) override;

            OPENSCENARIOLIB_EXP void SetRelativeObjectPosition(std::shared_ptr<IRelativeObjectPositionWriter> relativeObjectPosition) override;

            OPENSCENARIOLIB_EXP void SetRoadPosition(std::shared_ptr<IRoadPositionWriter> roadPosition) override;

            OPENSCENARIOLIB_EXP void SetRelativeRoadPosition(std::shared_ptr<IRelativeRoadPositionWriter> relativeRoadPosition) override;

            OPENSCENARIOLIB_EXP void SetLanePosition(std::shared_ptr<ILanePositionWriter> lanePosition) override;

            OPENSCENARIOLIB_EXP void SetRelativeLanePosition(std::shared_ptr<IRelativeLanePositionWriter> relativeLanePosition) override;

            OPENSCENARIOLIB_EXP void SetRoutePosition(std::shared_ptr<IRoutePositionWriter> routePosition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IWorldPositionWriter> GetWriterWorldPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeWorldPositionWriter> GetWriterRelativeWorldPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeObjectPositionWriter> GetWriterRelativeObjectPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadPositionWriter> GetWriterRoadPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeRoadPositionWriter> GetWriterRelativeRoadPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILanePositionWriter> GetWriterLanePosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeLanePositionWriter> GetWriterRelativeLanePosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoutePositionWriter> GetWriterRoutePosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPositionInLaneCoordinates. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPositionInLaneCoordinates)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInLaneCoordinatesImpl: public BaseImpl, public IPositionInLaneCoordinatesWriter, public std::enable_shared_from_this<PositionInLaneCoordinatesImpl> 
        {
        private:
            std::string _laneId {};
            double _laneOffset {};
            double _pathS {};
        public:

            OPENSCENARIOLIB_EXP PositionInLaneCoordinatesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetLaneId() const override;
            OPENSCENARIOLIB_EXP double GetLaneOffset() const override;
            OPENSCENARIOLIB_EXP double GetPathS() const override;


            OPENSCENARIOLIB_EXP void SetLaneId(const std::string laneId) override;

            OPENSCENARIOLIB_EXP void SetLaneOffset(const double laneOffset) override;

            OPENSCENARIOLIB_EXP void SetPathS(const double pathS) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLaneId(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToLaneOffset(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPathS(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLaneId() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromLaneOffset() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPathS() const override;

            OPENSCENARIOLIB_EXP bool IsLaneIdParameterized() override;

            OPENSCENARIOLIB_EXP bool IsLaneOffsetParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPathSParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPositionInRoadCoordinates. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPositionInRoadCoordinates)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInRoadCoordinatesImpl: public BaseImpl, public IPositionInRoadCoordinatesWriter, public std::enable_shared_from_this<PositionInRoadCoordinatesImpl> 
        {
        private:
            double _pathS {};
            double _t {};
        public:

            OPENSCENARIOLIB_EXP PositionInRoadCoordinatesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetPathS() const override;
            OPENSCENARIOLIB_EXP double GetT() const override;


            OPENSCENARIOLIB_EXP void SetPathS(const double pathS) override;

            OPENSCENARIOLIB_EXP void SetT(const double t) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPathS(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToT(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPathS() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromT() const override;

            OPENSCENARIOLIB_EXP bool IsPathSParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPositionOfCurrentEntity. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPositionOfCurrentEntity)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionOfCurrentEntityImpl: public BaseImpl, public IPositionOfCurrentEntityWriter, public std::enable_shared_from_this<PositionOfCurrentEntityImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
        public:

            OPENSCENARIOLIB_EXP PositionOfCurrentEntityImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPrecipitation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPrecipitation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationImpl: public BaseImpl, public IPrecipitationWriter, public std::enable_shared_from_this<PrecipitationImpl> 
        {
        private:
            double _intensity {};
            PrecipitationType _precipitationType {};
        public:

            OPENSCENARIOLIB_EXP PrecipitationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetIntensity() const override;
            OPENSCENARIOLIB_EXP PrecipitationType GetPrecipitationType() const override;


            OPENSCENARIOLIB_EXP void SetIntensity(const double intensity) override;

            OPENSCENARIOLIB_EXP void SetPrecipitationType(const PrecipitationType precipitationType) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToIntensity(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPrecipitationType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromIntensity() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPrecipitationType() const override;

            OPENSCENARIOLIB_EXP bool IsIntensityParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPrecipitationTypeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPrivate. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPrivate)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateImpl: public BaseImpl, public IPrivateWriter, public std::enable_shared_from_this<PrivateImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            std::vector<std::shared_ptr<IPrivateActionWriter>> _privateActions {};
        public:

            OPENSCENARIOLIB_EXP PrivateImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPrivateAction>> GetPrivateActions() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPrivateActionWriter>> GetWriterPrivateActions() const override;
            OPENSCENARIOLIB_EXP int GetPrivateActionsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPrivateAction> GetPrivateActionsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetPrivateActions(std::vector<std::shared_ptr<IPrivateActionWriter>>& privateActions) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IPrivateAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IPrivateAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateActionImpl: public BaseImpl, public IPrivateActionWriter, public std::enable_shared_from_this<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<ILongitudinalActionWriter> _longitudinalAction {};
            std::shared_ptr<ILateralActionWriter> _lateralAction {};
            std::shared_ptr<IVisibilityActionWriter> _visibilityAction {};
            std::shared_ptr<ISynchronizeActionWriter> _synchronizeAction {};
            std::shared_ptr<IActivateControllerActionWriter> _activateControllerAction {};
            std::shared_ptr<IControllerActionWriter> _controllerAction {};
            std::shared_ptr<ITeleportActionWriter> _teleportAction {};
            std::shared_ptr<IRoutingActionWriter> _routingAction {};
        public:

            OPENSCENARIOLIB_EXP PrivateActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILongitudinalAction> GetLongitudinalAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILateralAction> GetLateralAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVisibilityAction> GetVisibilityAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISynchronizeAction> GetSynchronizeAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IActivateControllerAction> GetActivateControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerAction> GetControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITeleportAction> GetTeleportAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoutingAction> GetRoutingAction() const override;


            OPENSCENARIOLIB_EXP void SetLongitudinalAction(std::shared_ptr<ILongitudinalActionWriter> longitudinalAction) override;

            OPENSCENARIOLIB_EXP void SetLateralAction(std::shared_ptr<ILateralActionWriter> lateralAction) override;

            OPENSCENARIOLIB_EXP void SetVisibilityAction(std::shared_ptr<IVisibilityActionWriter> visibilityAction) override;

            OPENSCENARIOLIB_EXP void SetSynchronizeAction(std::shared_ptr<ISynchronizeActionWriter> synchronizeAction) override;

            OPENSCENARIOLIB_EXP void SetActivateControllerAction(std::shared_ptr<IActivateControllerActionWriter> activateControllerAction) override;

            OPENSCENARIOLIB_EXP void SetControllerAction(std::shared_ptr<IControllerActionWriter> controllerAction) override;

            OPENSCENARIOLIB_EXP void SetTeleportAction(std::shared_ptr<ITeleportActionWriter> teleportAction) override;

            OPENSCENARIOLIB_EXP void SetRoutingAction(std::shared_ptr<IRoutingActionWriter> routingAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ILongitudinalActionWriter> GetWriterLongitudinalAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ILateralActionWriter> GetWriterLateralAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVisibilityActionWriter> GetWriterVisibilityAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISynchronizeActionWriter> GetWriterSynchronizeAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IActivateControllerActionWriter> GetWriterActivateControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerActionWriter> GetWriterControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITeleportActionWriter> GetWriterTeleportAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoutingActionWriter> GetWriterRoutingAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IProperties. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IProperties)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PropertiesImpl: public BaseImpl, public IPropertiesWriter, public std::enable_shared_from_this<PropertiesImpl> 
        {
        private:
            std::vector<std::shared_ptr<IPropertyWriter>> _properties {};
            std::vector<std::shared_ptr<IFileWriter>> _files {};
        public:

            OPENSCENARIOLIB_EXP PropertiesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IProperty>> GetProperties() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPropertyWriter>> GetWriterProperties() const override;
            OPENSCENARIOLIB_EXP int GetPropertiesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IProperty> GetPropertiesAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IFile>> GetFiles() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IFileWriter>> GetWriterFiles() const override;
            OPENSCENARIOLIB_EXP int GetFilesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFile> GetFilesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetProperties(std::vector<std::shared_ptr<IPropertyWriter>>& properties) override;

            OPENSCENARIOLIB_EXP void SetFiles(std::vector<std::shared_ptr<IFileWriter>>& files) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IProperty. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IProperty)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PropertyImpl: public BaseImpl, public IPropertyWriter, public std::enable_shared_from_this<PropertyImpl> 
        {
        private:
            std::string _name {};
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP PropertyImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IReachPositionCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IReachPositionCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReachPositionConditionImpl: public BaseImpl, public IReachPositionConditionWriter, public std::enable_shared_from_this<ReachPositionConditionImpl> 
        {
        private:
            double _tolerance {};
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP ReachPositionConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetTolerance() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetTolerance(const double tolerance) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTolerance(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTolerance() const override;

            OPENSCENARIOLIB_EXP bool IsToleranceParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeDistanceCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeDistanceCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceConditionImpl: public BaseImpl, public IRelativeDistanceConditionWriter, public std::enable_shared_from_this<RelativeDistanceConditionImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            bool _freespace {};
            RelativeDistanceType _relativeDistanceType {};
            Rule _rule {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP RelativeDistanceConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP bool GetFreespace() const override;
            OPENSCENARIOLIB_EXP RelativeDistanceType GetRelativeDistanceType() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetFreespace(const bool freespace) override;

            OPENSCENARIOLIB_EXP void SetRelativeDistanceType(const RelativeDistanceType relativeDistanceType) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFreespace(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRelativeDistanceType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFreespace() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRelativeDistanceType() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsFreespaceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRelativeDistanceTypeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeLanePosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeLanePosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeLanePositionImpl: public BaseImpl, public IRelativeLanePositionWriter, public std::enable_shared_from_this<RelativeLanePositionImpl> 
        {
        private:
            int _dLane {};
            double _ds {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            double _offset {};
            std::shared_ptr<IOrientationWriter> _orientation {};
        public:

            OPENSCENARIOLIB_EXP RelativeLanePositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP int GetDLane() const override;
            OPENSCENARIOLIB_EXP double GetDs() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP double GetOffset() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;


            OPENSCENARIOLIB_EXP void SetDLane(const int dLane) override;

            OPENSCENARIOLIB_EXP void SetDs(const double ds) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetOffset(const double offset) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDLane(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDs(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToOffset(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDLane() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDs() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromOffset() const override;

            OPENSCENARIOLIB_EXP bool IsDLaneParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDsParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsOffsetParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeObjectPosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeObjectPosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeObjectPositionImpl: public BaseImpl, public IRelativeObjectPositionWriter, public std::enable_shared_from_this<RelativeObjectPositionImpl> 
        {
        private:
            double _dx {};
            double _dy {};
            double _dz {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            std::shared_ptr<IOrientationWriter> _orientation {};
        public:

            OPENSCENARIOLIB_EXP RelativeObjectPositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDx() const override;
            OPENSCENARIOLIB_EXP double GetDy() const override;
            OPENSCENARIOLIB_EXP double GetDz() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;


            OPENSCENARIOLIB_EXP void SetDx(const double dx) override;

            OPENSCENARIOLIB_EXP void SetDy(const double dy) override;

            OPENSCENARIOLIB_EXP void SetDz(const double dz) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDx(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDy(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDz(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDx() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDy() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDz() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsDxParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDyParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDzParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeRoadPosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeRoadPosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeRoadPositionImpl: public BaseImpl, public IRelativeRoadPositionWriter, public std::enable_shared_from_this<RelativeRoadPositionImpl> 
        {
        private:
            double _ds {};
            double _dt {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            std::shared_ptr<IOrientationWriter> _orientation {};
        public:

            OPENSCENARIOLIB_EXP RelativeRoadPositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDs() const override;
            OPENSCENARIOLIB_EXP double GetDt() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;


            OPENSCENARIOLIB_EXP void SetDs(const double ds) override;

            OPENSCENARIOLIB_EXP void SetDt(const double dt) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDs(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDt(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDs() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDt() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsDsParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDtParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeSpeedCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeSpeedCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedConditionImpl: public BaseImpl, public IRelativeSpeedConditionWriter, public std::enable_shared_from_this<RelativeSpeedConditionImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            Rule _rule {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP RelativeSpeedConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeSpeedToMaster. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeSpeedToMaster)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedToMasterImpl: public BaseImpl, public IRelativeSpeedToMasterWriter, public std::enable_shared_from_this<RelativeSpeedToMasterImpl> 
        {
        private:
            SpeedTargetValueType _speedTargetValueType {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP RelativeSpeedToMasterImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP SpeedTargetValueType GetSpeedTargetValueType() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetSpeedTargetValueType(const SpeedTargetValueType speedTargetValueType) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToSpeedTargetValueType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromSpeedTargetValueType() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsSpeedTargetValueTypeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeTargetLane. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeTargetLane)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneImpl: public BaseImpl, public IRelativeTargetLaneWriter, public std::enable_shared_from_this<RelativeTargetLaneImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            int _value {};
        public:

            OPENSCENARIOLIB_EXP RelativeTargetLaneImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP int GetValue() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetValue(const int value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeTargetLaneOffset. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeTargetLaneOffset)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneOffsetImpl: public BaseImpl, public IRelativeTargetLaneOffsetWriter, public std::enable_shared_from_this<RelativeTargetLaneOffsetImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP RelativeTargetLaneOffsetImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeTargetSpeed. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeTargetSpeed)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetSpeedImpl: public BaseImpl, public IRelativeTargetSpeedWriter, public std::enable_shared_from_this<RelativeTargetSpeedImpl> 
        {
        private:
            bool _continuous {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            SpeedTargetValueType _speedTargetValueType {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP RelativeTargetSpeedImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetContinuous() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP SpeedTargetValueType GetSpeedTargetValueType() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetContinuous(const bool continuous) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetSpeedTargetValueType(const SpeedTargetValueType speedTargetValueType) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToContinuous(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToSpeedTargetValueType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromContinuous() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromSpeedTargetValueType() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsContinuousParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsSpeedTargetValueTypeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRelativeWorldPosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRelativeWorldPosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeWorldPositionImpl: public BaseImpl, public IRelativeWorldPositionWriter, public std::enable_shared_from_this<RelativeWorldPositionImpl> 
        {
        private:
            double _dx {};
            double _dy {};
            double _dz {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            std::shared_ptr<IOrientationWriter> _orientation {};
        public:

            OPENSCENARIOLIB_EXP RelativeWorldPositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDx() const override;
            OPENSCENARIOLIB_EXP double GetDy() const override;
            OPENSCENARIOLIB_EXP double GetDz() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;


            OPENSCENARIOLIB_EXP void SetDx(const double dx) override;

            OPENSCENARIOLIB_EXP void SetDy(const double dy) override;

            OPENSCENARIOLIB_EXP void SetDz(const double dz) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDx(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDy(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDz(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDx() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDy() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDz() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsDxParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDyParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDzParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRoadCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRoadCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadConditionImpl: public BaseImpl, public IRoadConditionWriter, public std::enable_shared_from_this<RoadConditionImpl> 
        {
        private:
            double _frictionScaleFactor {};
            std::shared_ptr<IPropertiesWriter> _properties {};
        public:

            OPENSCENARIOLIB_EXP RoadConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetFrictionScaleFactor() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IProperties> GetProperties() const override;


            OPENSCENARIOLIB_EXP void SetFrictionScaleFactor(const double frictionScaleFactor) override;

            OPENSCENARIOLIB_EXP void SetProperties(std::shared_ptr<IPropertiesWriter> properties) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFrictionScaleFactor(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFrictionScaleFactor() const override;

            OPENSCENARIOLIB_EXP bool IsFrictionScaleFactorParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertiesWriter> GetWriterProperties() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRoadNetwork. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRoadNetwork)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadNetworkImpl: public BaseImpl, public IRoadNetworkWriter, public std::enable_shared_from_this<RoadNetworkImpl> 
        {
        private:
            std::shared_ptr<IFileWriter> _logicFile {};
            std::shared_ptr<IFileWriter> _sceneGraphFile {};
            std::vector<std::shared_ptr<ITrafficSignalControllerWriter>> _trafficSignals {};
        public:

            OPENSCENARIOLIB_EXP RoadNetworkImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFile> GetLogicFile() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFile> GetSceneGraphFile() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ITrafficSignalController>> GetTrafficSignals() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ITrafficSignalControllerWriter>> GetWriterTrafficSignals() const override;
            OPENSCENARIOLIB_EXP int GetTrafficSignalsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalController> GetTrafficSignalsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetLogicFile(std::shared_ptr<IFileWriter> logicFile) override;

            OPENSCENARIOLIB_EXP void SetSceneGraphFile(std::shared_ptr<IFileWriter> sceneGraphFile) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignals(std::vector<std::shared_ptr<ITrafficSignalControllerWriter>>& trafficSignals) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IFileWriter> GetWriterLogicFile() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFileWriter> GetWriterSceneGraphFile() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRoadPosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRoadPosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadPositionImpl: public BaseImpl, public IRoadPositionWriter, public std::enable_shared_from_this<RoadPositionImpl> 
        {
        private:
            std::string _roadId {};
            double _s {};
            double _t {};
            std::shared_ptr<IOrientationWriter> _orientation {};
        public:

            OPENSCENARIOLIB_EXP RoadPositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetRoadId() const override;
            OPENSCENARIOLIB_EXP double GetS() const override;
            OPENSCENARIOLIB_EXP double GetT() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;


            OPENSCENARIOLIB_EXP void SetRoadId(const std::string roadId) override;

            OPENSCENARIOLIB_EXP void SetS(const double s) override;

            OPENSCENARIOLIB_EXP void SetT(const double t) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRoadId(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToS(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToT(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRoadId() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromS() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromT() const override;

            OPENSCENARIOLIB_EXP bool IsRoadIdParameterized() override;

            OPENSCENARIOLIB_EXP bool IsSParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRoute. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRoute)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteImpl: public BaseImpl, public IRouteWriter, public std::enable_shared_from_this<RouteImpl> 
        {
        private:
            bool _closed {};
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::vector<std::shared_ptr<IWaypointWriter>> _waypoints {};
        public:

            OPENSCENARIOLIB_EXP RouteImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetClosed() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IWaypoint>> GetWaypoints() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IWaypointWriter>> GetWriterWaypoints() const override;
            OPENSCENARIOLIB_EXP int GetWaypointsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IWaypoint> GetWaypointsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetClosed(const bool closed) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetWaypoints(std::vector<std::shared_ptr<IWaypointWriter>>& waypoints) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToClosed(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromClosed() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsClosedParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRouteCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRouteCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteCatalogLocationImpl: public BaseImpl, public IRouteCatalogLocationWriter, public std::enable_shared_from_this<RouteCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP RouteCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRoutePosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRoutePosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutePositionImpl: public BaseImpl, public IRoutePositionWriter, public std::enable_shared_from_this<RoutePositionImpl> 
        {
        private:
            std::shared_ptr<IRouteRefWriter> _routeRef {};
            std::shared_ptr<IOrientationWriter> _orientation {};
            std::shared_ptr<IInRoutePositionWriter> _inRoutePosition {};
        public:

            OPENSCENARIOLIB_EXP RoutePositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteRef> GetRouteRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientation> GetOrientation() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IInRoutePosition> GetInRoutePosition() const override;


            OPENSCENARIOLIB_EXP void SetRouteRef(std::shared_ptr<IRouteRefWriter> routeRef) override;

            OPENSCENARIOLIB_EXP void SetOrientation(std::shared_ptr<IOrientationWriter> orientation) override;

            OPENSCENARIOLIB_EXP void SetInRoutePosition(std::shared_ptr<IInRoutePositionWriter> inRoutePosition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteRefWriter> GetWriterRouteRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> GetWriterOrientation() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IInRoutePositionWriter> GetWriterInRoutePosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRouteRef. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRouteRef)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteRefImpl: public BaseImpl, public IRouteRefWriter, public std::enable_shared_from_this<RouteRefImpl> 
        {
        private:
            std::shared_ptr<IRouteWriter> _route {};
            std::shared_ptr<ICatalogReferenceWriter> _catalogReference {};
        public:

            OPENSCENARIOLIB_EXP RouteRefImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoute> GetRoute() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReference> GetCatalogReference() const override;


            OPENSCENARIOLIB_EXP void SetRoute(std::shared_ptr<IRouteWriter> route) override;

            OPENSCENARIOLIB_EXP void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteWriter> GetWriterRoute() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IRoutingAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IRoutingAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutingActionImpl: public BaseImpl, public IRoutingActionWriter, public std::enable_shared_from_this<RoutingActionImpl> 
        {
        private:
            std::shared_ptr<IAssignRouteActionWriter> _assignRouteAction {};
            std::shared_ptr<IFollowTrajectoryActionWriter> _followTrajectoryAction {};
            std::shared_ptr<IAcquirePositionActionWriter> _acquirePositionAction {};
        public:

            OPENSCENARIOLIB_EXP RoutingActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAssignRouteAction> GetAssignRouteAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFollowTrajectoryAction> GetFollowTrajectoryAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAcquirePositionAction> GetAcquirePositionAction() const override;


            OPENSCENARIOLIB_EXP void SetAssignRouteAction(std::shared_ptr<IAssignRouteActionWriter> assignRouteAction) override;

            OPENSCENARIOLIB_EXP void SetFollowTrajectoryAction(std::shared_ptr<IFollowTrajectoryActionWriter> followTrajectoryAction) override;

            OPENSCENARIOLIB_EXP void SetAcquirePositionAction(std::shared_ptr<IAcquirePositionActionWriter> acquirePositionAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IAssignRouteActionWriter> GetWriterAssignRouteAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFollowTrajectoryActionWriter> GetWriterFollowTrajectoryAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAcquirePositionActionWriter> GetWriterAcquirePositionAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IScenarioDefinition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IScenarioDefinition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioDefinitionImpl: public BaseImpl, public IScenarioDefinitionWriter, public std::enable_shared_from_this<ScenarioDefinitionImpl> 
        {
        private:
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<ICatalogLocationsWriter> _catalogLocations {};
            std::shared_ptr<IRoadNetworkWriter> _roadNetwork {};
            std::shared_ptr<IEntitiesWriter> _entities {};
            std::shared_ptr<IStoryboardWriter> _storyboard {};
        public:

            OPENSCENARIOLIB_EXP ScenarioDefinitionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogLocations> GetCatalogLocations() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadNetwork> GetRoadNetwork() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntities> GetEntities() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryboard> GetStoryboard() const override;


            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetCatalogLocations(std::shared_ptr<ICatalogLocationsWriter> catalogLocations) override;

            OPENSCENARIOLIB_EXP void SetRoadNetwork(std::shared_ptr<IRoadNetworkWriter> roadNetwork) override;

            OPENSCENARIOLIB_EXP void SetEntities(std::shared_ptr<IEntitiesWriter> entities) override;

            OPENSCENARIOLIB_EXP void SetStoryboard(std::shared_ptr<IStoryboardWriter> storyboard) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogLocationsWriter> GetWriterCatalogLocations() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadNetworkWriter> GetWriterRoadNetwork() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntitiesWriter> GetWriterEntities() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryboardWriter> GetWriterStoryboard() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IScenarioObject. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IScenarioObject)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioObjectImpl: public BaseImpl, public IScenarioObjectWriter, public std::enable_shared_from_this<ScenarioObjectImpl> 
        {
        private:
            std::string _name {};
            std::shared_ptr<IEntityObjectWriter> _entityObject {};
            std::shared_ptr<IObjectControllerWriter> _objectController {};
        public:

            OPENSCENARIOLIB_EXP ScenarioObjectImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityObject> GetEntityObject() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IObjectController> GetObjectController() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetEntityObject(std::shared_ptr<IEntityObjectWriter> entityObject) override;

            OPENSCENARIOLIB_EXP void SetObjectController(std::shared_ptr<IObjectControllerWriter> objectController) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityObjectWriter> GetWriterEntityObject() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IObjectControllerWriter> GetWriterObjectController() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISelectedEntities. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISelectedEntities)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SelectedEntitiesImpl: public BaseImpl, public ISelectedEntitiesWriter, public std::enable_shared_from_this<SelectedEntitiesImpl> 
        {
        private:
            std::vector<std::shared_ptr<IEntityRefWriter>> _entityRef {};
            std::vector<std::shared_ptr<IByTypeWriter>> _byType {};
        public:

            OPENSCENARIOLIB_EXP SelectedEntitiesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntityRef>> GetEntityRef() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntityRefWriter>> GetWriterEntityRef() const override;
            OPENSCENARIOLIB_EXP int GetEntityRefSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRef> GetEntityRefAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IByType>> GetByType() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IByTypeWriter>> GetWriterByType() const override;
            OPENSCENARIOLIB_EXP int GetByTypeSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IByType> GetByTypeAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetEntityRef(std::vector<std::shared_ptr<IEntityRefWriter>>& entityRef) override;

            OPENSCENARIOLIB_EXP void SetByType(std::vector<std::shared_ptr<IByTypeWriter>>& byType) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IShape. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IShape)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ShapeImpl: public BaseImpl, public IShapeWriter, public std::enable_shared_from_this<ShapeImpl> 
        {
        private:
            std::shared_ptr<IPolylineWriter> _polyline {};
            std::shared_ptr<IClothoidWriter> _clothoid {};
            std::shared_ptr<INurbsWriter> _nurbs {};
        public:

            OPENSCENARIOLIB_EXP ShapeImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPolyline> GetPolyline() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IClothoid> GetClothoid() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INurbs> GetNurbs() const override;


            OPENSCENARIOLIB_EXP void SetPolyline(std::shared_ptr<IPolylineWriter> polyline) override;

            OPENSCENARIOLIB_EXP void SetClothoid(std::shared_ptr<IClothoidWriter> clothoid) override;

            OPENSCENARIOLIB_EXP void SetNurbs(std::shared_ptr<INurbsWriter> nurbs) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPolylineWriter> GetWriterPolyline() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IClothoidWriter> GetWriterClothoid() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INurbsWriter> GetWriterNurbs() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISimulationTimeCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISimulationTimeCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SimulationTimeConditionImpl: public BaseImpl, public ISimulationTimeConditionWriter, public std::enable_shared_from_this<SimulationTimeConditionImpl> 
        {
        private:
            Rule _rule {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP SimulationTimeConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISpeedAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISpeedAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionImpl: public BaseImpl, public ISpeedActionWriter, public std::enable_shared_from_this<SpeedActionImpl> 
        {
        private:
            std::shared_ptr<ITransitionDynamicsWriter> _speedActionDynamics {};
            std::shared_ptr<ISpeedActionTargetWriter> _speedActionTarget {};
        public:

            OPENSCENARIOLIB_EXP SpeedActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITransitionDynamics> GetSpeedActionDynamics() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedActionTarget> GetSpeedActionTarget() const override;


            OPENSCENARIOLIB_EXP void SetSpeedActionDynamics(std::shared_ptr<ITransitionDynamicsWriter> speedActionDynamics) override;

            OPENSCENARIOLIB_EXP void SetSpeedActionTarget(std::shared_ptr<ISpeedActionTargetWriter> speedActionTarget) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITransitionDynamicsWriter> GetWriterSpeedActionDynamics() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedActionTargetWriter> GetWriterSpeedActionTarget() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISpeedActionTarget. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISpeedActionTarget)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionTargetImpl: public BaseImpl, public ISpeedActionTargetWriter, public std::enable_shared_from_this<SpeedActionTargetImpl> 
        {
        private:
            std::shared_ptr<IRelativeTargetSpeedWriter> _relativeTargetSpeed {};
            std::shared_ptr<IAbsoluteTargetSpeedWriter> _absoluteTargetSpeed {};
        public:

            OPENSCENARIOLIB_EXP SpeedActionTargetImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetSpeed> GetRelativeTargetSpeed() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetSpeed> GetAbsoluteTargetSpeed() const override;


            OPENSCENARIOLIB_EXP void SetRelativeTargetSpeed(std::shared_ptr<IRelativeTargetSpeedWriter> relativeTargetSpeed) override;

            OPENSCENARIOLIB_EXP void SetAbsoluteTargetSpeed(std::shared_ptr<IAbsoluteTargetSpeedWriter> absoluteTargetSpeed) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetSpeedWriter> GetWriterRelativeTargetSpeed() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetSpeedWriter> GetWriterAbsoluteTargetSpeed() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISpeedCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISpeedCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedConditionImpl: public BaseImpl, public ISpeedConditionWriter, public std::enable_shared_from_this<SpeedConditionImpl> 
        {
        private:
            Rule _rule {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP SpeedConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IStandStillCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IStandStillCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StandStillConditionImpl: public BaseImpl, public IStandStillConditionWriter, public std::enable_shared_from_this<StandStillConditionImpl> 
        {
        private:
            double _duration {};
        public:

            OPENSCENARIOLIB_EXP StandStillConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDuration() const override;


            OPENSCENARIOLIB_EXP void SetDuration(const double duration) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDuration(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDuration() const override;

            OPENSCENARIOLIB_EXP bool IsDurationParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IStory. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IStory)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryImpl: public BaseImpl, public IStoryWriter, public std::enable_shared_from_this<StoryImpl> 
        {
        private:
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::vector<std::shared_ptr<IActWriter>> _acts {};
        public:

            OPENSCENARIOLIB_EXP StoryImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IAct>> GetActs() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IActWriter>> GetWriterActs() const override;
            OPENSCENARIOLIB_EXP int GetActsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAct> GetActsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetActs(std::vector<std::shared_ptr<IActWriter>>& acts) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IStoryboard. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IStoryboard)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardImpl: public BaseImpl, public IStoryboardWriter, public std::enable_shared_from_this<StoryboardImpl> 
        {
        private:
            std::shared_ptr<IInitWriter> _init {};
            std::vector<std::shared_ptr<IStoryWriter>> _stories {};
            std::shared_ptr<ITriggerWriter> _stopTrigger {};
        public:

            OPENSCENARIOLIB_EXP StoryboardImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IInit> GetInit() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IStory>> GetStories() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IStoryWriter>> GetWriterStories() const override;
            OPENSCENARIOLIB_EXP int GetStoriesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IStory> GetStoriesAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrigger> GetStopTrigger() const override;


            OPENSCENARIOLIB_EXP void SetInit(std::shared_ptr<IInitWriter> init) override;

            OPENSCENARIOLIB_EXP void SetStories(std::vector<std::shared_ptr<IStoryWriter>>& stories) override;

            OPENSCENARIOLIB_EXP void SetStopTrigger(std::shared_ptr<ITriggerWriter> stopTrigger) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IInitWriter> GetWriterInit() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggerWriter> GetWriterStopTrigger() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IStoryboardElementStateCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IStoryboardElementStateCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardElementStateConditionImpl: public BaseImpl, public IStoryboardElementStateConditionWriter, public std::enable_shared_from_this<StoryboardElementStateConditionImpl> 
        {
        private:
            StoryboardElementState _state {};
            std::shared_ptr<INamedReference<IStoryboardElement>> _storyboardElementRef {};
            StoryboardElementType _storyboardElementType {};
        public:

            OPENSCENARIOLIB_EXP StoryboardElementStateConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP StoryboardElementState GetState() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IStoryboardElement>> GetStoryboardElementRef() const override;
            OPENSCENARIOLIB_EXP StoryboardElementType GetStoryboardElementType() const override;


            OPENSCENARIOLIB_EXP void SetState(const StoryboardElementState state) override;

            OPENSCENARIOLIB_EXP void SetStoryboardElementRef(std::shared_ptr<INamedReference<IStoryboardElement>> storyboardElementRef) override;

            OPENSCENARIOLIB_EXP void SetStoryboardElementType(const StoryboardElementType storyboardElementType) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToState(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToStoryboardElementRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToStoryboardElementType(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromState() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromStoryboardElementRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromStoryboardElementType() const override;

            OPENSCENARIOLIB_EXP bool IsStateParameterized() override;

            OPENSCENARIOLIB_EXP bool IsStoryboardElementRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsStoryboardElementTypeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISun. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISun)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SunImpl: public BaseImpl, public ISunWriter, public std::enable_shared_from_this<SunImpl> 
        {
        private:
            double _azimuth {};
            double _elevation {};
            double _intensity {};
        public:

            OPENSCENARIOLIB_EXP SunImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetAzimuth() const override;
            OPENSCENARIOLIB_EXP double GetElevation() const override;
            OPENSCENARIOLIB_EXP double GetIntensity() const override;


            OPENSCENARIOLIB_EXP void SetAzimuth(const double azimuth) override;

            OPENSCENARIOLIB_EXP void SetElevation(const double elevation) override;

            OPENSCENARIOLIB_EXP void SetIntensity(const double intensity) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToAzimuth(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToElevation(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToIntensity(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromAzimuth() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromElevation() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromIntensity() const override;

            OPENSCENARIOLIB_EXP bool IsAzimuthParameterized() override;

            OPENSCENARIOLIB_EXP bool IsElevationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsIntensityParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ISynchronizeAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ISynchronizeAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SynchronizeActionImpl: public BaseImpl, public ISynchronizeActionWriter, public std::enable_shared_from_this<SynchronizeActionImpl> 
        {
        private:
            std::shared_ptr<INamedReference<IEntity>> _masterEntityRef {};
            std::shared_ptr<IPositionWriter> _targetPositionMaster {};
            std::shared_ptr<IPositionWriter> _targetPosition {};
            std::shared_ptr<IFinalSpeedWriter> _finalSpeed {};
        public:

            OPENSCENARIOLIB_EXP SynchronizeActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetMasterEntityRef() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetTargetPositionMaster() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetTargetPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFinalSpeed> GetFinalSpeed() const override;


            OPENSCENARIOLIB_EXP void SetMasterEntityRef(std::shared_ptr<INamedReference<IEntity>> masterEntityRef) override;

            OPENSCENARIOLIB_EXP void SetTargetPositionMaster(std::shared_ptr<IPositionWriter> targetPositionMaster) override;

            OPENSCENARIOLIB_EXP void SetTargetPosition(std::shared_ptr<IPositionWriter> targetPosition) override;

            OPENSCENARIOLIB_EXP void SetFinalSpeed(std::shared_ptr<IFinalSpeedWriter> finalSpeed) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToMasterEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromMasterEntityRef() const override;

            OPENSCENARIOLIB_EXP bool IsMasterEntityRefParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterTargetPositionMaster() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterTargetPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFinalSpeedWriter> GetWriterFinalSpeed() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITeleportAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITeleportAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TeleportActionImpl: public BaseImpl, public ITeleportActionWriter, public std::enable_shared_from_this<TeleportActionImpl> 
        {
        private:
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP TeleportActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITimeHeadwayCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITimeHeadwayCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeHeadwayConditionImpl: public BaseImpl, public ITimeHeadwayConditionWriter, public std::enable_shared_from_this<TimeHeadwayConditionImpl> 
        {
        private:
            bool _alongRoute {};
            std::shared_ptr<INamedReference<IEntity>> _entityRef {};
            bool _freespace {};
            Rule _rule {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP TimeHeadwayConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetAlongRoute() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const override;
            OPENSCENARIOLIB_EXP bool GetFreespace() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetAlongRoute(const bool alongRoute) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) override;

            OPENSCENARIOLIB_EXP void SetFreespace(const bool freespace) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToAlongRoute(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToEntityRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFreespace(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromAlongRoute() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromEntityRef() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFreespace() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsAlongRouteParameterized() override;

            OPENSCENARIOLIB_EXP bool IsEntityRefParameterized() override;

            OPENSCENARIOLIB_EXP bool IsFreespaceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITimeOfDay. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITimeOfDay)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayImpl: public BaseImpl, public ITimeOfDayWriter, public std::enable_shared_from_this<TimeOfDayImpl> 
        {
        private:
            bool _animation {};
            DateTime _dateTime {};
        public:

            OPENSCENARIOLIB_EXP TimeOfDayImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetAnimation() const override;
            OPENSCENARIOLIB_EXP DateTime GetDateTime() const override;


            OPENSCENARIOLIB_EXP void SetAnimation(const bool animation) override;

            OPENSCENARIOLIB_EXP void SetDateTime(const DateTime dateTime) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToAnimation(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDateTime(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromAnimation() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDateTime() const override;

            OPENSCENARIOLIB_EXP bool IsAnimationParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDateTimeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITimeOfDayCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITimeOfDayCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayConditionImpl: public BaseImpl, public ITimeOfDayConditionWriter, public std::enable_shared_from_this<TimeOfDayConditionImpl> 
        {
        private:
            DateTime _dateTime {};
            Rule _rule {};
        public:

            OPENSCENARIOLIB_EXP TimeOfDayConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP DateTime GetDateTime() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;


            OPENSCENARIOLIB_EXP void SetDateTime(const DateTime dateTime) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDateTime(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDateTime() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP bool IsDateTimeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITimeReference. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITimeReference)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeReferenceImpl: public BaseImpl, public ITimeReferenceWriter, public std::enable_shared_from_this<TimeReferenceImpl> 
        {
        private:
            std::shared_ptr<INoneWriter> _none {};
            std::shared_ptr<ITimingWriter> _timing {};
        public:

            OPENSCENARIOLIB_EXP TimeReferenceImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INone> GetNone() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITiming> GetTiming() const override;


            OPENSCENARIOLIB_EXP void SetNone(std::shared_ptr<INoneWriter> none) override;

            OPENSCENARIOLIB_EXP void SetTiming(std::shared_ptr<ITimingWriter> timing) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<INoneWriter> GetWriterNone() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimingWriter> GetWriterTiming() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITimeToCollisionCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITimeToCollisionCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionImpl: public BaseImpl, public ITimeToCollisionConditionWriter, public std::enable_shared_from_this<TimeToCollisionConditionImpl> 
        {
        private:
            bool _alongRoute {};
            bool _freespace {};
            Rule _rule {};
            double _value {};
            std::shared_ptr<ITimeToCollisionConditionTargetWriter> _timeToCollisionConditionTarget {};
        public:

            OPENSCENARIOLIB_EXP TimeToCollisionConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetAlongRoute() const override;
            OPENSCENARIOLIB_EXP bool GetFreespace() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeToCollisionConditionTarget> GetTimeToCollisionConditionTarget() const override;


            OPENSCENARIOLIB_EXP void SetAlongRoute(const bool alongRoute) override;

            OPENSCENARIOLIB_EXP void SetFreespace(const bool freespace) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void SetTimeToCollisionConditionTarget(std::shared_ptr<ITimeToCollisionConditionTargetWriter> timeToCollisionConditionTarget) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToAlongRoute(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFreespace(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromAlongRoute() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFreespace() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsAlongRouteParameterized() override;

            OPENSCENARIOLIB_EXP bool IsFreespaceParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeToCollisionConditionTargetWriter> GetWriterTimeToCollisionConditionTarget() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITimeToCollisionConditionTarget. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITimeToCollisionConditionTarget)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionTargetImpl: public BaseImpl, public ITimeToCollisionConditionTargetWriter, public std::enable_shared_from_this<TimeToCollisionConditionTargetImpl> 
        {
        private:
            std::shared_ptr<IPositionWriter> _position {};
            std::shared_ptr<IEntityRefWriter> _entityRef {};
        public:

            OPENSCENARIOLIB_EXP TimeToCollisionConditionTargetImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRef> GetEntityRef() const override;


            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void SetEntityRef(std::shared_ptr<IEntityRefWriter> entityRef) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRefWriter> GetWriterEntityRef() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITiming. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITiming)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimingImpl: public BaseImpl, public ITimingWriter, public std::enable_shared_from_this<TimingImpl> 
        {
        private:
            ReferenceContext _domainAbsoluteRelative {};
            double _offset {};
            double _scale {};
        public:

            OPENSCENARIOLIB_EXP TimingImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP ReferenceContext GetDomainAbsoluteRelative() const override;
            OPENSCENARIOLIB_EXP double GetOffset() const override;
            OPENSCENARIOLIB_EXP double GetScale() const override;


            OPENSCENARIOLIB_EXP void SetDomainAbsoluteRelative(const ReferenceContext domainAbsoluteRelative) override;

            OPENSCENARIOLIB_EXP void SetOffset(const double offset) override;

            OPENSCENARIOLIB_EXP void SetScale(const double scale) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDomainAbsoluteRelative(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToOffset(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToScale(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDomainAbsoluteRelative() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromOffset() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromScale() const override;

            OPENSCENARIOLIB_EXP bool IsDomainAbsoluteRelativeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsOffsetParameterized() override;

            OPENSCENARIOLIB_EXP bool IsScaleParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficActionImpl: public BaseImpl, public ITrafficActionWriter, public std::enable_shared_from_this<TrafficActionImpl> 
        {
        private:
            std::shared_ptr<ITrafficSourceActionWriter> _trafficSourceAction {};
            std::shared_ptr<ITrafficSinkActionWriter> _trafficSinkAction {};
            std::shared_ptr<ITrafficSwarmActionWriter> _trafficSwarmAction {};
        public:

            OPENSCENARIOLIB_EXP TrafficActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSourceAction> GetTrafficSourceAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSinkAction> GetTrafficSinkAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSwarmAction> GetTrafficSwarmAction() const override;


            OPENSCENARIOLIB_EXP void SetTrafficSourceAction(std::shared_ptr<ITrafficSourceActionWriter> trafficSourceAction) override;

            OPENSCENARIOLIB_EXP void SetTrafficSinkAction(std::shared_ptr<ITrafficSinkActionWriter> trafficSinkAction) override;

            OPENSCENARIOLIB_EXP void SetTrafficSwarmAction(std::shared_ptr<ITrafficSwarmActionWriter> trafficSwarmAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSourceActionWriter> GetWriterTrafficSourceAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSinkActionWriter> GetWriterTrafficSinkAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSwarmActionWriter> GetWriterTrafficSwarmAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficDefinition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficDefinition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficDefinitionImpl: public BaseImpl, public ITrafficDefinitionWriter, public std::enable_shared_from_this<TrafficDefinitionImpl> 
        {
        private:
            std::string _name {};
            std::shared_ptr<IVehicleCategoryDistributionWriter> _vehicleCategoryDistribution {};
            std::shared_ptr<IControllerDistributionWriter> _controllerDistribution {};
        public:

            OPENSCENARIOLIB_EXP TrafficDefinitionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCategoryDistribution> GetVehicleCategoryDistribution() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerDistribution> GetControllerDistribution() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetVehicleCategoryDistribution(std::shared_ptr<IVehicleCategoryDistributionWriter> vehicleCategoryDistribution) override;

            OPENSCENARIOLIB_EXP void SetControllerDistribution(std::shared_ptr<IControllerDistributionWriter> controllerDistribution) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCategoryDistributionWriter> GetWriterVehicleCategoryDistribution() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerDistributionWriter> GetWriterControllerDistribution() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalActionImpl: public BaseImpl, public ITrafficSignalActionWriter, public std::enable_shared_from_this<TrafficSignalActionImpl> 
        {
        private:
            std::shared_ptr<ITrafficSignalControllerActionWriter> _trafficSignalControllerAction {};
            std::shared_ptr<ITrafficSignalStateActionWriter> _trafficSignalStateAction {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerAction> GetTrafficSignalControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalStateAction> GetTrafficSignalStateAction() const override;


            OPENSCENARIOLIB_EXP void SetTrafficSignalControllerAction(std::shared_ptr<ITrafficSignalControllerActionWriter> trafficSignalControllerAction) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalStateAction(std::shared_ptr<ITrafficSignalStateActionWriter> trafficSignalStateAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerActionWriter> GetWriterTrafficSignalControllerAction() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalStateActionWriter> GetWriterTrafficSignalStateAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalConditionImpl: public BaseImpl, public ITrafficSignalConditionWriter, public std::enable_shared_from_this<TrafficSignalConditionImpl> 
        {
        private:
            std::string _name {};
            std::string _state {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::string GetState() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetState(const std::string state) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToState(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromState() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsStateParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalController. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalController)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerImpl: public BaseImpl, public ITrafficSignalControllerWriter, public std::enable_shared_from_this<TrafficSignalControllerImpl> 
        {
        private:
            double _delay {};
            std::string _name {};
            std::string _reference {};
            std::vector<std::shared_ptr<IPhaseWriter>> _phases {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalControllerImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetDelay() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::string GetReference() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPhase>> GetPhases() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPhaseWriter>> GetWriterPhases() const override;
            OPENSCENARIOLIB_EXP int GetPhasesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPhase> GetPhasesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetDelay(const double delay) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetReference(const std::string reference) override;

            OPENSCENARIOLIB_EXP void SetPhases(std::vector<std::shared_ptr<IPhaseWriter>>& phases) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDelay(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToReference(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDelay() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromReference() const override;

            OPENSCENARIOLIB_EXP bool IsDelayParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsReferenceParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalControllerAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalControllerAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerActionImpl: public BaseImpl, public ITrafficSignalControllerActionWriter, public std::enable_shared_from_this<TrafficSignalControllerActionImpl> 
        {
        private:
            std::string _phase {};
            std::shared_ptr<INamedReference<ITrafficSignalController>> _trafficSignalControllerRef {};
            std::vector<std::shared_ptr<IPhase>> _phaseRef {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalControllerActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetPhase() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<ITrafficSignalController>> GetTrafficSignalControllerRef() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPhase>> GetPhaseRef() const override;

            OPENSCENARIOLIB_EXP int GetPhaseRefSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPhase> GetPhaseRefAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetPhase(const std::string phase) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalControllerRef(std::shared_ptr<INamedReference<ITrafficSignalController>> trafficSignalControllerRef) override;

            OPENSCENARIOLIB_EXP void SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPhase(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTrafficSignalControllerRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPhase() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTrafficSignalControllerRef() const override;

            OPENSCENARIOLIB_EXP bool IsPhaseParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTrafficSignalControllerRefParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalControllerCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalControllerCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerConditionImpl: public BaseImpl, public ITrafficSignalControllerConditionWriter, public std::enable_shared_from_this<TrafficSignalControllerConditionImpl> 
        {
        private:
            std::string _phase {};
            std::shared_ptr<INamedReference<ITrafficSignalController>> _trafficSignalControllerRef {};
            std::vector<std::shared_ptr<IPhase>> _phaseRef {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalControllerConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetPhase() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<ITrafficSignalController>> GetTrafficSignalControllerRef() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IPhase>> GetPhaseRef() const override;

            OPENSCENARIOLIB_EXP int GetPhaseRefSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPhase> GetPhaseRefAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetPhase(const std::string phase) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalControllerRef(std::shared_ptr<INamedReference<ITrafficSignalController>> trafficSignalControllerRef) override;

            OPENSCENARIOLIB_EXP void SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToPhase(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTrafficSignalControllerRef(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromPhase() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTrafficSignalControllerRef() const override;

            OPENSCENARIOLIB_EXP bool IsPhaseParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTrafficSignalControllerRefParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalState. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalState)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateImpl: public BaseImpl, public ITrafficSignalStateWriter, public std::enable_shared_from_this<TrafficSignalStateImpl> 
        {
        private:
            std::string _state {};
            std::string _trafficSignalId {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalStateImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetState() const override;
            OPENSCENARIOLIB_EXP std::string GetTrafficSignalId() const override;


            OPENSCENARIOLIB_EXP void SetState(const std::string state) override;

            OPENSCENARIOLIB_EXP void SetTrafficSignalId(const std::string trafficSignalId) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToState(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTrafficSignalId(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromState() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTrafficSignalId() const override;

            OPENSCENARIOLIB_EXP bool IsStateParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTrafficSignalIdParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSignalStateAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSignalStateAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateActionImpl: public BaseImpl, public ITrafficSignalStateActionWriter, public std::enable_shared_from_this<TrafficSignalStateActionImpl> 
        {
        private:
            std::string _name {};
            std::string _state {};
        public:

            OPENSCENARIOLIB_EXP TrafficSignalStateActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::string GetState() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetState(const std::string state) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToState(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromState() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsStateParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSinkAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSinkAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSinkActionImpl: public BaseImpl, public ITrafficSinkActionWriter, public std::enable_shared_from_this<TrafficSinkActionImpl> 
        {
        private:
            double _radius {};
            double _rate {};
            std::shared_ptr<IPositionWriter> _position {};
            std::shared_ptr<ITrafficDefinitionWriter> _trafficDefinition {};
        public:

            OPENSCENARIOLIB_EXP TrafficSinkActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetRadius() const override;
            OPENSCENARIOLIB_EXP double GetRate() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() const override;


            OPENSCENARIOLIB_EXP void SetRadius(const double radius) override;

            OPENSCENARIOLIB_EXP void SetRate(const double rate) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void SetTrafficDefinition(std::shared_ptr<ITrafficDefinitionWriter> trafficDefinition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRadius(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRate(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRadius() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRate() const override;

            OPENSCENARIOLIB_EXP bool IsRadiusParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRateParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinitionWriter> GetWriterTrafficDefinition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSourceAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSourceAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSourceActionImpl: public BaseImpl, public ITrafficSourceActionWriter, public std::enable_shared_from_this<TrafficSourceActionImpl> 
        {
        private:
            double _radius {};
            double _rate {};
            double _velocity {};
            std::shared_ptr<IPositionWriter> _position {};
            std::shared_ptr<ITrafficDefinitionWriter> _trafficDefinition {};
        public:

            OPENSCENARIOLIB_EXP TrafficSourceActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetRadius() const override;
            OPENSCENARIOLIB_EXP double GetRate() const override;
            OPENSCENARIOLIB_EXP double GetVelocity() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() const override;


            OPENSCENARIOLIB_EXP void SetRadius(const double radius) override;

            OPENSCENARIOLIB_EXP void SetRate(const double rate) override;

            OPENSCENARIOLIB_EXP void SetVelocity(const double velocity) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void SetTrafficDefinition(std::shared_ptr<ITrafficDefinitionWriter> trafficDefinition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRadius(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRate(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToVelocity(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRadius() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRate() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromVelocity() const override;

            OPENSCENARIOLIB_EXP bool IsRadiusParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRateParameterized() override;

            OPENSCENARIOLIB_EXP bool IsVelocityParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinitionWriter> GetWriterTrafficDefinition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrafficSwarmAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrafficSwarmAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSwarmActionImpl: public BaseImpl, public ITrafficSwarmActionWriter, public std::enable_shared_from_this<TrafficSwarmActionImpl> 
        {
        private:
            double _innerRadius {};
            uint32_t _numberOfVehicles {};
            double _offset {};
            double _semiMajorAxis {};
            double _semiMinorAxis {};
            double _velocity {};
            std::shared_ptr<ICentralSwarmObjectWriter> _centralObject {};
            std::shared_ptr<ITrafficDefinitionWriter> _trafficDefinition {};
        public:

            OPENSCENARIOLIB_EXP TrafficSwarmActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetInnerRadius() const override;
            OPENSCENARIOLIB_EXP uint32_t GetNumberOfVehicles() const override;
            OPENSCENARIOLIB_EXP double GetOffset() const override;
            OPENSCENARIOLIB_EXP double GetSemiMajorAxis() const override;
            OPENSCENARIOLIB_EXP double GetSemiMinorAxis() const override;
            OPENSCENARIOLIB_EXP double GetVelocity() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ICentralSwarmObject> GetCentralObject() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() const override;


            OPENSCENARIOLIB_EXP void SetInnerRadius(const double innerRadius) override;

            OPENSCENARIOLIB_EXP void SetNumberOfVehicles(const uint32_t numberOfVehicles) override;

            OPENSCENARIOLIB_EXP void SetOffset(const double offset) override;

            OPENSCENARIOLIB_EXP void SetSemiMajorAxis(const double semiMajorAxis) override;

            OPENSCENARIOLIB_EXP void SetSemiMinorAxis(const double semiMinorAxis) override;

            OPENSCENARIOLIB_EXP void SetVelocity(const double velocity) override;

            OPENSCENARIOLIB_EXP void SetCentralObject(std::shared_ptr<ICentralSwarmObjectWriter> centralObject) override;

            OPENSCENARIOLIB_EXP void SetTrafficDefinition(std::shared_ptr<ITrafficDefinitionWriter> trafficDefinition) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToInnerRadius(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToNumberOfVehicles(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToOffset(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToSemiMajorAxis(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToSemiMinorAxis(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToVelocity(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromInnerRadius() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromNumberOfVehicles() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromOffset() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromSemiMajorAxis() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromSemiMinorAxis() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromVelocity() const override;

            OPENSCENARIOLIB_EXP bool IsInnerRadiusParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNumberOfVehiclesParameterized() override;

            OPENSCENARIOLIB_EXP bool IsOffsetParameterized() override;

            OPENSCENARIOLIB_EXP bool IsSemiMajorAxisParameterized() override;

            OPENSCENARIOLIB_EXP bool IsSemiMinorAxisParameterized() override;

            OPENSCENARIOLIB_EXP bool IsVelocityParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICentralSwarmObjectWriter> GetWriterCentralObject() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinitionWriter> GetWriterTrafficDefinition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrajectory. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrajectory)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryImpl: public BaseImpl, public ITrajectoryWriter, public std::enable_shared_from_this<TrajectoryImpl> 
        {
        private:
            bool _closed {};
            std::string _name {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<IShapeWriter> _shape {};
        public:

            OPENSCENARIOLIB_EXP TrajectoryImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetClosed() const override;
            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IShape> GetShape() const override;


            OPENSCENARIOLIB_EXP void SetClosed(const bool closed) override;

            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetShape(std::shared_ptr<IShapeWriter> shape) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToClosed(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromClosed() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP bool IsClosedParameterized() override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IShapeWriter> GetWriterShape() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrajectoryCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrajectoryCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryCatalogLocationImpl: public BaseImpl, public ITrajectoryCatalogLocationWriter, public std::enable_shared_from_this<TrajectoryCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP TrajectoryCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrajectoryFollowingMode. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrajectoryFollowingMode)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryFollowingModeImpl: public BaseImpl, public ITrajectoryFollowingModeWriter, public std::enable_shared_from_this<TrajectoryFollowingModeImpl> 
        {
        private:
            FollowingMode _followingMode {};
        public:

            OPENSCENARIOLIB_EXP TrajectoryFollowingModeImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP FollowingMode GetFollowingMode() const override;


            OPENSCENARIOLIB_EXP void SetFollowingMode(const FollowingMode followingMode) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToFollowingMode(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromFollowingMode() const override;

            OPENSCENARIOLIB_EXP bool IsFollowingModeParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITransitionDynamics. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITransitionDynamics)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TransitionDynamicsImpl: public BaseImpl, public ITransitionDynamicsWriter, public std::enable_shared_from_this<TransitionDynamicsImpl> 
        {
        private:
            DynamicsDimension _dynamicsDimension {};
            DynamicsShape _dynamicsShape {};
            double _value {};
        public:

            OPENSCENARIOLIB_EXP TransitionDynamicsImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP DynamicsDimension GetDynamicsDimension() const override;
            OPENSCENARIOLIB_EXP DynamicsShape GetDynamicsShape() const override;
            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetDynamicsDimension(const DynamicsDimension dynamicsDimension) override;

            OPENSCENARIOLIB_EXP void SetDynamicsShape(const DynamicsShape dynamicsShape) override;

            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDynamicsDimension(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToDynamicsShape(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDynamicsDimension() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromDynamicsShape() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsDynamicsDimensionParameterized() override;

            OPENSCENARIOLIB_EXP bool IsDynamicsShapeParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITraveledDistanceCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITraveledDistanceCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TraveledDistanceConditionImpl: public BaseImpl, public ITraveledDistanceConditionWriter, public std::enable_shared_from_this<TraveledDistanceConditionImpl> 
        {
        private:
            double _value {};
        public:

            OPENSCENARIOLIB_EXP TraveledDistanceConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetValue() const override;


            OPENSCENARIOLIB_EXP void SetValue(const double value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITrigger. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITrigger)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggerImpl: public BaseImpl, public ITriggerWriter, public std::enable_shared_from_this<TriggerImpl> 
        {
        private:
            std::vector<std::shared_ptr<IConditionGroupWriter>> _conditionGroups {};
        public:

            OPENSCENARIOLIB_EXP TriggerImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IConditionGroup>> GetConditionGroups() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IConditionGroupWriter>> GetWriterConditionGroups() const override;
            OPENSCENARIOLIB_EXP int GetConditionGroupsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IConditionGroup> GetConditionGroupsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetConditionGroups(std::vector<std::shared_ptr<IConditionGroupWriter>>& conditionGroups) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements ITriggeringEntities. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of ITriggeringEntities)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggeringEntitiesImpl: public BaseImpl, public ITriggeringEntitiesWriter, public std::enable_shared_from_this<TriggeringEntitiesImpl> 
        {
        private:
            TriggeringEntitiesRule _triggeringEntitiesRule {};
            std::vector<std::shared_ptr<IEntityRefWriter>> _entityRefs {};
        public:

            OPENSCENARIOLIB_EXP TriggeringEntitiesImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP TriggeringEntitiesRule GetTriggeringEntitiesRule() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IEntityRefWriter>> GetWriterEntityRefs() const override;
            OPENSCENARIOLIB_EXP int GetEntityRefsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRef> GetEntityRefsAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetTriggeringEntitiesRule(const TriggeringEntitiesRule triggeringEntitiesRule) override;

            OPENSCENARIOLIB_EXP void SetEntityRefs(std::vector<std::shared_ptr<IEntityRefWriter>>& entityRefs) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTriggeringEntitiesRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTriggeringEntitiesRule() const override;

            OPENSCENARIOLIB_EXP bool IsTriggeringEntitiesRuleParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IUserDefinedAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IUserDefinedAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedActionImpl: public BaseImpl, public IUserDefinedActionWriter, public std::enable_shared_from_this<UserDefinedActionImpl> 
        {
        private:
            std::shared_ptr<ICustomCommandActionWriter> _customCommandAction {};
        public:

            OPENSCENARIOLIB_EXP UserDefinedActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICustomCommandAction> GetCustomCommandAction() const override;


            OPENSCENARIOLIB_EXP void SetCustomCommandAction(std::shared_ptr<ICustomCommandActionWriter> customCommandAction) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ICustomCommandActionWriter> GetWriterCustomCommandAction() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IUserDefinedValueCondition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IUserDefinedValueCondition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedValueConditionImpl: public BaseImpl, public IUserDefinedValueConditionWriter, public std::enable_shared_from_this<UserDefinedValueConditionImpl> 
        {
        private:
            std::string _name {};
            Rule _rule {};
            std::string _value {};
        public:

            OPENSCENARIOLIB_EXP UserDefinedValueConditionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP Rule GetRule() const override;
            OPENSCENARIOLIB_EXP std::string GetValue() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetRule(const Rule rule) override;

            OPENSCENARIOLIB_EXP void SetValue(const std::string value) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRule(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToValue(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRule() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromValue() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRuleParameterized() override;

            OPENSCENARIOLIB_EXP bool IsValueParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IVehicle. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IVehicle)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleImpl: public BaseImpl, public IVehicleWriter, public std::enable_shared_from_this<VehicleImpl> 
        {
        private:
            std::string _name {};
            VehicleCategory _vehicleCategory {};
            std::vector<std::shared_ptr<IParameterDeclarationWriter>> _parameterDeclarations {};
            std::shared_ptr<IBoundingBoxWriter> _boundingBox {};
            std::shared_ptr<IPerformanceWriter> _performance {};
            std::shared_ptr<IAxlesWriter> _axles {};
            std::shared_ptr<IPropertiesWriter> _properties {};
        public:

            OPENSCENARIOLIB_EXP VehicleImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::string GetName() const override;
            OPENSCENARIOLIB_EXP VehicleCategory GetVehicleCategory() const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const override;
            OPENSCENARIOLIB_EXP int GetParameterDeclarationsSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(unsigned int index) const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBox> GetBoundingBox() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPerformance> GetPerformance() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAxles> GetAxles() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IProperties> GetProperties() const override;


            OPENSCENARIOLIB_EXP void SetName(const std::string name) override;

            OPENSCENARIOLIB_EXP void SetVehicleCategory(const VehicleCategory vehicleCategory) override;

            OPENSCENARIOLIB_EXP void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations) override;

            OPENSCENARIOLIB_EXP void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox) override;

            OPENSCENARIOLIB_EXP void SetPerformance(std::shared_ptr<IPerformanceWriter> performance) override;

            OPENSCENARIOLIB_EXP void SetAxles(std::shared_ptr<IAxlesWriter> axles) override;

            OPENSCENARIOLIB_EXP void SetProperties(std::shared_ptr<IPropertiesWriter> properties) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToName(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToVehicleCategory(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromName() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromVehicleCategory() const override;

            OPENSCENARIOLIB_EXP bool IsNameParameterized() override;

            OPENSCENARIOLIB_EXP bool IsVehicleCategoryParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPerformanceWriter> GetWriterPerformance() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IAxlesWriter> GetWriterAxles() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertiesWriter> GetWriterProperties() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IVehicleCatalogLocation. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IVehicleCatalogLocation)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCatalogLocationImpl: public BaseImpl, public IVehicleCatalogLocationWriter, public std::enable_shared_from_this<VehicleCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<IDirectoryWriter> _directory {};
        public:

            OPENSCENARIOLIB_EXP VehicleCatalogLocationImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectory> GetDirectory() const override;


            OPENSCENARIOLIB_EXP void SetDirectory(std::shared_ptr<IDirectoryWriter> directory) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IVehicleCategoryDistribution. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IVehicleCategoryDistribution)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionImpl: public BaseImpl, public IVehicleCategoryDistributionWriter, public std::enable_shared_from_this<VehicleCategoryDistributionImpl> 
        {
        private:
            std::vector<std::shared_ptr<IVehicleCategoryDistributionEntryWriter>> _vehicleCategoryDistributionEntries {};
        public:

            OPENSCENARIOLIB_EXP VehicleCategoryDistributionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> GetVehicleCategoryDistributionEntries() const override;

            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IVehicleCategoryDistributionEntryWriter>> GetWriterVehicleCategoryDistributionEntries() const override;
            OPENSCENARIOLIB_EXP int GetVehicleCategoryDistributionEntriesSize() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCategoryDistributionEntry> GetVehicleCategoryDistributionEntriesAtIndex(unsigned int index) const override;


            OPENSCENARIOLIB_EXP void SetVehicleCategoryDistributionEntries(std::vector<std::shared_ptr<IVehicleCategoryDistributionEntryWriter>>& vehicleCategoryDistributionEntries) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IVehicleCategoryDistributionEntry. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IVehicleCategoryDistributionEntry)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionEntryImpl: public BaseImpl, public IVehicleCategoryDistributionEntryWriter, public std::enable_shared_from_this<VehicleCategoryDistributionEntryImpl> 
        {
        private:
            VehicleCategory _category {};
            double _weight {};
        public:

            OPENSCENARIOLIB_EXP VehicleCategoryDistributionEntryImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP VehicleCategory GetCategory() const override;
            OPENSCENARIOLIB_EXP double GetWeight() const override;


            OPENSCENARIOLIB_EXP void SetCategory(const VehicleCategory category) override;

            OPENSCENARIOLIB_EXP void SetWeight(const double weight) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToCategory(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToWeight(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromCategory() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromWeight() const override;

            OPENSCENARIOLIB_EXP bool IsCategoryParameterized() override;

            OPENSCENARIOLIB_EXP bool IsWeightParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IVertex. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IVertex)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VertexImpl: public BaseImpl, public IVertexWriter, public std::enable_shared_from_this<VertexImpl> 
        {
        private:
            double _time {};
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP VertexImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetTime() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetTime(const double time) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTime(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTime() const override;

            OPENSCENARIOLIB_EXP bool IsTimeParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IVisibilityAction. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IVisibilityAction)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VisibilityActionImpl: public BaseImpl, public IVisibilityActionWriter, public std::enable_shared_from_this<VisibilityActionImpl> 
        {
        private:
            bool _graphics {};
            bool _sensors {};
            bool _traffic {};
        public:

            OPENSCENARIOLIB_EXP VisibilityActionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP bool GetGraphics() const override;
            OPENSCENARIOLIB_EXP bool GetSensors() const override;
            OPENSCENARIOLIB_EXP bool GetTraffic() const override;


            OPENSCENARIOLIB_EXP void SetGraphics(const bool graphics) override;

            OPENSCENARIOLIB_EXP void SetSensors(const bool sensors) override;

            OPENSCENARIOLIB_EXP void SetTraffic(const bool traffic) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToGraphics(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToSensors(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToTraffic(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromGraphics() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromSensors() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromTraffic() const override;

            OPENSCENARIOLIB_EXP bool IsGraphicsParameterized() override;

            OPENSCENARIOLIB_EXP bool IsSensorsParameterized() override;

            OPENSCENARIOLIB_EXP bool IsTrafficParameterized() override;

            // children
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IWaypoint. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IWaypoint)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WaypointImpl: public BaseImpl, public IWaypointWriter, public std::enable_shared_from_this<WaypointImpl> 
        {
        private:
            RouteStrategy _routeStrategy {};
            std::shared_ptr<IPositionWriter> _position {};
        public:

            OPENSCENARIOLIB_EXP WaypointImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP RouteStrategy GetRouteStrategy() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPosition> GetPosition() const override;


            OPENSCENARIOLIB_EXP void SetRouteStrategy(const RouteStrategy routeStrategy) override;

            OPENSCENARIOLIB_EXP void SetPosition(std::shared_ptr<IPositionWriter> position) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToRouteStrategy(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromRouteStrategy() const override;

            OPENSCENARIOLIB_EXP bool IsRouteStrategyParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> GetWriterPosition() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IWeather. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IWeather)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WeatherImpl: public BaseImpl, public IWeatherWriter, public std::enable_shared_from_this<WeatherImpl> 
        {
        private:
            CloudState _cloudState {};
            std::shared_ptr<ISunWriter> _sun {};
            std::shared_ptr<IFogWriter> _fog {};
            std::shared_ptr<IPrecipitationWriter> _precipitation {};
        public:

            OPENSCENARIOLIB_EXP WeatherImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP CloudState GetCloudState() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<ISun> GetSun() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFog> GetFog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPrecipitation> GetPrecipitation() const override;


            OPENSCENARIOLIB_EXP void SetCloudState(const CloudState cloudState) override;

            OPENSCENARIOLIB_EXP void SetSun(std::shared_ptr<ISunWriter> sun) override;

            OPENSCENARIOLIB_EXP void SetFog(std::shared_ptr<IFogWriter> fog) override;

            OPENSCENARIOLIB_EXP void SetPrecipitation(std::shared_ptr<IPrecipitationWriter> precipitation) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToCloudState(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromCloudState() const override;

            OPENSCENARIOLIB_EXP bool IsCloudStateParameterized() override;

            // children
            OPENSCENARIOLIB_EXP std::shared_ptr<ISunWriter> GetWriterSun() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IFogWriter> GetWriterFog() const override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IPrecipitationWriter> GetWriterPrecipitation() const override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * Value class that implements IWorldPosition. With setter methods to fill the properties.
         * <ul>
         * <li> getter methods for properties (implemented methods of IWorldPosition)
         * <li> setter methods for properties
         * <li> getChildren method to collect all children
         * <li> clone function to make a deep copy
         * <li> overrides from BaseImpl
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WorldPositionImpl: public BaseImpl, public IWorldPositionWriter, public std::enable_shared_from_this<WorldPositionImpl> 
        {
        private:
            double _h {};
            double _p {};
            double _r {};
            double _x {};
            double _y {};
            double _z {};
        public:

            OPENSCENARIOLIB_EXP WorldPositionImpl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

            OPENSCENARIOLIB_EXP double GetH() const override;
            OPENSCENARIOLIB_EXP double GetP() const override;
            OPENSCENARIOLIB_EXP double GetR() const override;
            OPENSCENARIOLIB_EXP double GetX() const override;
            OPENSCENARIOLIB_EXP double GetY() const override;
            OPENSCENARIOLIB_EXP double GetZ() const override;


            OPENSCENARIOLIB_EXP void SetH(const double h) override;

            OPENSCENARIOLIB_EXP void SetP(const double p) override;

            OPENSCENARIOLIB_EXP void SetR(const double r) override;

            OPENSCENARIOLIB_EXP void SetX(const double x) override;

            OPENSCENARIOLIB_EXP void SetY(const double y) override;

            OPENSCENARIOLIB_EXP void SetZ(const double z) override;

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;


            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

            OPENSCENARIOLIB_EXP  void WriteParameterToH(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToP(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToR(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToX(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToY(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP  void WriteParameterToZ(std::string& parameterName) override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromH() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromP() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromR() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromX() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromY() const override;

            OPENSCENARIOLIB_EXP std::string GetParameterFromZ() const override;

            OPENSCENARIOLIB_EXP bool IsHParameterized() override;

            OPENSCENARIOLIB_EXP bool IsPParameterized() override;

            OPENSCENARIOLIB_EXP bool IsRParameterized() override;

            OPENSCENARIOLIB_EXP bool IsXParameterized() override;

            OPENSCENARIOLIB_EXP bool IsYParameterized() override;

            OPENSCENARIOLIB_EXP bool IsZParameterized() override;

            // children
        };


    }
}
