#pragma once

#include <mutex>

class singleton
{
    private:
    static singleton * instance;
    static std::mutex mtx;

    protected:
    
    // prevent explicit construction and destruction
    singleton(const std::string&s);
    ~singleton();
    std::string msg;

    public:

    // prevent cloning
    singleton(singleton &other) = delete;
    // prevent reassigning
    void operator=(const singleton &) = delete;

    // get the instance
    static singleton *get_instance(const std::string& value);

    void business_logic();
    
    std::string message() const;
};