#pragma once

#include "component.h"

class decorator : public component
{

    protected:
    component * comp;

    public:

    decorator(component *);
    decorator(const decorator&);
    decorator& operator=(const decorator&);

    std::string message() const override;


};