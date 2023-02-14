#include "bar_handler.h"

std::string
bar_handler::handle(std::string request)
{
	return request == "bar" ? "handler:" + request :
				  abstract_handler::handle(request);
}