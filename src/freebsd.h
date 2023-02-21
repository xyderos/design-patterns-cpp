#include "os.h"

// a sample implementation
class freebsd : public os {
    public:
	[[nodiscard]] auto name() const -> std::string override;
};
