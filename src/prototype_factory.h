#pragma once

#include "prototype.h"

#include <unordered_map>

enum type { original_wannabe = 0, another_wannabe = 1 };

// use one of the concrete prototypes to generate another one
class prototype_factory {

    private:
	std::unordered_map<type, prototype *, std::hash<int>> prototypes_;

    public:
	prototype_factory();
	~prototype_factory();
	auto make_prototype(type) -> prototype *;
};