#include "zot_handler.h"

auto
zot_handler::handle(std::string request) -> std::string
{
	return request == "zot" ? "handler:" + request :
				  abstract_handler::handle(request);
}
