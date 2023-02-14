#include "composite.h"

#include <algorithm>

composite::composite()
    : children()
{
}

composite::~composite()
{
	std::for_each(this->children.begin(), this->children.end(),
	    [](component *c) { delete c; });
}

void
composite::add(component *c)
{
	this->children.push_back(c);
	c->set_parent(this);
}

void
composite::remove(component *c)
{
	// TODO free up the memory
	this->children.remove(c);
	c->set_parent(nullptr);
	delete c;
}

bool
composite::is_composite() const
{
	return true;
}

std::string
composite::name() const
{
	std::string result;

	std::for_each(this->children.begin(), this->children.end(),
	    [&](const component *ref) {
		    if (ref == this->children.back())
			    result += ref->name();

		    else
			    result += ref->name() + " + ";
	    });

	return "Branch(" + result + ")";
}