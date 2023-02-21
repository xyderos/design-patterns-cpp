#pragma once

#include "component.h"

// follows the same interface as the other components, a wrapping interface for
// all the decorators, can store a component and its initialization means
class decorator : public component {

    protected:
	component *comp;

    public:
	explicit decorator(component *);
	decorator(const decorator &);
	auto operator=(const decorator &) -> decorator &;

	[[nodiscard]] auto message() const -> std::string override;
};
