#include "either_component.h"
#include "notification.h"

void
either_compoment::bl1()
{
	this->mediator_->notify(this, notification_t::BUSINESS_LOGIC_1);
}

void
either_compoment::bl2()
{
	this->mediator_->notify(this, notification_t::BUSINESS_LOGIC_2);
}
