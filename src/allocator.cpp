#include "allocator.h"

std::string
allocator::before() const
{
	return "alloc_before";
}

std::string
allocator::after() const
{
	return "alloc_after";
}
