#include "a_component.h"
#include "another_component.h"
#include "another_visitor.h"

void
another_visitor::visit_another_component(const another_component *element)
{
	this->notif_ = element->business_logic();
}

void
another_visitor::visit_a_component(const a_component *element)
{
	this->notif_ = element->business_logic();
}
