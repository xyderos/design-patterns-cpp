#pragma once

#include "component.h"

// default implementation of operations
class concrete : public component {

    public:
	[[nodiscard]] auto message() const -> std::string override;
};
