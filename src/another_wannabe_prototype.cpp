#include "another_wannabe_prototype.h"

another_wannabe_prototype::another_wannabe_prototype(
    const std::string &a_string, int a_number) : prototype(a_string), another_wannabe_field(a_number)
{}

prototype *
another_wannabe_prototype::clone() const
{
    return new another_wannabe_prototype(*this);
}