#include "factory.h"

#include <algorithm>

#include <iostream>

std::string
factory::get_key(const shared_state &shared) const
{
	return shared.to_string() + "_state";
}

factory::factory(std::vector<shared_state> states) : flyweights([&]() -> std::unordered_map<std::string, flyweight> 
{
    std::unordered_map<std::string, flyweight> map;

    std::for_each(states.begin(), states.end(), [&](const shared_state& shared)
    {   
        map.insert({this->get_key(shared), flyweight(shared)});
    });
    return map;
}())
{}

flyweight
factory::get_flyweight(const shared_state &shared)
{
    std::string key = this->get_key(shared);

    if (this->flyweights.find(key) == this->flyweights.end())
    {
        this->flyweights.insert({key, flyweight(shared)});
    }
    return this->flyweights.at(key);
}

std::vector<std::string>
factory::get_flyweights()
{
    std::vector<std::string> result;

    std::for_each(this->flyweights.begin(), this->flyweights.end(), [&](std::pair<std::string, flyweight> pair)
    {
        if(!pair.first.empty()) result.emplace_back(pair.first);
    });

    return result;
}
