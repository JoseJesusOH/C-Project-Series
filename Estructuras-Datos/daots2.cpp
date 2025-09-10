#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

enum Color { Rojo, Verde, Azul };

int main() {
    // 1. Tipos básicos
    int entero = 10;
    float flotante = 3.14f;
    double doble = 3.14159;
    char caracter = 'A';
    bool booleano = true;

    // 2. Modificadores
    short enteroCorto = -32768;
    long enteroLargo = 123456789L;
    long long enteroMuyLargo = 123456789012345LL;
    unsigned int enteroSinSigno = 4000U;

    // 3. Derivados
    int arreglo[5] = {1,2,3,4,5};
    int* puntero = arreglo;
    int &referencia = entero;

    // 4. Definidos por el usuario
    Persona p = {"Juan", 30};
    Color c = Rojo;

    // 5. Modernos
    auto deducido = 42;           // tipo int deducido
    decltype(entero) otroEntero = 50; // tipo igual que entero
    nullptr_t nulo = nullptr;     // tipo nullptr

    // Mostrar tamaños en bytes:
    cout << "== Tipos Basicos ==" << endl;
    cout << "int: " << sizeof(entero) << " bytes" << endl;
    cout << "float: " << sizeof(flotante) << " bytes" << endl;
    cout << "double: " << sizeof(doble) << " bytes" << endl;
    cout << "char: " << sizeof(caracter) << " bytes" << endl;
    cout << "bool: " << sizeof(booleano) << " bytes" << endl;

    cout << "\n== Modificadores ==" << endl;
    cout << "short: " << sizeof(enteroCorto) << " bytes" << endl;
    cout << "long: " << sizeof(enteroLargo) << " bytes" << endl;
    cout << "long long: " << sizeof(enteroMuyLargo) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(enteroSinSigno) << " bytes" << endl;

    cout << "\n== Derivados ==" << endl;
    cout << "arreglo[5]: " << sizeof(arreglo) << " bytes en total" << endl;
    cout << "puntero a int: " << sizeof(puntero) << " bytes" << endl;
    cout << "referencia a int: " << sizeof(referencia) << " bytes (igual que int)" << endl;

    cout << "\n== Definidos por el usuario ==" << endl;
    cout << "struct Persona: " << sizeof(p) << " bytes" << endl;
    cout << "enum Color: " << sizeof(c) << " bytes" << endl;

    cout << "\n== Modernos ==" << endl;
    cout << "auto (int deducido): " << sizeof(deducido) << " bytes" << endl;
    cout << "decltype(entero): " << sizeof(otroEntero) << " bytes" << endl;
    cout << "nullptr_t: " << sizeof(nulo) << " bytes" << endl;

    return 0;
}
