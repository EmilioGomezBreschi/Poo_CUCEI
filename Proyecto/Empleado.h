#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado
{
private:
  unsigned int id_empleado;
  string nombre;
  int id_rol;
  string usuario;
  string contraseña;

public:
  // Constructor
  Empleado();
  // Destructor
  ~Empleado();

  void registrar();
  bool autenticar();
  void modificar();
  void eliminar();
};

#endif
