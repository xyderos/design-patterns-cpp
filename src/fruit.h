#pragma once

#include <string>

class fruit
{
    public:
    virtual ~fruit() = default;
    virtual std::string to_string() const = 0;
};