#pragma once

#include "fruit.h"

#include <iostream>
#include <string>

class factory {
    public:
	virtual ~factory();
	// this is supposed to return an object of the fruit class. The
	// inheritors will provide the definition of the member function
	virtual fruit *fruit_generator() const = 0;
	// the implementation of this member function should contain more
	// business logic
	std::string use_the_generator() const;
};