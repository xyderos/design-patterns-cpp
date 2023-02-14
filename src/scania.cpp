#include "scania.h"

std::string
scania::to_string() const
{
	return "scania";
}

std::string
scania::what_am_I_carrying(const car &cargo) const
{
	const std::string result = cargo.to_string();
	return "scania x " + result;
}