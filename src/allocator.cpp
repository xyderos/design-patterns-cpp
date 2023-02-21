#include "allocator.h"

auto
allocator::before() const -> std::string
{
	return "alloc_before";
}

auto
allocator::after() const -> std::string
{
	return "alloc_after";
}
