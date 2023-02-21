#include "scheduler.h"

auto
scheduler::before() const -> std::string
{
	return "sched_before";
}

auto
scheduler::after() const -> std::string
{
	return "sched_after";
}
