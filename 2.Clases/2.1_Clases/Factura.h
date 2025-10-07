#ifndef FACTURA_H
#define FACTURA_H

#include <string>
using namespace std;

class Factura
{
private:
  int id_factura;
  int id_venta;
  string fecha_emision;
  double monto;
  string estado;

public:
  // Constructor
  Factura();
  // Destructor
  ~Factura();

  void emitir();
  void cancelar();
  Factura obtener();
};

#endif
