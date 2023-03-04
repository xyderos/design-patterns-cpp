#include "fruit.h"

class apple : public fruit {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
};
