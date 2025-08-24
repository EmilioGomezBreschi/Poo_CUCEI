#include <iostream>
using namespace std;

int suma()
{
  int total = 0;
  for (int i = 1; i <= 100; i++)
  {
    total += i;
  }
  return total;
}

int main()
{
  cout << "La suma de los números del 1 al 100 es: " << suma() << endl;
  return 0;
}