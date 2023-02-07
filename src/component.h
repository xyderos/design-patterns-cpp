#pragma once

#include <string>

class component
{
    public:

    virtual ~component();
    virtual std::string message() const = 0;
};