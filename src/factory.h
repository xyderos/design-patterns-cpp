#pragma once

#include "flyweight.h"
#include "shared_state.h"

#include <unordered_map>
#include <vector>

// creates and manages multiple flyweights
// ensure that objects are shared correctly
// if the client requests for an instance,
// either return one if it exists or create one and return it back
class factory {
	std::unordered_map<std::string, flyweight> flyweights;

	auto get_key(const shared_state &shared) const -> std::string;

    public:
	explicit factory(std::vector<shared_state> states);

	auto get_flyweight(const shared_state &shared) -> flyweight;
	auto get_flyweights() -> std::vector<std::string>;
};