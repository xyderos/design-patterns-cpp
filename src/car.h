#pragma once

#include <string>

class car {
 public:
  virtual ~car() = default;
  virtual std::string to_string() const = 0;
};