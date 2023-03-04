#pragma once

#include "component.h"

// default implementation of operations
class concrete : public decorator_component {

    public:
	[[nodiscard]] auto message() const -> std::string override;
};
