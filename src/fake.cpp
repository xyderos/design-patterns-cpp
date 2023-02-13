#include "fake.h"

std::string fake::log() const
{
    return "log";
};

fake::fake(real* rl) : r(rl){}

fake::fake(const fake& f) : r(f.r){}

fake& fake::operator=(const fake& rhs)
{
    if(this == &rhs) return *this;

    this->r = rhs.r;

    return *this;
}

fake::~fake()
{
    delete r;
}

std::string fake::common() const
{
    return "fakex" + this->r->common();
}