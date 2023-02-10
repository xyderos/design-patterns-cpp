#pragma once

#include <unordered_map>
#include <vector>
#include "flyweight.h"
#include "shared_state.h"

// creates and manages multiple flyweights
// ensure that objects are shared correctly
// if the client requests for an instance,
// either return one if it exists or create one and return it back
class factory
{
    std::unordered_map<std::string, flyweight> flyweights;

    std::string get_key(const shared_state& shared) const;

    public:

    factory(std::vector<shared_state> states);

    flyweight get_flyweight(const shared_state& shared);
    std::vector<std::string> get_flyweights();
};