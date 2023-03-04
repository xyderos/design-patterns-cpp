#include "abstract.h"

int abstract::modify_me_ = 0;

void
abstract::process() const
{
	this->an_operation();
	this->something_required();
	this->another_operation();
	this->a_hook();
	this->this_is_also_required();
	this->yet_one_more_operation();
	this->another_hook();
}

void
abstract::an_operation() const
{
	this->modify_me_ += 1;
}

void
abstract::another_operation() const
{
	this->modify_me_ += 1;
}

void
abstract::yet_one_more_operation() const
{
	this->modify_me_ += 1;
}

void
abstract::a_hook() const
{
}

void
abstract::another_hook() const
{
}

auto
abstract::get_result() const -> int
{
	return this->modify_me_;
}
