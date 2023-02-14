#include "zot_handler.h"

std::string
zot_handler::handle(std::string request)
{
	return request == "zot" ? "handler:" + request : abstract_handler::handle(request);
}