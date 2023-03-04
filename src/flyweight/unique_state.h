#pragma once

#include <string>

class unique_state {
	std::string location, address;

    public:
	unique_state(const std::string &loc, const std::string &adr);
	unique_state(const unique_state &other);
	[[nodiscard]] auto to_string() const -> std::string;
};
