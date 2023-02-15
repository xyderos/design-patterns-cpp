#include "business_logic.h"

auto
business_logic::something(const std::string &a) -> std::string
{
	return "receiver:something:" + a;
}

auto
business_logic::something_else(const std::string &a) -> std::string
{
	return "receiver:something_else:" + a;
}
