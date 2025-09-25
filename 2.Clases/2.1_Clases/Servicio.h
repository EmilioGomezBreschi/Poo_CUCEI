#ifndef SERVICIO_H
#define SERVICIO_H

#include <string>
using namespace std;

class Servicio
{
private:
  int id_servicio;
  string nombre;
  string descripcion;
  double precio;

public:
  // Constructor
  Servicio();
  // Destructor
  ~Servicio();

  void registrar();
  void actualizar();
  void eliminar();
  Servicio obtener();
};

#endif
