#pragma once

class data {

    private:
	int d;

    public:
	explicit data(int a = 0);

	void set_data(int a) { d = a; }

	auto raw() -> int;
};
