#include "notification.h"
#include "other_component.h"

void
other_compoment::bl3()
{
	this->mediator_->notify(this, notification_t::BUSINESS_LOGIC_3);
}

void
other_compoment::bl4()
{
	this->mediator_->notify(this, notification_t::BUSINESS_LOGIC_4);
}
