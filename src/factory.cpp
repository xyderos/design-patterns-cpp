#include "factory.h"

factory::~factory() = default;

auto
factory::use_the_generator() const -> std::string
{
	fruit *f = this->fruit_generator();

	std::string s = f->to_string();

	delete f;

	return s;
}
