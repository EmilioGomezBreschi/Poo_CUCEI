#include <iostream>
using namespace std;

class Vector
{
public:
  int x, y;
  Vector(int x, int y) : x(x), y(y) {}
  Vector operator+(const Vector& v)
  {
    return Vector(x + v.x, y + v.y);
  }
};

class Numero
{
public:
  int valor;
  Numero(int valor) : valor(valor) {}
  Numero operator+(const Numero& n)
  {
    return Numero(valor + n.valor);
  }
};

class Cadena
{
public:
  string texto;
  Cadena(string texto) : texto(texto) {}
  Cadena operator+(const Cadena& c)
  {
    return Cadena(texto + c.texto);
  }
};

class Mayor
{
public:
  int num;
  Mayor(int num) : num(num) {}
  bool operator>(const Mayor& m)
  {
    return bool(num > m.num);
  }
};

int main()
{
  Vector v1(1, 2);
  Vector v2(3, 4);
  Numero n1(5);
  Numero n2(10);
  Cadena c1("Hola");
  Cadena c2(" Mundo");
  Cadena c3(" Soy");
  Cadena c4(" Jenny");
  // cout << "v3.x = " << v3.x << ", v3.y = " << v3.y << endl;
  Numero n3 = n1 + n2;
  cout << "n3.valor = " << n3.valor << endl;
  Cadena c5 = c1 + c2 + c3 + c4;
  cout << "c5.texto = " << c5.texto << endl;
  Mayor m1(2);
  Mayor m2(1);
  Mayor m3 = m1 > m2;
  cout << "m3.num = " << m3.num << endl;
  return 0;
}