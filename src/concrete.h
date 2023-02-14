#pragma once

#include "component.h"

class concrete : public component {

    public:
	std::string message() const override;
};