#pragma once

#include <string>

class shared_state {
	std::string first_name, last_name, personal_number;

    public:
	shared_state(std::string fname, std::string lname, std::string pn);
	shared_state(const shared_state &other);
	[[nodiscard]] auto to_string() const -> std::string;
};
