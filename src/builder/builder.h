#pragma once

#include "car.h"

// define the different methods that essentially are parts on the construction
// process
class builder {
    public:
	virtual ~builder();
	// specify methods for creating different parts
	virtual void make_engine() const = 0;
	virtual void make_chassis() const = 0;
	virtual void make_firmware() const = 0;
	virtual auto get_car() -> car * = 0;
};
