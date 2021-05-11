//#include "pch.h"
#include "VarBritanica.h"
#include "VarEstadounidense.h"
#include "VarJapoBra.h"
#include "VarPerChi.h"
#include "VarSudafricana.h"
#include <string>

// using namespace System;

void menu() {
  cout << "            TRACKET ROBOT            " << endl;
  cout << "		 MENU" << endl;
  cout << "[1] INGRESAR DATOS" << endl;
  cout << "[2] REPORTE TOTAL" << endl;
  cout << "[3] SALIR" << endl;
}
void ValidarCaracteristicas(vector<string> preguntas, VarBritanica *bri,
                            VarSudafricana *suda, VarJapoBra *jabra,
                            VarEstadounidense *esta, VarPerChi *pechi) {
  vector<string> temp;
  char respuesta;
  // do {
  // cout << "Ingrese el nombre del paciente: ";
  // cin >> nombre;
  //} while (nombre.size() <= 0);
  for (int i = 0; i < preguntas.size(); i++) {
    do {
      cout << "¿" << preguntas[i] << "?";
      cin >> respuesta;
    } while (respuesta != 'N' && respuesta != 'S');
    if (respuesta == 'S')
      temp.push_back(preguntas[i]);
  }
  bri->RegistrarCaso(temp);
  suda->RegistrarCaso(temp);
  jabra->RegistrarCaso(temp);
  esta->RegistrarCaso(temp);
  pechi->RegistrarCaso(temp);
}
void MostrarRecomendaciones(vector<string> recomendaciones) {
  for (int i = 0; i < recomendaciones.size(); i++) {
    cout << recomendaciones[i];
  }
}
void addPreguntas(vector<string> *caracter) {
  caracter->push_back("Se transmite con facilidad");
  caracter->push_back("Repecusion con medicamentos monoclonales");
  caracter->push_back("Disminuye la eficacia de los anticuerpos");
  caracter->push_back("Mayor riezgo de muerte");
}

int main() {
  VarBritanica *bri = new VarBritanica();
  VarSudafricana *suda = new VarSudafricana();
  VarJapoBra *jabra = new VarJapoBra();
  VarEstadounidense *esta = new VarEstadounidense();
  VarPerChi *pechi = new VarPerChi();
  int op;
  vector<string> preguntas;
  addPreguntas(&preguntas);
  while (true) {
    menu();
    cout << "Ingrese la opcion: ";
    cin >> op;
    switch (op) {
    case 1:
      ValidarCaracteristicas(preguntas, bri, suda, jabra, esta, pechi);
      break;
    case 2:
      cout << "        Reporte" << endl;
      cout << bri->ObtenerNombre() << ": " << bri->ObtenerCantidadInfectdos()
           << endl;
      cout << suda->ObtenerNombre() << ": " << suda->ObtenerCantidadInfectdos()
           << endl;
      cout << jabra->ObtenerNombre() << ": "
           << jabra->ObtenerCantidadInfectdos() << endl;
      cout << esta->ObtenerNombre() << ": " << esta->ObtenerCantidadInfectdos()
           << endl;
      cout << pechi->ObtenerNombre() << ": "
           << pechi->ObtenerCantidadInfectdos() << endl;
      // getch();
      // system("cls");
      break;
    case 3:
      cout << "Terminó el programa";
      // system("clear");
      exit(0);
    default:
      cout << " Ingrese una nueva opcion" << endl;
      // getch();
      // system("clear");
      break;
    }
    // getch();
  }
  return 0;
}
