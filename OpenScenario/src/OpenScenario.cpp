#include <iostream>
#include "Enumerations.h"
#include "ErrorLevel.h"
#include "OscConstants.h"
#include "RangeCheckerHelper.h"
#include "ParserHelper.h"
#include "DateTime.h"


#define stringify( name ) # name

int main()
{
    std::string dateStr = "2004-01-50T00:00:10.05-05";
    auto temp = RAC_OPENSCENARIO::ParserHelper::ParseDateTime(dateStr);
    //std::cout << std::put_time(temp.get(), "%c");
    //RAC_OPENSCENARIO::DateTime dateTime{};
    //std::cout << RAC_OPENSCENARIO::DateTimeParser::ToDateTime(dateStr, dateTime) << std::endl;
    int a;
    unsigned short b;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    //std::cout <<RAC_OPENSCENARIO::DateTimeParser::ToString(*temp)<<std::endl;
    std::cout << RAC_OPENSCENARIO::CloudState::GetFromLiteral("") <<std::endl;
    std::cout << RAC_OPENSCENARIO::CloudState::GetFromLiteral("skyOff") << std::endl;
}
