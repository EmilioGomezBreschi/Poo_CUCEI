#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{
private:
  int id_cliente;
  string nombre;
  string apellido;
  string telefono;
  string correo;
  string direccion;

public:
  // Constructor
  Cliente();
  // Destructor
  ~Cliente();

  // Métodos para gestionar clientes
  void capturar();
  void mostrar();
  Cliente buscar(int id_cliente);
  void eliminar(int id_cliente);
  void modificar(int id_cliente);
};

#endif
