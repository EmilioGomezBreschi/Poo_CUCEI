#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario
{
private:
  unsigned int id_usuario;
  string nombre;
  string rol;
  string usuario;
  string contraseña;

public:
  // Constructor
  Usuario();
  // Destructor
  ~Usuario();

  void registrar();
  bool autenticar();
  void modificar();
  void eliminar();
};

#endif
