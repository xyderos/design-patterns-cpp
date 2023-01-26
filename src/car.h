#pragma once

#include <string>

class car {
 public:
  // mark it as default since calling the destructor of the child class it wouldn't call the parent's one 
  virtual ~car() = default;
  // basic functionality for a car
  virtual std::string to_string() const = 0;
};