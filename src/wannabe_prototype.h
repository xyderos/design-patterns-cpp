#pragma once

#include "prototype.h"

class wannabe_prototype : public prototype
{
    int wannabe_field;

    public:

    wannabe_prototype(const std::string &, int);

    // since we return a replica of the object, we have the responsibility to free up that memory later
    prototype* clone() const override;
};