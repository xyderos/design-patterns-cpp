#include "builder.h"

// implements the builder interface
class volvo_builder : public builder {
	car *volvo;

    public:
	volvo_builder();
	volvo_builder(const volvo_builder &);
	auto operator=(const volvo_builder &) -> volvo_builder &;
	~volvo_builder() override;

	void reset();

	void make_engine() const override;
	void make_chassis() const override;
	void make_firmware() const override;
	auto get_car() -> car * override;
};
