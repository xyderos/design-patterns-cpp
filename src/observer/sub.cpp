#include "notification.h"
#include "observer.h"
#include "sub.h"

#include <algorithm>
#include <utility>

sub::~sub() = default;

void
sub::attach(observer *o)
{
	list_observer_.push_back(o);
}

void
sub::detach(observer *o)
{
	list_observer_.remove(o);
}

void
sub::notify()
{
	for (const auto &e : this->list_observer_) {
		e->update(this->notification_);
	}
}
void
sub::make_message(notification_t notification)
{
	this->notification_ = notification;
	notify();
}

void
sub::business_logic(notification_t notification)
{
	this->notification_ = notification;
	make_message(notification);
}
