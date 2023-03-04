#include "snap.h"

snap::snap(std::string state, std::string date)
    : state_(std::move(state))
    , date_(std::move(date))
{
}

auto
snap::state() const -> std::string
{
	return this->state_;
}

auto
snap::name() const -> std::string
{
	return this->date_ + this->state_;
}

auto
snap::date() const -> std::string
{
	return this->date_;
}
