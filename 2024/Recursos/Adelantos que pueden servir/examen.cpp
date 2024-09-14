#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <bitset>
#include <string>

void menu() {
    std::cout << "\nC++\n";
    std::cout << "-----------------------------------------------------\n";
    std::cout << "1. Capturar números y contar pares e impares\n";
    std::cout << "2. Capturar un número de 2 a 5 cifras y convertirlo en binario\n";
    std::cout << "3. Capturar una palabra y verificar si contiene dos letras específicas\n";
    std::cout << "4. Salir\n";
    std::cout << "-------------------------------------------------------\n";
}

void capturarNumeros() {
    int n;
    std::cout << "¿Cuántos números desea capturar? ";
    std::cin >> n;
    
    std::vector<int> numeros(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Ingrese un número: ";
        std::cin >> numeros[i];
    }
    
    std::sort(numeros.begin(), numeros.end());
    std::vector<int> numerosPares;
    std::vector<int> numerosImpares;
    
    for (int num : numeros) {
        if (num % 2 == 0) {
            numerosPares.push_back(num);
        } else {
            numerosImpares.push_back(num);
        }
    }
    
    int sumaPares = std::accumulate(numerosPares.begin(), numerosPares.end(), 0);
    int sumaImpares = std::accumulate(numerosImpares.begin(), numerosImpares.end(), 0);

    int sumaParesCuadrado = std::pow(sumaPares, 2);
    int sumaImparesCubo = std::pow(sumaImpares, 3);
    
    std::cout << "Números capturados: ";
    for (int num : numeros) std::cout << num << " ";
    std::cout << "\nNúmeros pares: ";
    for (int num : numerosPares) std::cout << num << " ";
    std::cout << "\nNúmeros impares: ";
    for (int num : numerosImpares) std::cout << num << " ";
    std::cout << "\nLa suma de los números pares es: " << sumaPares << " y su cuadrado es: " << sumaParesCuadrado;
    std::cout << "\nLa suma de los números impares es: " << sumaImpares << " y su cubo es: " << sumaImparesCubo << "\n";
}

void convertirBinario() {
    while (true) {
        std::string numeroStr;
        std::cout << "Ingrese un número de 2 a 5 cifras: ";
        std::cin >> numeroStr;
        
        if (numeroStr.size() >= 2 && numeroStr.size() <= 5 && std::all_of(numeroStr.begin(), numeroStr.end(), ::isdigit)) {
            int numero = std::stoi(numeroStr);
            std::string binario = std::bitset<32>(numero).to_string();
            binario = binario.substr(binario.find('1')); // remove leading zeros
            std::cout << "El número " << numero << " en binario es " << binario << "\n";
            break;
        } else {
            std::cout << "Número no válido. Por favor, ingrese un número de 2 a 5 cifras.\n";
        }
    }
}

void verificarLetras() {
    std::string palabra, letra1, letra2;
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;
    std::cout << "Ingrese la primera letra: ";
    std::cin >> letra1;
    std::cout << "Ingrese la segunda letra: ";
    std::cin >> letra2;

    auto toLower = [](char c) { return std::tolower(static_cast<unsigned char>(c)); };

    bool letra1EnPalabra = std::find_if(palabra.begin(), palabra.end(), [&](char c){ return toLower(c) == toLower(letra1[0]); }) != palabra.end();
    bool letra2EnPalabra = std::find_if(palabra.begin(), palabra.end(), [&](char c){ return toLower(c) == toLower(letra2[0]); }) != palabra.end();
    
    if (letra1EnPalabra) {
        std::string tipo1 = std::isupper(static_cast<unsigned char>(letra1[0])) ? "mayúscula" : "minúscula";
        std::cout << "La letra '" << letra1 << "' (" << tipo1 << ") está en la palabra '" << palabra << "'\n";
    } else {
        std::cout << "La letra '" << letra1 << "' no está en la palabra '" << palabra << "'\n";
    }
    
    if (letra2EnPalabra) {
        std::string tipo2 = std::isupper(static_cast<unsigned char>(letra2[0])) ? "mayúscula" : "minúscula";
        std::cout << "La letra '" << letra2 << "' (" << tipo2 << ") está en la palabra '" << palabra << "'\n";
    } else {
        std::cout << "La letra '" << letra2 << "' no está en la palabra '" << palabra << "'\n";
    }
}

int main() {
    while (true) {
        menu();
        std::cout << "Seleccione una opción: ";
        std::string opcion;
        std::cin >> opcion;
        
        if (opcion == "1") {
            capturarNumeros();
        } else if (opcion == "2") {
            convertirBinario();
        } else if (opcion == "3") {
            verificarLetras();
        } else if (opcion == "4") {
            std::cout << "Saliendo del programa.\n";
            break;
        } else {
            std::cout << "Opción no válida. Por favor, seleccione una opción del 1 al 4.\n";
        }
    }
    return 0;
}