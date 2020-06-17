#pragma once
#include <string>

/**
 * Container for parameter values (name, type, value)
 */
namespace RAC_OPENSCENARIO
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
        ParameterValue(std::string& name, std::string& type, std::string& value) : _name(name), _type(type), _value(value) {}

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
        void SetValue(std::string& value) 
        {
            _value = value;
        }

    };
}