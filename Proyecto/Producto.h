#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto
{
private:
  unsigned int id_producto;
  string nombre;
  string descripcion;
  double precio;
  int stock;

public:
  // Constructor
  Producto();
  // Destructor
  ~Producto();

  void registrar();
  void actualizarPrecio();
  void actualizarStock();
  Producto obtener();
};

#endif
