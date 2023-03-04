#include "scania.h"

auto
scania::to_string() const -> std::string
{
	return "scania";
}

auto
scania::what_am_I_carrying(const factory_car &cargo) const -> std::string
{
	const std::string result = cargo.to_string();
	return "scania x " + result;
}
