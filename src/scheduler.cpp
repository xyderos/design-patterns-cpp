#include "scheduler.h"

std::string
scheduler::before() const
{
	return "sched_before";
}

std::string
scheduler::after() const
{
	return "sched_after";
}