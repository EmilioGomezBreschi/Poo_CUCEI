#ifndef REGISTRO_H
#define REGISTRO_H

#include <string>
using namespace std;

class Registro
{
private:
  int id_registro;
  string tipo;
  int id_referencia;
  string fecha;
  string descripcion;

public:
  // Constructor
  Registro();
  // Destructor
  ~Registro();

  void mostrar();
  Registro buscar();
  void eliminar();
  void comprimir();
  void descomprimir();
};

#endif
