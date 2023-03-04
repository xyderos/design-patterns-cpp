#include "complex.h"

#include <utility>

using std::string;

complex::complex(business_logic *l, string a, string b)
    : bl(l)
    , a_(std::move(a))
    , b_(std::move(b))
{
}

complex::complex(const complex &ref)
    : bl(ref.bl)
    , a_(ref.a_)
    , b_(ref.b_)
{
}

complex::~complex()
{
	delete this->bl;
}

auto
complex::execute() const -> std::string
{
	auto s1 = this->bl->something(this->a_);
	auto s2 = this->bl->something_else(this->b_);

	return s1 + s2;
}