#include "another_component.h"
#include "notification.h"

auto
another_component::business_logic() const -> notification_t
{
	return notification_t::ANOTHER_COMPONENT;
}
