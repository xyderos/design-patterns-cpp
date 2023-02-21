#pragma once

#include <string>

// some business logic that is not compatible with our interface
class not_adapted {
    public:
	[[nodiscard]] auto message() const -> std::string;
};
