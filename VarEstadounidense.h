#pragma once
#include "Virus.h"

class VarEstadounidense : public Coronavirus {
private:
public:
  VarEstadounidense();
  ~VarEstadounidense();
};

VarEstadounidense::VarEstadounidense() {
  caracter.push_back("Se transmite con facilidad");
  caracter.push_back("Disminuye la eficacia de los anticuerpos");
  nombre = "Variante Estadounidense";
}

VarEstadounidense::~VarEstadounidense() {}
