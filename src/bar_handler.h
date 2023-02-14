#include "abstract_handler.h"

class bar_handler : public abstract_handler {
    public:
	std::string handle(std::string request) override;
};