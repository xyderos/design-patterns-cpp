#pragma once

#include "component.h"
#include "notification.h"
#include "visitor.h"

#include <string>

class another_component : public component {
    public:
	void accept(visitor *visitor) const override
	{
		visitor->visit_another_component(this);
	}

	[[nodiscard]] auto business_logic() const -> notification_t;
};
