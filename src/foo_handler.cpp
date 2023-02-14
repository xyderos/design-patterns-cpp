#include "foo_handler.h"

std::string
foo_handler::handle(std::string request)
{
    return request == "foo" ? "handler:" + request : abstract_handler::handle(request);
}