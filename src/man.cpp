#include "man.h"

std::string
man::to_string() const
{
	return "man";
}

std::string
man::what_am_I_carrying(const car &cargo) const
{
	const std::string result = cargo.to_string();
    return "man x " + result;
}