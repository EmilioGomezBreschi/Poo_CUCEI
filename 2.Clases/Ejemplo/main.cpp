#include "Circulo.h"

#include <iostream>

using namespace std;
int main()
{
  Circulo c1; // Crear un objeto de la clase Circulo

  cout << "Radio: " << c1.radio(5) << endl;        // Establecer y mostrar el radio
  cout << "Diámetro: " << c1.diametro(20) << endl; // Establecer y mostrar el diámetro
  cout << "Área: " << c1.area() << endl;           // Mostrar el área
  cout << "Perímetro: " << c1.perimetro() << endl; // Mostrar el perímetro

  return 0;
}