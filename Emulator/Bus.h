#pragma once
#include <cstdint>
#include <memory>
#include <string>

class Bus {
 public:
  Bus(const std::string name);

  int16_t Read();
  void Write(int16_t value);

  const std::string m_name;

 private:
  std::shared_ptr<int16_t> m_bus;
};
