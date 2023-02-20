#include "another_wannabe_prototype.h"

another_wannabe_prototype::another_wannabe_prototype(
    const std::string &a_string, int a_number)
    : prototype(a_string)
    , another_wannabe_field(a_number)
{
}

auto
another_wannabe_prototype::clone() const -> prototype *
{
	return new another_wannabe_prototype(*this);
}
