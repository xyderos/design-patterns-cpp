#pragma once

#include "notification.h"

#include <string>

// base interface that notifies the subscribers
class observer {
    public:
	virtual ~observer();
	virtual void update(notification_t notification) = 0;
};
