#include "another_component.h"
#include "notification.h"

void
another_component::accept(visitor *visitor) const
{
	visitor->visit_another_component(this);
}

auto
another_component::business_logic() const -> notification_t
{
	return notification_t::ANOTHER_COMPONENT;
}
