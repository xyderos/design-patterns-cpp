#include "fruit.h"

class orange : public fruit {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
};
