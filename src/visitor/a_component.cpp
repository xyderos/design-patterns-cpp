#include "a_component.h"
#include "notification.h"

auto
a_component::business_logic() const -> notification_t
{
	return notification_t::A_COMPONENT;
}

void
a_component::accept(visitor *visitor) const
{
	visitor->visit_a_component(this);
}
