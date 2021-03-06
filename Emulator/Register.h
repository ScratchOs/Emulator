#pragma once
#include <cstdint>
#include <iostream>
#include <map>
#include "Component.h"
#include "Microcode.h"
#include "Util.h"

class Register : public Component {
 public:
  Register(const std::string name);

  void Initialise(std::shared_ptr<Microcode> microcode) override;
  void AddBus(std::shared_ptr<Bus> bus);

 private:
  void BusRead(std::string name);
  void BusWrite(std::string name);

 public:
  int16_t m_value;
  std::string m_name;
  std::shared_ptr<Microcode> m_microcode;
  std::map<std::string, std::shared_ptr<Bus>> m_busses{};
};
