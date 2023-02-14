#pragma once

#include <string>

class command {
 public:
  virtual ~command();
  virtual std::string execute() const = 0;
};