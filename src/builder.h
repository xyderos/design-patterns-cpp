#pragma once

#include "car.h"

class builder {
    public:
	virtual ~builder();
	// specify methods for creating different parts
	virtual void make_engine() const = 0;
	virtual void make_chassis() const = 0;
	virtual void make_firmware() const = 0;
	virtual car *get_car() = 0;
};