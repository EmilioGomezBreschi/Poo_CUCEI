#ifndef Circulo_h
#define Circulo_h

class Circulo
{
public:           // Variables y funciones de la clase de �mbito p�blico
  Circulo();      // Constructor por defecto
  Circulo(float); // Constructor sobrecargado
  ~Circulo();     // Destructor

  float radio(float r);    // Funci�n para establecer el radio del c�rculo
  float diametro(float d); // Funci�n para establecer el di�metro del c�rculo
  float area();            // C�lculo del �rea del c�rculo
  float perimetro();       // C�lculo del per�metro del c�rculo

private: // Variables y funciones de la clase de �mbito privado
  float* rad;
};

#endif
