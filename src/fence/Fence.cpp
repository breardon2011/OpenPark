#include "Fence.h"

Fence::Fence(int id, int plc_id, bool is_active, double voltage, int paddock_id)
    : id(id), plc_id(plc_id), is_active(is_active), voltage(voltage),
      paddock_id(paddock_id) {}

void Fence::activate() { is_active = true; }

void Fence::deactivate() { is_active = false; }

bool Fence::getActiveStatus() { return is_active; }

int Fence::getId() { return id; }

int Fence::getPLCId() { return plc_id; }  

double Fence::getVoltage() { return voltage; }


