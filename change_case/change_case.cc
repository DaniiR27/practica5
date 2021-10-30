/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Daniel Del Rosario Pimienta
 * @date 30 Oct 2021
 * @brief Arithmetic operators
 * Arithmetic operators
 *
 */
#include<iostream>

int main(){
  char letra_introducida;
  std::cin >> letra_introducida;
  if  (letra_introducida >= 'a' && letra_introducida <= 'z')  {
    std::cout << "Es minuscula" << std::endl;
  } else {
    std::cout << "Es mayuscula" << std::endl;
  }
  return 0;
}