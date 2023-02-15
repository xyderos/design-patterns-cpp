#pragma once

#include "command.h"

class simple : public command {
    private:
	std::string payload;

    public:
	explicit simple(std::string pl);
	[[nodiscard]] auto execute() const -> std::string override;
};
