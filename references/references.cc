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
  int test_int{1};
  float test_float = {0.4F};
  char test_char('a');
  bool test_bool = (true);
  int& reference_to_test_int = test_int;
  float& reference_to_test_float = test_float;
  char& reference_to_test_char = test_char;
  bool& reference_to_test_bool = test_bool;

  cout << "La variable int es: " << test_int << " y su referencia: " << reference_to_test_int << endl;
  cout << "La variable float es: " << test_float << " y su referencia: " << reference_to_test_float << endl;
  cout << "La variable char es: " << test_char << " y su referencia: " << reference_to_test_char << endl;
  cout << "La variable bool es: " << test_bool << " y su referencia: " << reference_to_test_bool << endl;
}