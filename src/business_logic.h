#pragma once

#include <string>

// essentailly the business logic that can handle requests comming from commands
class business_logic {
    public:
	auto something(const std::string &a) -> std::string;
	auto something_else(const std::string &a) -> std::string;
};
