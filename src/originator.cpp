#include "originator.h"
#include "snap.h"

std::string
originator::generate(int length)
{
	const char alphanum[] = "0123456789"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				"abcdefghijklmnopqrstuvwxyz";
	int stringLength = sizeof(alphanum) - 1;

	std::string random_string;
	for (int i = 0; i < length; i++) {
		random_string += alphanum[std::rand() % stringLength];
	}
	return random_string;
}

originator::originator(std::string state)
    : state_(std::move(state))
{
}
void
originator::business_logic_that_changes_the_state()
{
	this->state_ = this->generate(30);
}
auto
originator::save() -> snapshot *
{
	return new snap(this->state_, "timestamp");
}
