#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unistd.h> // for sleep function
#include <cstdio>  // for remove function

using namespace std;

void crear_archivo() {
    cout << "Ingresa el nombre del archivo nuevo: ";
    string nombretxt;
    cin >> nombretxt;

    if (nombretxt.empty()) {
        cout << "El nombre del archivo no puede estar vacío." << endl;
        return;
    }

    ofstream archivo(nombretxt);
    if (archivo) {
        cout << "Archivo creado: " << nombretxt << endl;
    } else {
        cout << "El archivo ya existe." << endl;
    }
}

void leer() {
    cout << "Ingresa el nombre del archivo que quieres leer: ";
    string nombretxt;
    cin >> nombretxt;

    sleep(2);
    ifstream archivo(nombretxt);
    if (archivo) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
    } else {
        cout << "Ocurrió un error" << endl;
    }
}

void modificar() {
    cout << "Ingresa el nombre del archivo cuyo contenido quieres reemplazar: ";
    string nombretxt;
    cin >> nombretxt;

    cout << "Ingresa el numero de la linea en la cual quieras modificar: ";
    int linea;
    cin >> linea;
    cin.ignore(); // to ignore the newline character left by cin

    cout << "Ingresa el nuevo contenido del archivo: ";
    string nuevo_contenido;
    getline(cin, nuevo_contenido);

    ifstream archivo_lectura(nombretxt);
    if (!archivo_lectura) {
        cout << "Ocurrió un error" << endl;
        return;
    }

    vector<string> lineas;
    string linea_actual;
    while (getline(archivo_lectura, linea_actual)) {
        lineas.push_back(linea_actual);
    }
    archivo_lectura.close();

    if (linea > lineas.size() || linea < 1) {
        cout << "Número de línea inválido." << endl;
        return;
    }

    lineas[linea - 1] = nuevo_contenido;

    ofstream archivo_escritura(nombretxt);
    for (const auto& l : lineas) {
        archivo_escritura << l << endl;
    }

    cout << "Contenido reemplazado exitosamente." << endl;
}

void agregar_texto() {
    cout << "Ingresa el nombre del archivo al que quieres agregar texto: ";
    string nombretxt;
    cin >> nombretxt;

    cout << "Ingresa el texto que quieres agregar: ";
    string texto;
    cin.ignore(); // to ignore the newline character left by cin
    getline(cin, texto);

    ofstream archivo(nombretxt, ios::app);
    if (archivo) {
        archivo << texto << endl;
        cout << "------------------------------" << endl;
        cout << "Texto agregado exitosamente." << endl;
        cout << "------------------------------" << endl;
    } else {
        cout << "Ocurrió un error" << endl;
    }
}

void delete_file() {
    cout << "Ingresa el nombre del archivo que quieres eliminar: ";
    string nombretxt;
    cin >> nombretxt;

    if (remove(nombretxt.c_str()) == 0) {
        cout << "Archivo eliminado: " << nombretxt << endl;
    } else {
        cout << "No se pudo eliminar el archivo." << endl;
    }
}

void mostrar_menu() {
    cout << "Selecciona una opción:" << endl;
    cout << "1. Crear archivo" << endl;
    cout << "2. Leer archivo" << endl;
    cout << "3. Modificar archivo" << endl;
    cout << "4. Agregar texto a archivo" << endl;
    cout << "5. Eliminar archivo" << endl;
    cout << "6. Salir" << endl;
}

int main() {
    while (true) {
        mostrar_menu();
        int opcion;
        cin >> opcion;
        switch (opcion) {
            case 1:
                crear_archivo();
                break;
            case 2:
                leer();
                break;
            case 3:
                modificar();
                break;
            case 4:
                agregar_texto();
                break;
            case 5:
                delete_file();
                break;
            case 6:
                cout << "Saliendo..." << endl;
                return 0;
            default:
                cout << "Opción no válida" << endl;
        }
    }
}
