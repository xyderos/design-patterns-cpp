#pragma once

#include <string>

class os
{
    public:
    virtual ~os();
    virtual std::string name() const = 0;
};