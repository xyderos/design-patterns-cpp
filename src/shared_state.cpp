#include "shared_state.h"

shared_state::shared_state(const std::string &fname, const std::string &lname,
    const std::string &pn)
    : first_name(fname)
    , last_name(lname)
    , personal_number(pn)
{
}

shared_state::shared_state(const shared_state &other)
    : first_name(other.first_name)
    , last_name(other.last_name)
    , personal_number(other.personal_number)
{
}

auto
shared_state::to_string() const -> std::string
{
	return this->first_name + "_" + this->last_name + "_" +
	    this->personal_number;
}
