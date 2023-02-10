#include "flyweight.h"

flyweight::flyweight(const shared_state &s) : shared(new shared_state(s))
{
}

flyweight::flyweight(const flyweight &other) : shared(new shared_state(*other.shared))
{
}

flyweight &
flyweight::operator=(const flyweight &other)
{
	if(this == &other) return *this;

    this->shared = other.shared;

    return *this;
}

flyweight::~flyweight()
{
    delete shared;
}

auto
flyweight::get_shared_state() const -> shared_state *
{
    return this->shared;
}

auto
flyweight::business_logic(const unique_state& unique) const -> std::string
{
    return this->shared->to_string() + ":" + unique.to_string();
}
