#pragma once

#include "notification.h"
#include "observer.h"
#include "subject.h"

class observe : public observer {

    private:
	notification_t notification_;
	subject &subject_;
	static int nof_instances;
	int number_;

    public:
	observe(const observe &) = default;
	observe(observe &&) = delete;
	auto operator=(const observe &) -> observe & = delete;
	auto operator=(observe &&) -> observe & = delete;
	explicit observe(subject &s);
	~observe() override;

	void update(const notification_t notification) override;

	void detach_from_list();

	[[nodiscard]] auto get_latest_notification() const -> notification_t;

	[[nodiscard]] auto get_number_of_instances() const -> int;
};
