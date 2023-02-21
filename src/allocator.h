#pragma once

#include <string>

// accepts requests from either the facade or client code
class allocator {
    public:
	[[nodiscard]] auto before() const -> std::string;
	[[nodiscard]] auto after() const -> std::string;
};
