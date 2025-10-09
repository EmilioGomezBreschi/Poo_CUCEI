/*
Emilio Gomez Breschi
224778819
07/10/2025
Actividad 5
*/

#include <cmath>
#include <iostream>

using namespace std;

class FiguraGeometrica
{
protected:
  string nombre;
  double altura;

public:
  FiguraGeometrica(string nom, double alt) : nombre(nom), altura(alt) {}
  virtual double area()        = 0;
  virtual double perimetro()   = 0;
  virtual void mostrarFigura() = 0;
};

class Cuadrado : public FiguraGeometrica
{
private:
  double lado;

public:
  Cuadrado(double lado) : FiguraGeometrica("Cuadrado", lado), lado(lado) {}
  double area()
  {
    return lado * lado;
  }
  double perimetro()
  {
    return 4 * lado;
  }
  void mostrarFigura()
  {
    cout << "Figura: " << nombre << endl;
    cout << "Lado: " << lado << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
  }
};

class Rectangulo : public FiguraGeometrica
{
private:
  double base;
  double altura;

public:
  Rectangulo(double base, double altura)
    : FiguraGeometrica("Rectangulo", altura), base(base), altura(altura)
  {
  }
  double area()
  {
    return base * altura;
  }
  double perimetro()
  {
    return 2 * (base + altura);
  }
  void mostrarFigura()
  {
    cout << "Figura: " << nombre << endl;
    cout << "Base: " << base << ", Altura: " << altura << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
  }
};

class Circulo : public FiguraGeometrica
{
private:
  double radio;

public:
  Circulo(double radio) : FiguraGeometrica("Circulo", radio), radio(radio) {}
  double area()
  {
    return 3.1416 * radio * radio;
  }
  double perimetro()
  {
    return 2 * 3.1416 * radio;
  }
  void mostrarFigura()
  {
    cout << "Figura: " << nombre << endl;
    cout << "Radio: " << radio << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
  }
};

class Equilatero : public FiguraGeometrica
{
private:
  double base;
  double altura;

public:
  Equilatero(double base, double altura)
    : FiguraGeometrica("Triangulo", altura), base(base), altura(altura)
  {
  }
  double area()
  {
    return 0.5 * base * altura;
  }
  double perimetro()
  {
    // Asumimos un triángulo equilátero para simplificar
    return 3 * base;
  }
  void mostrarFigura()
  {
    cout << "Figura: " << nombre << endl;
    cout << "Base: " << base << ", Altura: " << altura << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
  }
};

int main()
{
  Cuadrado cuadrado(5);
  cuadrado.mostrarFigura();
  cout << endl;

  Rectangulo rectangulo(4, 6);
  rectangulo.mostrarFigura();
  cout << endl;

  Circulo circulo(3);
  circulo.mostrarFigura();
  cout << endl;

  Equilatero equilatero(4, 5);
  equilatero.mostrarFigura();
  cout << endl;

  return 0;
}
