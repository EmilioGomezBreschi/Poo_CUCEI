#ifndef VENTA_H
#define VENTA_H

#include <string>
using namespace std;

class Venta
{
private:
  int id_venta;
  int id_cliente;
  string fecha;
  double total;
  string estado;

public:
  // Constructor
  Venta();
  // Destructor
  ~Venta();

  void registrar();
  void cancelar();
  void facturar();
  void generarTicket();
};

#endif
