#pragma once

#include "prototype.h"

#include <unordered_map>

enum type { original_wannabe = 0, another_wannabe = 1 };

// 2 concrete prototypes, each for each class, each time you want to make one
// you can clone some of these
class prototype_factory {

    private:
	std::unordered_map<type, prototype *, std::hash<int>> prototypes_;

    public:
	prototype_factory();
	~prototype_factory();
	// specify the type and make a prototype
	auto make_prototype(type) -> prototype *;
};
