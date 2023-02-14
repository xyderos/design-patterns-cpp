#include "client.h"

client::~client()
{
	if (this->on_start)
		delete this->on_start;
	if (this->on_finish)
		delete this->on_finish;
}

void
client::set_start(command *command)
{
	this->on_start = command;
}

void
client::set_finish(command *command)
{
	this->on_finish = command;
}

std::string
client::do_something()
{
	std::string result("");

	if (this->on_start)
		result.append(this->on_start->execute());
	if (this->on_finish)
		result.append(this->on_finish->execute());

	return result;
}