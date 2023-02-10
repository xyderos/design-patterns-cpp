#pragma once

#include <string>

class shared_state
{
    std::string first_name, last_name, personal_number;

    public:

    shared_state(const std::string& fname, const std::string& lname, const std::string& pn);
    shared_state(const shared_state& other);
    std::string to_string() const;
};