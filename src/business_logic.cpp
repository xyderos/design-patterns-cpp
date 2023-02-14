#include "business_logic.h"

std::string business_logic::something(const std::string &a)
{
    return "receiver:something:" + a;
}

std::string
business_logic::something_else(const std::string &a)
{
    return "receiver:something_else:" + a;
}