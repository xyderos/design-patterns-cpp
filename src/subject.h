#pragma once

#include "observer.h"

class subject {
    public:
	virtual ~subject();
	virtual void attach(observer *o) = 0;
	virtual void detach(observer *o) = 0;
	virtual void notify() = 0;
};
