// C++
#include <iostream>
using namespace std;

int main() {
    int E;
    cout << "¿Cuántos números deseas ingresar?" << endl;
    cin >> E;
    int numeros[10000000];
    for (int i = 0; i < E; i++) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < E - 1; i++) {
        for (int j = 0; j < E - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;