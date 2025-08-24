#include <iostream>
using namespace std;

void multiplicar(int numero)
{
  for (int i = 1; i <= 10; i++)
  {
    cout << numero << " x " << i << " = " << numero * i << endl;
  }
}

int main()
{
  int numero;
  cout << "Ingrese un número para ver su tabla de multiplicar: ";
  cin >> numero;
  multiplicar(numero);
  return 0;
}