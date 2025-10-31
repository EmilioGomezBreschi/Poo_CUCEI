/*
Emilio Gomez Breschi
224778819
09/10/2025
Actividad 6
*/

#include "Fraccion.h"

Fraccion::Fraccion(int num, int den)
{
  this->numerador   = num;
  this->denominador = den;
}

// sobrecarga del operador "+" para hacer suma de fracciones
Fraccion Fraccion::operator+(const Fraccion& f2)
{
  Fraccion fr;
  fr.denominador = this->denominador * f2.denominador;
  fr.numerador   = this->numerador * f2.denominador + f2.numerador * this->denominador;
  return fr;
}

Fraccion Fraccion::operator-(const Fraccion& f2)
{
  Fraccion fr;
  fr.denominador = this->denominador * f2.denominador;
  fr.numerador   = this->numerador * f2.denominador - f2.numerador * this->denominador;
  return fr;
}

Fraccion Fraccion::operator*(const Fraccion& f2)
{
  Fraccion fr;
  fr.denominador = this->denominador * f2.denominador;
  fr.numerador   = this->numerador * f2.numerador;
  return fr;
}

#include "Fraccion.h"

#include <iostream>
using namespace std;

int main()
{
  Fraccion a(1, 2); // fracción 1/2
  Fraccion b(1, 3); // fracción 1/3
  // Las siguientes dos sentencias son equivalentes
  Fraccion c = a.operator+(b); // también se puede usar la notación funcional

  Fraccion d = a - b;
  Fraccion e = a * b;

  cout << "El numerador de la clase a es: " << a.numerador << endl;
  cout << "El denominador de la clase a es: " << a.denominador << endl;

  cout << "\n\nEl numerador de la clase b es: " << b.numerador << endl;
  cout << "El denominador de la clase a es: " << b.denominador << endl;

  cout << "\n\nEl resultado de la suma: " << endl;
  cout << c.numerador << "/" << c.denominador << endl;

  cout << "\n\nEl resultado de la resta: " << endl;
  cout << d.numerador << "/" << d.denominador << endl;

  cout << "\n\nEl resultado de la multiplicacion: " << endl;
  cout << e.numerador << "/" << e.denominador << endl;

  return 0;
}
