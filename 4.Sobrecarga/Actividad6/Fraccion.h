
#ifndef FRACCION_H
#define FRACCION_H

class Fraccion
{
public:
  int numerador;
  int denominador;

  Fraccion(int num = 1, int den = 1);
  Fraccion operator+(const Fraccion& f2); // prototipo de la función-operador miembro

  void mostrar(void);

  Fraccion operator-(const Fraccion& f2);
  Fraccion operator*(const Fraccion& f2);
};

#endif // FRACCION_H