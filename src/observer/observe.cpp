#include "notification.h"
#include "observe.h"

int observe::nof_instances = 0;

observe::observe(subject &s)
    : subject_(s)
    , number_(++observe::nof_instances)
{
	this->subject_.attach(this);
}

observe::~observe() = default;

void
observe::update(notification_t notification)
{
	this->notification_ = notification;
}

void
observe::detach_from_list()
{
	this->subject_.detach(this);
}

auto
observe::get_latest_notification() const -> notification_t
{
	return this->notification_;
}

auto
observe::get_number_of_instances() const -> int
{
	return observe::nof_instances;
}
