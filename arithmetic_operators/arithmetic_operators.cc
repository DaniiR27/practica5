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

using namespace std;

int main(){
  int number1{6};
  int number2{2};
  int suma = number1 + number2;
  int resta = number1 - number2;
  int multilpicacion = number1 * number2;
  int division = number1 / number2;
  int modulo = number1 % number2;
  bool igualdad = (number1 == number2);
  bool menor_que = (number1 < number2);
  bool mayor_que = (number1 > number2);
  bool mayor_o_igual = (number1 >= number2);
  bool menor_o_igual = (number1 <= number2);
  bool no_igual = (number1 != number2);

  cout << "El resultado de operar " << number1 << " + " << number2 << " es " << suma << endl;
  cout << "El resultado de operar " << number1 << " - " << number2 << " es " << resta << endl;
  cout << "El resultado de operar " << number1 << " * " << number2 << " es " << multilpicacion << endl;
  cout << "El resultado de operar " << number1 << " / " << number2 << " es " << division << endl;
  cout << "El resultado de operar " << number1 << " % " << number2 << " es " << modulo << endl << endl;
  cout << "El resultado de comparar " << number1 << " = " << number2 << " es " << igualdad << endl;
  cout << "El resultado de comparar " << number1 << " < " << number2 << " es " << menor_que << endl;
  cout << "El resultado de comparar " << number1 << " > " << number2 << " es " << mayor_que << endl;
  cout << "El resultado de comparar " << number1 << " >= " << number2 << " es " << mayor_o_igual << endl;
  cout << "El resultado de comparar " << number1 << " <= " << number2 << " es " << menor_o_igual << endl;
  cout << "El resultado de comparar " << number1 << " != " << number2 << " es " << no_igual << endl;
}