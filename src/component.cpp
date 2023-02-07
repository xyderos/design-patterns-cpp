#include "component.h"

component::component() : parent(nullptr)
{
}

component::component(const component &other) : parent(other.parent)
{
}

component &
component::operator=(const component &other)
{
	if(this == &other) return *this;

	this->parent = other.parent;

	return *this;
}

component::~component()
{
}

void
component::set_parent(component *p)
{
	this->parent = p;
}

component *
component::get_parent() const
{
	return this->parent;
}

void
component::add(component *c)
{
	c->is_composite();
}

void
component::remove(component *c)
{
	c->is_composite();
}

bool
component::is_composite() const
{
	return false;
}
