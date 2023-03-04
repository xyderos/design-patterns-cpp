#pragma once

#include "iterator.h"

#include <vector>

// a generic adapter to the vector class
template <typename T> class container {
	friend class iterator<T, container>;
	std::vector<T> data;

    public:
	void add(T a) { data.push_back(a); }

	auto make_iterator() -> iterator<T, container> *
	{
		return new iterator<T, container>(this);
	}
};
