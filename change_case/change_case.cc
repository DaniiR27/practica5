/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Daniel Del Rosario Pimienta
 * @date 30 Oct 2021
 * @brief change_case
 * Change case
 *
 */

#include<iostream>

int main(){
  char letra_introducida{' '};
  char changed_case{' '};
  bool correct_entry{false};
  std::cout << "We are going to change the letter you enter for its corresponding upper or lower case" << std::endl;
  while (!correct_entry){ 
    std::cout << "Enter one letter: ";
    std::cin >> letra_introducida;
    if (isalpha(letra_introducida)) {
      correct_entry = true;
    if  (letra_introducida >= 'a' && letra_introducida <= 'z')  {
      letra_introducida = std::toupper(letra_introducida);
      std::cout << "Corresponding uppercase: "<< letra_introducida << std::endl;
    } else {
      letra_introducida = std::tolower(letra_introducida);
      std::cout << "Corresponding lowercase: "<< letra_introducida << std::endl;
    }
  }else{
    std::cout << "Please enter a letter" << std::endl;
  }
  }
  return 0;
}