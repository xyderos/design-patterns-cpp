#include "coordinator.h"
#include "notification.h"

coordinator::coordinator(either_compoment *c1, other_compoment *c2)
    : co1(c1)
    , co2(c2)
    , latest_notification(NO_MESSAGE)
{
	this->co1->set_mediator(this);
	this->co2->set_mediator(this);
}

void
coordinator::notify(component * /*sender*/, notification_t event)
{
	switch (event) {
	case BUSINESS_LOGIC_1:
		this->co2->bl3();
		break;
	case BUSINESS_LOGIC_2:
		this->co2->bl4();
		break;
	case BUSINESS_LOGIC_3:
		this->latest_notification = notification_t::BUSINESS_LOGIC_3;
		break;
	case BUSINESS_LOGIC_4:
		this->latest_notification = notification_t::BUSINESS_LOGIC_4;
		break;
	case NO_MESSAGE:
		break;
	}
}

auto
coordinator::get_latest_notification() const -> notification_t
{
	return this->latest_notification;
}
