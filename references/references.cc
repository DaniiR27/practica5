/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Daniel Del Rosario Pimienta
 * @date 30 Oct 2021
 * @brief References
 * References
 *
 */
#include <iostream>

using namespace std;

int main()  {
  int number1{1};
  float number2 = {0.4F};
  char letra('a');
  bool test_bool = (true);
  int& reference_to_number1 = number1;
  float& reference_to_number2 = number2;
  char& reference_to_letra = letra;
  bool& reference_to_test_bool = test_bool;

  cout << "La variable int es: " << number1 << " y su referencia: " << reference_to_number1 << endl;
  cout << "La variable int es: " << number2 << " y su referencia: " << reference_to_number2 << endl;
  cout << "La variable int es: " << letra << " y su referencia: " << reference_to_letra << endl;
  cout << "La variable int es: " << test_bool << " y su referencia: " << reference_to_test_bool << endl;
}