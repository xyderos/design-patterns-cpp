#pragma once

#include "visitor.h"

// interface that declares a method where every visitor can join
class component {
    public:
	virtual ~component();
	virtual void accept(visitor *visitor) const = 0;
};
