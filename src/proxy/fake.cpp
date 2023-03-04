#include "fake.h"

auto
fake::log() const -> std::string
{
	return "log";
}

fake::fake(real *rl)
    : r(rl)
{
}

fake::fake(const fake &f)
    : r(f.r)
{
}

auto
fake::operator=(const fake &rhs) -> fake &
{
	if (this == &rhs) {
		return *this;
	}

	this->r = rhs.r;

	return *this;
}

fake::~fake()
{
	delete r;
}

auto
fake::common() const -> std::string
{
	return "fakex" + this->r->common();
}
