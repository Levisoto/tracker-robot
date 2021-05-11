#pragma once
#include "Virus.h"

class VarJapoBra : public Coronavirus {
private:
public:
  VarJapoBra();
  ~VarJapoBra();
};

VarJapoBra::VarJapoBra() {
  caracter.push_back("Repecusion con medicamentos monoclonales");
  caracter.push_back("Disminuye la eficacia de los anticuerpos");
  nombre = "Variante Japonesa-Brasileña";
}

VarJapoBra::~VarJapoBra() {}
