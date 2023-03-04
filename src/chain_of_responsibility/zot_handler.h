#include "abstract_handler.h"

// either handle a request or pass it to the next handler
class zot_handler : public abstract_handler {
    public:
	auto handle(std::string request) -> std::string override;
};
