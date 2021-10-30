/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Daniel Del Rosario Pimienta
 * @date 30 Oct 2021
 * @brief boolean operators
 * Truth table
 *
 */
#include <iostream>
using namespace std;

int main(){
  const bool a[4] = {true,true,false,false};  //Declare both array of booleans
  const bool b[4] = {true,false,true,false};

  cout << "| A | B | AND | OR | NOT A | NOT B |" << endl; //Draw and fill the table
  cout << "| " << a[0] << " | " << b[0] << " |  " << (a[0] && b[0]) << "  |  " << (a[0] || b[0]) << " |   " << !a[0] << "   |   " << !b[0] << "   |" << endl;
  cout << "| " << a[1] << " | " << b[1] << " |  " << (a[1] && b[1]) << "  |  " << (a[1] || b[1]) << " |   " << !a[1] << "   |   " << !b[1] << "   |" << endl;
  cout << "| " << a[2] << " | " << b[2] << " |  " << (a[2] && b[2]) << "  |  " << (a[2] || b[2]) << " |   " << !a[2] << "   |   " << !b[2] << "   |" << endl;
  cout << "| " << a[3] << " | " << b[3] << " |  " << (a[3] && b[3]) << "  |  " << (a[3] || b[3]) << " |   " << !a[3] << "   |   " << !b[3] << "   |" << endl;
  return 0;
}