#pragma once

#include <string>

class car {
    public:
	std::string chassis;
	std::string engine;
	std::string firmware;

	car();

	const std::string to_string() const;
};