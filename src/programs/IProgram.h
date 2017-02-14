#pragma once

#include <string>

class IProgram
{
public:
  IProgram(const std::string &name) : Name(name)
  {
  }

  virtual int Run() = 0;

  virtual ~IProgram() = default;

  std::string Name;
};