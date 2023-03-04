#include "os.h"

// a sample implementation
class ubuntu : public os {
    public:
	[[nodiscard]] auto name() const -> std::string override;
};
