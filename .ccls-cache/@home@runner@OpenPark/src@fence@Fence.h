#include <string>

#ifndef FENCE_H
#define FENCE_H

class Fence {
public:
  Fence(int id, int plc_id, bool is_active, double voltage, int paddock_id);
  void activate();
  void deactivate();
  bool getActiveStatus();
  int getId();
  int getPaddockId();
  int getPLCId();
  double getVoltage();

private:
  int id;         // id of the fence
  int plc_id;     // the fence's controlling plc and real time source
  bool is_active; // active = electrified
  double voltage; // voltage
  int paddock_id; // id of the paddock the fence is connected to
};

#endif // FENCE_H