#pragma once

#include "notification.h"
#include "subject.h"

#include <list>

// implementation
class sub : public subject {

	std::list<observer *> list_observer_;
	notification_t notification_;

    public:
	~sub() override;

	void attach(observer *o) override;

	void detach(observer *o) override;

	void notify() override;

	void make_message(notification_t);

	void business_logic(notification_t);
};
