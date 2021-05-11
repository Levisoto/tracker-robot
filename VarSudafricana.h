#pragma once
#include "Virus.h"

class VarSudafricana : public Coronavirus {
private:
public:
  VarSudafricana();
  ~VarSudafricana();
};

VarSudafricana::VarSudafricana() {
  caracter.push_back("Se transmite con facilidad");
  caracter.push_back("Repecusion con medicamentos monoclonales");
  caracter.push_back("Disminuye la eficacia de los anticuerpos");
  nombre = "Variante Sudafricana";
}

VarSudafricana::~VarSudafricana() {}
