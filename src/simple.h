#pragma once

#include "command.h"

// simple operations that can be handled on their own
class simple : public command {
    private:
	std::string payload;

    public:
	explicit simple(std::string pl);
	[[nodiscard]] auto execute() const -> std::string override;
};
