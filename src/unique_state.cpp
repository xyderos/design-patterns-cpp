#include "unique_state.h"

unique_state::unique_state(const std::string &loc, const std::string &adr)
    : location(loc)
    , address(adr)
{
}

unique_state::unique_state(const unique_state &other) = default;

auto
unique_state::to_string() const -> std::string
{
	return this->location + "_" + this->address;
}
