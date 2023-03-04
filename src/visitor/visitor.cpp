#include "visitor.h"

auto
visitor::get_notification() const -> notification_t
{
	return this->notif_;
}
