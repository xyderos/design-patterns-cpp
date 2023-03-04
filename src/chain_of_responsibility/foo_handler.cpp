#include "foo_handler.h"

auto
foo_handler::handle(std::string request) -> std::string
{
	return request == "foo" ? "handler:" + request :
				  abstract_handler::handle(request);
}
