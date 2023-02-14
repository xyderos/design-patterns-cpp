#include "builder.h"

class volvo_builder : public builder {
	car *volvo;

    public:
	volvo_builder();
	volvo_builder(const volvo_builder &);
	volvo_builder &operator=(const volvo_builder &);
	~volvo_builder();

	void reset();

	void make_engine() const override;
	void make_chassis() const override;
	void make_firmware() const override;
	virtual car *get_car() override;
};