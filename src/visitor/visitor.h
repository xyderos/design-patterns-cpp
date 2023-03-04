#pragma once

#include "notification.h"
class a_component;
class another_component;

// define visiting methods on different components
class visitor {
    protected:
	notification_t notif_;

    public:
	virtual ~visitor() = default;
	virtual void visit_a_component(const a_component *element) = 0;
	virtual void visit_another_component(
	    const another_component *element) = 0;

	[[nodiscard]] auto get_notification() const -> notification_t;
};
