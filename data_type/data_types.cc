/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Daniel Del Rosario Pimienta
 * @date 30 Oct 2021
 * @brief Data types
 * Data Types
 *
 */
#include<iostream>

int main(){
  int a_num{0};
  char a_char{'A'};
  bool a_bool{true};
  short a_short{0};
  long a_long{0};
  float a_float{0.01};
  double a_double{0.01};

  std::cout << "El tipo de datos char se representa utilizando " << sizeof(a_char) << " bytes" << std::endl;
  std::cout << "El tipo de datos bool se representa utilizando " << sizeof(a_bool) << " bytes" << std::endl;
  std::cout << "El tipo de datos short se representa utilizando " << sizeof(a_short) << " bytes" << std::endl;
  std::cout << "El tipo de datos int se representa utilizando " << sizeof(a_num) << " bytes" << std::endl;
  std::cout << "El tipo de datos float se representa utilizando " << sizeof(a_float) << " bytes" << std::endl;
  std::cout << "El tipo de datos long se representa utilizando " << sizeof(a_long) << " bytes" << std::endl;
  std::cout << "El tipo de datos double se representa utilizando " << sizeof(a_double) << " bytes" << std::endl;
}