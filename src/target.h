#pragma once

#include <string>

class target {
    public:
	virtual ~target() = default;

	virtual std::string message() const;
};
