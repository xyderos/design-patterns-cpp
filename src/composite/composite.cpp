#include "composite.h"

#include <algorithm>

composite::composite()
    : children()
{
}

composite::~composite()
{
	std::for_each(this->children.begin(), this->children.end(),
	    [](composite_component *c) { delete c; });
}

void
composite::add(composite_component *c)
{
	this->children.push_back(c);
	c->set_parent(this);
}

void
composite::remove(composite_component *c)
{
	// TODO free up the memory
	this->children.remove(c);
	c->set_parent(nullptr);
	delete c;
}

auto
composite::is_composite() const -> bool
{
	return true;
}

auto
composite::name() const -> std::string
{
	std::string result;

	std::for_each(this->children.begin(), this->children.end(),
	    [&](const composite_component *ref) {
		    if (ref == this->children.back()) {
			    result += ref->name();

		    } else {
			    result += ref->name() + " + ";
		    }
	    });

	return "Branch(" + result + ")";
}
