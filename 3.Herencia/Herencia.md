# Herencia

- Un deposito estructurado es un tipo de deposito
- Un deposito estructurado tiene nuevos atributos
  - Tipo de interes variable
  - Capital variable

```Cpp
class Deposito {
  private:
    double capital;
    double interes;
    int plazo;
  public:
    Deposito(double c, double i, int p) : capital(c), interes(i), plazo(p) {}
    double calcularInteres() {
      return capital * interes * plazo / 100;
    }
};
```

## Niveles de visibilidad

- Public: Accesible desde cualquier parte
- Protected: Accesible desde la clase y sus descendientes
- Private: Solo accesible en la clase donde se definen las propiedades

## Multiplicidad

| Multiplicidad | Significado     |
| ------------- | --------------- |
| 1             | Uno y solo uno  |
| 0..1          | Cero o uno      |
| N..M          | Desde N hasta M |
| \*            | Cero o mas      |
| 0..\*         | Cero o mas      |
| 1..\*         | Uno o mas       |

## Ejemplo de herencia

```Cpp
class DepositoEstructurado : public Deposito {
  private:
    double tipoInteresVariable;
    double capitalVariable;
  public:
    DepositoEstructurado(double c, double i, int p, double tiv, double cv)
      : Deposito(c, i, p), tipoInteresVariable(tiv), capitalVariable(cv) {}
    
    double calcularInteres() {
      double interesBase = Deposito::calcularInteres();
      double interesVariable = capitalVariable * tipoInteresVariable * plazo / 100;
      return interesBase + interesVariable;
    }
};
```

- `DepositoEstructurado` hereda de `Deposito`
- `DepositoEstructurado` tiene nuevos atributos y métodos
- Se puede sobrescribir métodos de la clase base
- Se puede llamar a métodos de la clase base usando `ClaseBase::metodo()`
- Se puede usar polimorfismo para tratar objetos de diferentes clases de manera uniforme

## Polimorfismo

```Cpp
void mostrarInteres(Deposito* d) {
  std::cout << "Interes: " << d->calcularInteres() << std::endl;
}
```

- La función `mostrarInteres` puede recibir cualquier objeto que sea de tipo `Deposito` o de una clase derivada
- El método `calcularInteres` se comportará de acuerdo al tipo real del objeto

```Cpp
Deposito* d1 = new Deposito(1000, 5, 1);
Deposito* d2 = new DepositoEstructurado(1000, 5, 1, 2, 200);
mostrarInteres(d1); // Llama a Deposito::calcularInteres
mostrarInteres(d2); // Llama a DepositoEstructurado::calcularInteres
```

- Esto permite escribir código más flexible y reutilizable
- Es importante usar destructores virtuales en clases base para evitar fugas de memoria

```Cpp
class Deposito {
  public:
    virtual ~Deposito() {}
    // Resto de la clase...
};
```
