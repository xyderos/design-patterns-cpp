#include "either_component.h"
#include "mediator.h"
#include "notification.h"
#include "other_component.h"

class coordinator : public mediator {
    private:
	either_compoment *co1;
	other_compoment *co2;
	notification_t latest_notification;

    public:
	virtual ~coordinator() = default;
	coordinator(const coordinator &) = default;
	coordinator(coordinator &&) = delete;
	auto operator=(const coordinator &) -> coordinator & = default;
	auto operator=(coordinator &&) -> coordinator & = delete;
	coordinator(either_compoment *c1, other_compoment *c2);

	void notify(component *sender, notification_t event) override;
	[[nodiscard]] auto get_latest_notification() const
	    -> notification_t override;
};
