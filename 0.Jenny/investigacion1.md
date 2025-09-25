# Investigacion

## ¿Qué es un tipo de dato en C++?

Un tipo de dato en C++ es una categoría que define el tipo de valor que una variable puede almacenar y las operaciones que se pueden realizar con ese valor. Por ejemplo, los tipos de datos comunes incluyen enteros (int), números de punto flotante (float, double), caracteres (char) y booleanos (bool). Cada tipo de dato tiene un tamaño específico en memoria y un rango de valores que puede representar. Los tipos de datos son fundamentales para la programación, ya que ayudan a garantizar que los datos se manejen correctamente y eficientemente.

## ¿Cuáles son los tipos de datos primitivos en C++?

Los tipos de datos primitivos en C++ son aquellos que son fundamentales y no se pueden descomponer en tipos más simples. Estos incluyen:

1. **int**: Para números enteros.
2. **float**: Para números de punto flotante de precisión simple.
3. **double**: Para números de punto flotante de precisión doble.
4. **char**: Para almacenar un solo carácter.
5. **bool**: Para valores booleanos (true o false).

Estos tipos de datos son la base para la creación de estructuras de datos más complejas en C++.

## ¿Cuáles son los tipos de datos no primitivos en C++?

Los tipos de datos no primitivos en C++ son aquellos que se construyen a partir de los tipos de datos primitivos y pueden almacenar múltiples valores o estructuras más complejas. Algunos ejemplos incluyen:

1. **Arrays**: Colecciones de elementos del mismo tipo.
2. **Strings**: Cadenas de caracteres (aunque en C++ las cadenas se manejan comúnmente con la clase `std::string`).
3. **Structs**: Estructuras que agrupan diferentes tipos de datos bajo un mismo nombre.
4. **Classes**: Plantillas para crear objetos que encapsulan datos y funciones.
5. **Pointers**: Variables que almacenan la dirección de memoria de otra variable.

## Tabla que contenga el rango de operacion en bit y que elementos almacena

| Tipo de Dato | Tamaño (bits) | Rango de Valores                      | Elementos que Almacena               |
|---------------|----------------|--------------------------------------|-------------------------------------|
| int           | 32             | -2,147,483,648 a 2,147,483,647      | Números enteros                     |
| float         | 32             | Aproximadamente ±3.4E±38             | Números de punto flotante (simple)  |
| double        | 64             | Aproximadamente ±1.7E±308            | Números de punto flotante (doble)   |
| char          | 8              | 0 a 255 (ASCII)                      | Caracteres individuales               |
| bool          | 1              | true (1) o false (0)                   | Valores booleanos                   |
| long          | 64             | -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807 | Números enteros grandes             |
| short         | 16             | -32,768 a 32,767                     | Números enteros pequeños            |

## Diferencia entre memoria dinamica y memoria estatica

La memoria estática y la memoria dinámica son dos formas diferentes de gestionar la memoria en un programa.

1. **Memoria Estática**:
   - La memoria estática se asigna en tiempo de compilación y tiene una duración fija durante toda la ejecución del programa.

- Las variables estáticas y globales se almacenan en la memoria estática.
- La memoria estática es gestionada automáticamente por el sistema, y su tamaño debe ser conocido en tiempo de compilación.
- Ejemplo: Variables declaradas fuera de cualquier función o con la palabra clave `static`.
  
 ```C++
   int x = 5;
  ```

1. **Memoria Dinámica**:

- La memoria dinámica se asigna en tiempo de ejecución utilizando operadores como `new` y `delete`.

- Permite la creación de estructuras de datos cuyo tamaño puede cambiar durante la ejecución del programa.
- La memoria dinámica debe ser gestionada manualmente por el programador, lo que incluye la liberación de memoria cuando ya no se necesita para evitar fugas de memoria.
- Ejemplo: Crear un array cuyo tamaño se determina en tiempo de ejecución.

Ejemplo sencillo de memoria dinámica:

  ```C++
    int* arr = new int[n]; // n es un valor determinado en tiempo de ejecución
    // ... usar el array ...
    delete[] arr; // liberar la memoria cuando ya no se necesita
  ```

### Que es new y delete en C++

- `new`: Es un operador que se utiliza para asignar memoria dinámica en C++. Permite la creación de estructuras de datos cuyo tamaño puede cambiar durante la ejecución del programa.
- `delete`: Es un operador que se utiliza para liberar la memoria que fue asignada dinámicamente con `new`. Es importante usar `delete` para evitar fugas de memoria, ya que la memoria dinámica no se libera automáticamente cuando ya no se necesita.

## ¿Qué es un puntero en C++?

Un puntero en C++ es una variable que almacena la dirección de memoria de otra variable. Los punteros son una característica poderosa del lenguaje C++ que permiten la manipulación directa de la memoria, lo que puede ser útil para optimizar el rendimiento y gestionar recursos de manera eficiente.

Los punteros se declaran utilizando el operador asterisco (`*`) y se pueden utilizar para acceder y modificar el valor de la variable a la que apuntan. Además, los punteros son esenciales para trabajar con memoria dinámica, arrays y estructuras de datos complejas.
Ejemplo de declaración y uso de un puntero:

```C++
int var = 42;        // Una variable entera
int* ptr = &var;    // Un puntero que almacena la dirección de 'var'
cout << *ptr;       // Accede al valor de 'var' a través del puntero
```

### Pasarlo por referencia y por valor

Pasar por valor y pasar por referencia son dos formas diferentes de pasar argumentos a funciones en C++.

1. **Pasar por Valor**:
   - Cuando se pasa un argumento por valor, se crea una copia del valor de la variable y se pasa a la función.
   - Cualquier modificación realizada en el parámetro dentro de la función no afecta a la variable original fuera de la función.
   - Ejemplo:

   ```C++
   void modificarValor(int x) {
       x = 10; // Modifica solo la copia local
   }

   int main() {
       int a = 5;
       modificarValor(a);
       cout << a; // Imprime 5, ya que 'a' no fue modificado
   }
   ```

2. **Pasar por Referencia**:
   - Cuando se pasa un argumento por referencia, se pasa la dirección de la variable original a la función.
   - Cualquier modificación realizada en el parámetro dentro de la función afecta directamente a la variable original fuera de la función.
   - Se utiliza el operador ampersand (`&`) en la declaración del parámetro para indicar que se está pasando por referencia.
   - Ejemplo:

``` C++

void imprimir(int* ptr)
{
  *ptr = 100;   // Modifica el valor de 'var' a través del puntero
  cout << *ptr; // Accede al valor de 'var' a través del puntero
}

int main()
{
  int var  = 42;   // Una variable entera
  int* ptr = &var; // Un puntero que almacena la dirección de 'var'
  cout << *ptr;    // Muestra el valor de 'var' a través del puntero
  imprimir(ptr);   // Llama a la función imprimir y muestra el valor
  cout << *ptr;    // Muestra el valor de 'var' a través del puntero
}
```

## Polimorfismo

El polimorfismo es un concepto fundamental en la programación orientada a objetos (POO) que permite que una función o un método pueda comportarse de diferentes maneras según el contexto en el que se utilice. En C++, el polimorfismo se puede lograr principalmente a través de dos mecanismos: el polimorfismo en tiempo de compilación (sobrecarga de funciones y operadores) y el polimorfismo en tiempo de ejecución (herencia y funciones virtuales).

### Polimorfismo en Tiempo de Compilación

1. **Sobrecarga de Funciones**: Permite definir múltiples funciones con el mismo nombre pero con diferentes tipos o números de parámetros. El compilador determina cuál función llamar en función de los argumentos proporcionados.
   - Ejemplo:

   ```C++
   int sumar(int a, int b) {
       return a + b;
   }

   double sumar(double a, double b) {
       return a + b;
   }

   int main() {
       cout << sumar(5, 10);      // Llama a la versión int
       cout << sumar(5.5, 10.2);  // Llama a la versión double
   }
   ```

2. **Sobrecarga de Operadores**: Permite definir cómo los operadores (como +, -, *, etc.) se comportan para tipos de datos definidos por el usuario (clases).
   - Ejemplo:

```C++

class Vector
{
public:
  int x, y;
  Vector(int x, int y) : x(x), y(y) {}
  Vector operator+(const Vector& v)
  {
    return Vector(x + v.x, y + v.y);
  }
};

class Numero
{
public:
  int valor;
  Numero(int valor) : valor(valor) {}
  Numero operator+(const Numero& n)
  {
    return Numero(valor + n.valor);
  }
};

class Cadena
{
public:
  string texto;
  Cadena(string texto) : texto(texto) {}
  Cadena operator+(const Cadena& c)
  {
    return Cadena(texto + c.texto);
  }
};

class Mayor
{
public:
  int num;
  Mayor(int num) : num(num) {}
  bool operator>(const Mayor& m)
  {
    return bool(num > m.num);
  }
};

int main()
{
  Vector v1(1, 2);
  Vector v2(3, 4);
  Numero n1(5);
  Numero n2(10);
  Cadena c1("Hola");
  Cadena c2(" Mundo");
  Cadena c3(" Soy");
  Cadena c4(" Jenny");
  // cout << "v3.x = " << v3.x << ", v3.y = " << v3.y << endl;
  Numero n3 = n1 + n2;
  cout << "n3.valor = " << n3.valor << endl;
  Cadena c5 = c1 + c2 + c3 + c4;
  cout << "c5.texto = " << c5.texto << endl;
  Mayor m1(2);
  Mayor m2(1);
  Mayor m3 = m1 > m2;
  cout << "m3.num = " << m3.num << endl;
  return 0;
}

```

### Polimorfismo en Tiempo de Ejecución

1. **Herencia y Funciones Virtuales**: Permite que una clase derivada sobrescriba un método de la clase base. Cuando se llama a un método a través de un puntero o referencia a la clase base, se ejecuta la versión del método correspondiente a la clase derivada.
   - Ejemplo:

   ```C++
   class Animal {
   public:
       virtual void hacerSonido() {
           cout << "Sonido de animal" << endl;
       }
   };

   class Perro : public Animal {
   public:
       void hacerSonido() override {
           cout << "Guau Guau" << endl;
       }
   };

   class Gato : public Animal {
   public:
       void hacerSonido() override {
           cout << "Miau Miau" << endl;
       }
   };

   int main() {
       Animal* animal1 = new Perro();
       Animal* animal2 = new Gato();
       animal1->hacerSonido(); // Imprime "Guau Guau"
       animal2->hacerSonido(); // Imprime "Miau Miau"
       delete animal1;
       delete animal2;
   }
   ```

   ## Que es public, private y protected

En C++, `public`, `private` y `protected` son especificadores de acceso que controlan la visibilidad y accesibilidad de los miembros (atributos y métodos) de una clase. Estos especificadores determinan qué partes del código pueden acceder a esos miembros.

1. **public**:
   - Los miembros declarados como `public` son accesibles desde cualquier parte del programa, tanto dentro como fuera de la clase.
   - Se utilizan para definir la interfaz pública de la clase, es decir, los métodos y atributos que pueden ser utilizados por otras clases o funciones.
   - Ejemplo:

   ```C++
   class MiClase {
   public:
       int atributoPublico; // Accesible desde cualquier parte
       void metodoPublico() {
           // Código del método
       }
   };
   ```

2. **private**:
   - Los miembros declarados como `private` solo son accesibles desde dentro de la propia clase.
   - No pueden ser accedidos directamente desde fuera de la clase, lo que ayuda a proteger los datos y mantener la encapsulación.
   - Se utilizan para definir atributos y métodos que no deben ser accesibles directamente por otras partes del programa.
   - Ejemplo:

   ```C++
   class MiClase {
   private:
       int atributoPrivado; // No accesible desde fuera de la clase
       void metodoPrivado() {
           // Código del método
       }
   };
   ```

3. **protected**:
   - Los miembros declarados como `protected` son accesibles desde dentro de la propia clase y desde las clases derivadas (subclases).
   - No son accesibles desde fuera de la clase, lo que permite a las subclases acceder a ciertos miembros de la clase base mientras se mantiene cierta protección.
   - Se utilizan cuando se desea permitir el acceso a ciertos miembros a las clases derivadas, pero no a otras partes del programa.
   - Ejemplo:

   ```C++
   class MiClase {
   protected:
       int atributoProtegido; // Accesible desde la clase y subclases
       void metodoProtegido() {
           // Código del método
       }
   };
   ```

## Que es encapsulamiento

El encapsulamiento es un principio fundamental de la programación orientada a objetos (POO) que consiste en agrupar datos (atributos) y métodos (funciones) relacionados  dentro de una misma unidad llamada clase. El objetivo principal del encapsulamiento es proteger los datos internos de una clase y controlar el acceso a ellos, permitiendo que solo se pueda interactuar con esos datos a través de métodos específicos. Esto ayuda a mantener la integridad de los datos y a evitar modificaciones no deseadas desde fuera de la clase.  
El encapsulamiento se logra utilizando especificadores de acceso como `public`, `private` y `protected`. Los atributos suelen declararse como `private` para evitar el acceso directo desde fuera de la clase, mientras que los métodos que permiten interactuar con esos atributos se declaran como `public`. Esto crea una interfaz clara y controlada para la clase, facilitando su uso y mantenimiento.

-ejemplo:

```C++
class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria() : saldo(0.0) {}

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
        }
    }

    void retirar(double cantidad) {
        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
        }
    }

    double obtenerSaldo() const {
        return saldo;
    }
};
int main() {
    CuentaBancaria cuenta;
    cuenta.depositar(100.0);
    cuenta.retirar(50.0);
    cout << "Saldo actual: " << cuenta.obtenerSaldo() << endl; // Imprime 50.0
    return 0;
}

```

## Que es una friend class

Una "friend class" (clase amiga) en C++ es una clase que tiene acceso a los miembros privados y protegidos de otra clase. Esto se logra declarando la clase amiga dentro de la definición de la clase a la que se desea otorgar acceso. Las clases amigas son útiles cuando se necesita permitir que una clase externa acceda a los detalles internos de otra clase sin hacer que esos detalles sean públicos.

Ejemplo:

```C++
class ClaseA {
private:
    int datoPrivado;

public:
    ClaseA() : datoPrivado(0) {}

    friend class ClaseB; // Declara a ClaseB como amiga
};

class ClaseB {
public:
    void mostrarDato(ClaseA& a) {
        cout << "Dato privado de ClaseA: " << a.datoPrivado << endl;
    }
};
int main() {
    ClaseA a;
    ClaseB b;
    b.mostrarDato(a); // ClaseB puede acceder al dato privado de ClaseA
    return 0;
}
```

### ¿Como se utiliza el friend en sobre carga de operadores?

El uso de la palabra clave `friend` en la sobrecarga de operadores en C++ permite que una función externa (que no es miembro de la clase) acceda a los miembros privados y protegidos de la clase. Esto es especialmente útil cuando se desea definir operadores que necesitan acceder a los datos internos de una clase para realizar operaciones.
Ejemplo de sobrecarga de operador utilizando `friend`:

```C++
class Punto {
private:
    int x, y;

public:
    Punto(int x = 0, int y = 0) : x(x), y(y) {}

    // Sobrecarga del operador + como función amiga
    friend Punto operator+(const Punto& p1, const Punto& p2) {
        return Punto(p1.x + p2.x, p1.y + p2.y);
    }

    void mostrar() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punto p1(1, 2);
    Punto p2(3, 4);
    Punto p3 = p1 + p2; // Llama a la función amiga
    p3.mostrar(); // Imprime (4, 6)
    return 0;
}
```
