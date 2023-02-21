#include "component.h"

component::component()
    : parent(nullptr)
{
}

component::component(const component &other) = default;

auto
component::operator=(const component &other) -> component &
{
	if (this == &other) {
		return *this;
	}

	this->parent = other.parent;

	return *this;
}

component::~component() = default;

void
component::set_parent(component *p)
{
	this->parent = p;
}

auto
component::get_parent() const -> component *
{
	return this->parent;
}

void
component::add(component *c)
{
}

void
component::remove(component *c)
{
}

auto
component::is_composite() const -> bool
{
	return false;
}
