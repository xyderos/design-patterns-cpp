#pragma once

#include <string>

class handler {
 public:
  virtual handler *set_next(handler *handler) = 0;
  virtual std::string handle(std::string request) = 0;
  virtual ~handler() = default;
};