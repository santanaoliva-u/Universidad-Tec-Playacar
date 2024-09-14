#include <iostream>

int main() {
    int cantidad;
    std::cout << "Ingrese la cantidad de números a evaluar: ";
    std::cin >> cantidad;
    int sumaPares = 0;
    int sumaDivisibles = 0;
    int contadorPares = 0;
    int contadorDivisibles = 0;
    int suma = 0;
    
    for (int i = 0; i < cantidad; i++) {
        int numero;
        std::cout << "Ingrese un número: ";
        std::cin >> numero;
        suma = suma+numero;
        if (numero % 2 == 0) {
            sumaPares += numero;
            contadorPares++;
        }
        if (numero % 3 == 0) {
            sumaDivisibles += numero;
            contadorDivisibles++;
        }
    }
    
    promedio = suma/numero;
    std::cout<< "El promedio total de los numeros: "<<promedio<< std::endl;
    
    if (contadorPares > 0) {
        double promedioPares = static_cast<double>(sumaPares) / contadorPares;
        std::cout << "Promedio de números pares: " << promedioPares << std::endl;
    }

    if (contadorDivisibles > 0) {
        double promedioDivisibles = static_cast<double>(sumaDivisibles) / contadorDivisibles;
        std::cout << "Promedio de números divisibles por 3: " << promedioDivisibles << std::endl;
    }

    std::cout << "Cantidad de números divisibles por 2: " << contadorPares << std::endl;
    std::cout << "Cantidad de números divisibles por 3: " << contadorDivisibles << std::endl;

    return 0;
}
