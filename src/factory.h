#pragma once

#include "fruit.h"

#include <iostream>
#include <string>

// declare a generation method that will return the constructed object
class factory {
    public:
	virtual ~factory();
	// this is supposed to return an object of the fruit class. The
	// inheritors will provide the definition of the member function
	[[nodiscard]] virtual auto fruit_generator() const -> fruit * = 0;
	// the implementation of this member function should contain more
	// business logic
	[[nodiscard]] auto use_the_generator() const -> std::string;
};
