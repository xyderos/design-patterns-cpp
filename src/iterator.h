#pragma once

#include <iostream>
#include <string>
#include <vector>

template <typename T, typename U> class iterator {

	using i = typename std::vector<T>::iterator;

	U *data;
	i it;

    public:
	explicit iterator(U *d)
	    : data(d)
	{
		this->it = d->data.begin();
	}

	void first() { this->it = this->data->data.begin(); }

	void next() { this->it++; }

	auto end() -> bool { return this->it == this->data->data.end(); }

	auto current() -> i { return this->it; }
};
