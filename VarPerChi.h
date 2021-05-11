#pragma once
#include "Virus.h"

class VarPerChi : public Coronavirus {
public:
  VarPerChi();
  ~VarPerChi();

private:
};

VarPerChi::VarPerChi() {
  caracter.push_back("Se transmite con facilidad");
  nombre = "Variante Peru-Chile";
}

VarPerChi::~VarPerChi() {}
