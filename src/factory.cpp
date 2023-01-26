#include "factory.h"

factory::~factory()
{
}

std::string
factory::use_the_generator() const
{
    fruit* f = this->fruit_generator();

    std::string s = f->to_string();

    delete f;

    return s;
}