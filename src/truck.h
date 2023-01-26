#pragma once

#include <string>
#include "car.h"

class truck {
    public:
    virtual ~truck() = default;
    virtual std::string to_string() const = 0;
    virtual std::string what_am_I_carrying(const car &cargo) const = 0;
};