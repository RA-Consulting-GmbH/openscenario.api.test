#include <iostream>
#include "Enumerations.h"
#include "ErrorLevel.h"
#include "OscConstants.h"
#include "RangeCheckerHelper.h"
#include "ParserHelper.h"
#include "DateTime.h"
#include "WrappedListParser.h"


#define stringify( name ) # name

//class Temp
//{
//public:
//    int a = 10;
//
//    Temp(int test) :a(test) {}
//
//};
//
//void CreateNewTempObject(std::vector<Temp>& vec)
//{
//    vec.push_back(Temp(20));
//}

template <class T>
class Base
{
    void DoNothing (T& temp) {}
protected:
    int a = 10;

};

class Derived: public Base<int>
{
public:
    int GetA()
    {
        return a;
    }
};


int main()
{
    //std::string dateStr = "2004-01-50T00:00:10.05-05";
    //auto temp = RAC_OPENSCENARIO::ParserHelper::ParseDateTime(dateStr);
    //std::cout << std::put_time(temp.get(), "%c");
    //RAC_OPENSCENARIO::DateTime dateTime{};
    //std::cout << RAC_OPENSCENARIO::DateTimeParser::ToDateTime(dateStr, dateTime) << std::endl;
    //std::vector<Temp> vec;
    //CreateNewTempObject(vec);
    //CreateNewTempObject(vec);
    //CreateNewTempObject(vec);
    //CreateNewTempObject(vec);
    //CreateNewTempObject(vec);
    auto temp = std::make_shared<int>();

    temp = nullptr;
    if (temp)
    {
        int a = 10;
    }
    unsigned short b;
    //std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    //std::cout <<RAC_OPENSCENARIO::DateTimeParser::ToString(*temp)<<std::endl;
    std::cout << RAC_OPENSCENARIO::CloudState::GetFromLiteral("") <<std::endl;
    std::cout << RAC_OPENSCENARIO::CloudState::GetFromLiteral("skyOff") << std::endl;
}
