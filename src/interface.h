#pragma once

#include <string>

class interface
{
    public:

    virtual std::string common() const = 0;
    virtual ~interface() = default;
};