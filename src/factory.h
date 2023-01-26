#pragma once

#include <string>
#include <iostream>
#include "fruit.h"

class factory
{
    public:
    virtual ~factory();
    virtual fruit* fruit_generator() const = 0;

    std::string use_the_generator() const;
};