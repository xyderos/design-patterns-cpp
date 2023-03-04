#pragma once

#include <string>

// define the interface for the implementations.
class os {
    public:
	virtual ~os();
	[[nodiscard]] virtual auto name() const -> std::string = 0;
};
