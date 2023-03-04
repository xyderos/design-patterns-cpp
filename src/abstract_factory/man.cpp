#include "man.h"

auto
man::to_string() const -> std::string
{
	return "man";
}

auto
man::what_am_I_carrying(const car &cargo) const -> std::string
{
	const std::string result = cargo.to_string();
	return "man x " + result;
}
