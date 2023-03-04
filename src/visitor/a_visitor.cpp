#include "a_component.h"
#include "a_visitor.h"
#include "another_component.h"

void
a_visitor::visit_another_component(const another_component *element)
{
	this->notif_ = element->business_logic();
}

void
a_visitor::visit_a_component(const a_component *element)
{
	this->notif_ = element->business_logic();
}
