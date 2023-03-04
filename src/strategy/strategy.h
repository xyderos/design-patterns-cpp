#pragma once

#include <string>

// define common operations for the implementation code
class strategy {
    public:
	virtual ~strategy() = default;
	[[nodiscard]] virtual auto calculate(const std::string &data) const
	    -> std::string = 0;
};
