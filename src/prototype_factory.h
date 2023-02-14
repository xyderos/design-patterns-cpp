#pragma once

#include "prototype.h"

#include <unordered_map>

enum type { original_wannabe = 0, another_wannabe = 1 };

class prototype_factory {

    private:
	std::unordered_map<type, prototype *, std::hash<int>> prototypes_;

    public:
	prototype_factory();
	~prototype_factory();
	prototype *make_prototype(type);
};