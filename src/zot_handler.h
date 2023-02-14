#include "abstract_handler.h"

class zot_handler : public abstract_handler {
    public:
	std::string handle(std::string request) override;
};