#pragma once

#include "notification.h"

#include <string>

class observer {
    public:
	virtual ~observer();
	virtual void update(notification_t notification) = 0;
};
