#include "shared_state.h"

shared_state::shared_state(std::string fname, std::string lname, std::string pn)
    : first_name(std::move(fname))
    , last_name(std::move(lname))
    , personal_number(std::move(pn))
{
}

shared_state::shared_state(const shared_state &other) = default;

auto
shared_state::to_string() const -> std::string
{
	return this->first_name + "_" + this->last_name + "_" +
	    this->personal_number;
}
