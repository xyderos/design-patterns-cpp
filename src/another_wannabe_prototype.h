#pragma once

#include "prototype.h"

class another_wannabe_prototype : public prototype
{
    int another_wannabe_field;

    public:

    another_wannabe_prototype(const std::string & a_string, int a_number);

    // since we return a replica of the object, we have the responsibility to free up that memory later
    prototype* clone() const override;
};