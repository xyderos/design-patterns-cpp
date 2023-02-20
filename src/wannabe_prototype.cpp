#include "wannabe_prototype.h"

wannabe_prototype::wannabe_prototype(const std::string &a_string, int a_number)
    : prototype(a_string)
    , wannabe_field(a_number)
{
}

auto
wannabe_prototype::clone() const -> prototype *
{
	return new wannabe_prototype(*this);
}
