#pragma once

#include "visitor.h"

class component {
    public:
	virtual ~component();
	virtual void accept(visitor *visitor) const = 0;
};
