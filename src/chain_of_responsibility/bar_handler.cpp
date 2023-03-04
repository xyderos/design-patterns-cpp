#include "bar_handler.h"

auto
bar_handler::handle(std::string request) -> std::string
{
	return request == "bar" ? "handler:" + request :
				  abstract_handler::handle(request);
}
