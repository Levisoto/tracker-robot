#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Coronavirus {
protected:
  vector<string> caracter;
  vector<string> preguntas;
  int cantidadInfectados;
  string nombre;

public:
  Coronavirus();
  ~Coronavirus();
  vector<string> ObtenerCaracter();
  void RegistrarCaso(vector<string> answers);
  string ObtenerNombre();
  int ObtenerCantidadInfectdos();
};

Coronavirus::Coronavirus() {
  // caracter.push_back("Se transmite facilmente");
  cantidadInfectados = 0;
  nombre = "Coronavirus";
}

Coronavirus::~Coronavirus() {
  caracter.clear();
  preguntas.clear();
}
int Coronavirus::ObtenerCantidadInfectdos() { return this->cantidadInfectados; }

void Coronavirus::RegistrarCaso(vector<string> answers) {
  // cout << "AL entrar  a " << nombre << endl;
  int val = 0;
  if (answers.size() == caracter.size()) {
    // cout << "Entro a " << nombre << endl;
    for (int i = 0; i < answers.size(); i++) {
      for (int j = 0; j < caracter.size(); j++) {
        if (answers[i] == caracter[j]) {
          val++;
        }
      }
    }
    if (val == answers.size()) {
      // cout << "Agregado a " << nombre << endl;
      cantidadInfectados++;
    }
  }
}
string Coronavirus::ObtenerNombre() { return nombre; }
vector<string> Coronavirus::ObtenerCaracter() { return caracter; }
