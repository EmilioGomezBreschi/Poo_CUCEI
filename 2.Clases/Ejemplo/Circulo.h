#include "Circulo.cpp"

#define Pi 3.14159265

// Constructor por defecto
inline Circulo::Circulo()
{
  rad  = new float;
  *rad = 0;
}

// Destructor
inline Circulo::~Circulo()
{
  delete rad;
}

// Establecer el radio del círculo
inline float Circulo::radio(float r)
{
  *rad = r;
  return *rad;
}

// Establecer el diámetro del círculo
inline float Circulo::diametro(float d)
{
  *rad = d / 2;
  return *rad;
}

// Cálculo del área del círculo
inline float Circulo::area()
{
  return Pi * (*rad) * (*rad);
}

// Cálculo del perímetro del círculo
inline float Circulo::perimetro()
{
  return 2 * Pi * (*rad);
}
