#pragma once

#include "notification.h"

class component;

// define methods used by the components to notify the mediator
class mediator {
    public:
	virtual void notify(component *sender, notification_t event) = 0;
	[[nodiscard]] virtual auto get_latest_notification() const
	    -> notification_t = 0;
};
