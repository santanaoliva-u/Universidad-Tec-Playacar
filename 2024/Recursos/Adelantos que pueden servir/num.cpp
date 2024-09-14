#include <iostream>

int main() {
    int cantidad;
    std::cout << "Ingrese la cantidad de n�meros a evaluar: ";
    std::cin >> cantidad;
    int sumaPares = 0;
    int sumaDivisibles = 0;
    int contadorPares = 0;
    int contadorDivisibles = 0;

    for (int i = 0; i < cantidad; i++) {
        int numero;
        std::cout << "Ingrese un n�mero: ";
        std::cin >> numero;
        if (numero % 2 == 0) {
            sumaPares += numero;
            contadorPares++;
        }
        if (numero % 3 == 0) {
            sumaDivisibles += numero;
            contadorDivisibles++;
        }
    }

    if (contadorPares > 0) {
        double promedioPares = static_cast<double>(sumaPares) / contadorPares;
        std::cout << "Promedio de n�meros pares: " << promedioPares << std::endl;
    }

    if (contadorDivisibles > 0) {
        double promedioDivisibles = static_cast<double>(sumaDivisibles) / contadorDivisibles;
        std::cout << "Promedio de n�meros divisibles por 3: " << promedioDivisibles << std::endl;
    }

    std::cout << "Cantidad de n�meros divisibles por 2: " << contadorPares << std::endl;
    std::cout << "Cantidad de n�meros divisibles por 3: " << contadorDivisibles << std::endl;

    return 0;
}
