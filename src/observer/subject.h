#pragma once

#include "observer.h"

// itnerface the subscribers have
class subject {
    public:
	virtual ~subject();
	virtual void attach(observer *o) = 0;
	virtual void detach(observer *o) = 0;
	virtual void notify() = 0;
};
