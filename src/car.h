#pragma once

#include <string>

class car {
    public:
	std::string chassis;
	std::string engine;
	std::string firmware;

	car();

	[[nodiscard]] auto to_string() const -> const std::string;
};