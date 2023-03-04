#pragma once

#include <mutex>

class singleton {
    private:
	static singleton *instance;
	static std::mutex mtx;

    protected:
	// prevent explicit construction and destruction
	explicit singleton(std::string s);
	~singleton();
	std::string msg;

    public:
	// prevent cloning
	singleton(singleton &other) = delete;
	// prevent reassigning
	void operator=(const singleton &) = delete;

	// get the instance, this acts as a constructor for the object
	static auto get_instance(const std::string &value) -> singleton *;

	void business_logic();

	[[nodiscard]] auto message() const -> std::string;

	static void destroy();
};
