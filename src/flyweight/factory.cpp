#include "factory.h"

#include <algorithm>
#include <iostream>

auto
flyweight_factory::get_key(const shared_state &shared) const -> std::string
{
	return shared.to_string() + "_state";
}

flyweight_factory::flyweight_factory(std::vector<shared_state> states)
    : flyweights([&]() -> std::unordered_map<std::string, flyweight> {
	    std::unordered_map<std::string, flyweight> map;

	    std::for_each(states.begin(), states.end(),
		[&](const shared_state &shared) {
			map.insert(
			    { this->get_key(shared), flyweight(shared) });
		});
	    return map;
    }())
{
}

auto
flyweight_factory::get_flyweight(const shared_state &shared) -> flyweight
{
	std::string key = this->get_key(shared);

	if (this->flyweights.find(key) == this->flyweights.end()) {
		this->flyweights.insert({ key, flyweight(shared) });
	}
	return this->flyweights.at(key);
}

auto
flyweight_factory::get_flyweights() -> std::vector<std::string>
{
	std::vector<std::string> result;

	std::for_each(this->flyweights.begin(), this->flyweights.end(),
	    [&](const std::pair<std::string, flyweight>& pair) {
		    if (!pair.first.empty()) {
			    result.emplace_back(pair.first);
		    }
	    });

	return result;
}
