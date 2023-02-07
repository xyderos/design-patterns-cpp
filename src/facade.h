#pragma once

#include "allocator.h"
#include "scheduler.h"

class facade
{
    protected:
    allocator* a;
    scheduler* sched;

    public:

    facade(allocator* a1 = nullptr, scheduler* sched1 = nullptr);
    facade(const facade&);
    facade& operator=(const facade&);
    ~facade();

    std::string initialization();


};