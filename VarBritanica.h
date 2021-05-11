#pragma once
#include "Virus.h"

class VarBritanica : public Coronavirus // herencia
{
private:
public:
  VarBritanica();
  ~VarBritanica();
};

VarBritanica::VarBritanica() {
  caracter.push_back("Se transmite con facilidad");
  caracter.push_back("Mayor riezgo de muerte");
  nombre = "Variante Britanica";
}

VarBritanica::~VarBritanica() {}
