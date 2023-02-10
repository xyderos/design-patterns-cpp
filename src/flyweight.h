#pragma once

#include "shared_state.h"
#include "unique_state.h"

class flyweight
{
    // the flyweight keeps a part of the state that belongs to multiple entities
    // and can thus be called with other unique states to produce results or
    // cause side effects in the business logic function
    shared_state* shared;

    public:
    flyweight(const shared_state& s);
    flyweight(const flyweight& other);
    flyweight& operator=(const flyweight& other);
    ~flyweight();
    shared_state* get_shared_state() const;

    std::string business_logic(const unique_state& unique) const;
};