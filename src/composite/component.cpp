#include "component.h"

composite_component::composite_component()
    : parent(nullptr)
{
}

composite_component::composite_component(const composite_component &other) = default;

auto
composite_component::operator=(const composite_component &other) -> composite_component &
{
	if (this == &other) {
		return *this;
	}

	this->parent = other.parent;

	return *this;
}

composite_component::~composite_component() = default;

void
composite_component::set_parent(composite_component *p)
{
	this->parent = p;
}

auto
composite_component::get_parent() const -> composite_component *
{
	return this->parent;
}

void
composite_component::add(composite_component *c)
{
}

void
composite_component::remove(composite_component *c)
{
}

auto
composite_component::is_composite() const -> bool
{
	return false;
}
