/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Daniel Del Rosario Pimienta
 * @date 30 Oct 2021
 * @brief short circuit
 * short circuit evaluation
 */
#include<iostream>
using namespace std;

bool first_bool_demostration(bool valor){
  cout << "Se ha evaluado la primera variable" << endl;
  return valor;
}

bool second_bool_demostration(bool valor){
  cout << "Se ha evaluado la segunda variable" << endl;
  return valor;
}

int main(){
  bool first_bool{false};
  bool second_bool{true};

  cout << "Demostración de Short circuit evaluation" << endl;
  cout << "Comprobaremos el comparador AND mediante esta expresion: if (first_bool && second_bool){}" << endl << endl;
  cout << "first_bool = false" << endl;
  if (first_bool_demostration(false) && second_bool_demostration(true)) {

  }
  cout << endl << "first_bool = true" << endl;
  if (first_bool_demostration(true) && second_bool_demostration(true)) {

  }

  cout << "Comprobaremos el comparador OR mediante esta expresion: if (first_bool || second_bool){}" << endl << endl;
  cout << "first_bool = false" << endl;
  if (first_bool_demostration(false) || second_bool_demostration(true)) {

  }
  cout << endl << "first_bool = true" << endl;
  if (first_bool_demostration(true) || second_bool_demostration(true)) {

  }
}