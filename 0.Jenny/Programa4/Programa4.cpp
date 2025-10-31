#include <iostream>
using namespace std;

/* Tres atributos de tipos de datos primitivo, y uno de usando
una clase como tipo de dato.Encapsular correctamente la clase,
  en otras palabras
  : haga privado sus atributos y realice los métodos interfaz correspondientes.Desarrolle dos
      sobrecargas del constructor Desarrolle la sobrecarga de
    + como operador miembro Desarrolle la sobrecarga de – como operador friend.

    */

class Clase1
{
private:
  int a;
  float b;
  double c;
  class Clase2
  {
  private:
    int d;

  public:
    Clase2(int d) : d(d) {}
    int getD() const
    {
      return d;
    }
    void setD(int d)
    {
      this->d = d;
    }
  } objClase2;

public:
  Clase1(int a, float b, double c, int d) : a(a), b(b), c(c), objClase2(d) {}
  Clase1() : a(0), b(0.0), c(0.0), objClase2(0) {}
  int getA() const
  {
    return a;
  }
  void setA(int a)
  {
    this->a = a;
  }
  float getB() const
  {
    return b;
  }
  void setB(float b)
  {
    this->b = b;
  }
  double getC() const
  {
    return c;
  }
  void setC(double c)
  {
    this->c = c;
  }
  Clase2 getObjClase2() const
  {
    return objClase2;
  }
  void setObjClase2(Clase2 objClase2)
  {
    this->objClase2 = objClase2;
  }
  Clase1 operator+(const Clase1& other)
  {
    return Clase1(a + other.a, b + other.b, c + other.c, objClase2.getD() + other.objClase2.getD());
  }
  friend Clase1 operator-(const Clase1& obj1, const Clase1& obj2)
  {
    return Clase1(obj1.a - obj2.a, obj1.b - obj2.b, obj1.c - obj2.c,
                  obj1.objClase2.getD() - obj2.objClase2.getD());
  }
};

int main()
{
  Clase1 obj1(1, 2.5, 3.5, 4);
  Clase1 obj2(5, 6.5, 7.5, 8);
  Clase1 obj3 = obj1 + obj2;
  Clase1 obj4 = obj1 - obj2;
  cout << "obj3.a = " << obj3.getA() << ", obj3.b = " << obj3.getB() << ", obj3.c = " << obj3.getC()
       << ", obj3.d = " << obj3.getObjClase2().getD() << endl;
  cout << "obj4.a = " << obj4.getA() << ", obj4.b = " << obj4.getB() << ", obj4.c = " << obj4.getC()
       << ", obj4.d = " << obj4.getObjClase2().getD() << endl;
  return 0;
}
