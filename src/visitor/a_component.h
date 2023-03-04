#pragma once

#include "component.h"
#include "notification.h"
#include "visitor.h"

#include <string>

// must implement the accept method in a way that it calls the visitors method
class a_component : public component {
    public:
	void accept(visitor *visitor) const override;

	[[nodiscard]] auto business_logic() const -> notification_t;
};
