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
