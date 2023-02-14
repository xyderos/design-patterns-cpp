#include "complex.h"

complex::complex(business_logic *l, std::string a, std::string b) : bl(l), a_(a), b_(b) {}

complex::complex(const complex &ref) : bl(ref.bl), a_(ref.a_), b_(ref.b_)
{
}

complex::~complex()
{
    delete this->bl;
}

std::string
complex::execute() const
{
    auto s1 = this->bl->something(this->a_);
    auto s2 = this->bl->something_else(this->b_);

    return s1 + s2;
}