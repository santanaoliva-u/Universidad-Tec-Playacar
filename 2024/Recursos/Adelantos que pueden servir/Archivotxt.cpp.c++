#include <iostream>
#include <fstream>
#include <cstdio> // Para std::remove
#include <string>

class Archivotxt {
private:
    std::string nametxt;
    std::string texto;

public:
    Archivotxt(const std::string& nametxt) : nametxt(nametxt) {
        // Menu
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "-              Menu               -" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "1. Crear nuevo archivo txt        -" << std::endl;
        std::cout << "2. Leer archivo txt               -" << std::endl;
        std::cout << "3. Modificar archivo txt          -" << std::endl;
        std::cout << "4. Agregar texto al archivo txt   -" << std::endl;
        std::cout << "5. Eliminar un archivo txt        -" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Elige una Opción: ";
        int opcion;
        std::cin >> opcion;
        std::cin.ignore();
        std::cout << "-----------------------------------" << std::endl;

        // Menu
        if (opcion == 1) {
            crear_archivo();
        } else if (opcion == 2) {
            leer();
        } else if (opcion == 3) {
            modificar();
        } else if (opcion == 4) {
            agregar_texto();
        } else if (opcion == 5) {
            eliminar();
        } else {
            std::cout << "Opción no válida." << std::endl;
        }
    }

    // Método crear
    void crear_archivo() {
        std::cout << "Ingresa el nombre del archivo nuevo: ";
        std::string nombretxt;
        std::getline(std::cin, nombretxt);

        if (nombretxt.empty()) {
            std::cout << "El nombre del archivo no puede estar vacío." << std::endl;
            return;
        }

        std::ofstream archivo(nombretxt);
        if (archivo) {
            std::cout << "Archivo creado: " << nombretxt << std::endl;
        } else {
            std::cout << "El archivo ya existe o no se pudo crear." << std::endl;
        }
    }

    // Método leer
    void leer() {
        std::cout << "Ingresa el nombre del archivo que quieres leer: ";
        std::string nombretxt;
        std::getline(std::cin, nombretxt);

        std::ifstream archivo(nombretxt);
        if (archivo) {
            std::string linea;
            while (std::getline(archivo, linea)) {
                std::cout << linea << std::endl;
            }
        } else {
            std::cout << "No se pudo abrir el archivo." << std::endl;
        }
    }

    // Método modificar
    void modificar() {
        std::cout << "Ingresa el nombre del archivo cuyo contenido quieres reemplazar: ";
        std::string nombretxt;
        std::getline(std::cin, nombretxt);

        std::cout << "Ingresa el nuevo contenido del archivo: ";
        std::string nuevoContenido;
        std::getline(std::cin, nuevoContenido);

        std::ofstream archivo(nombretxt);
        if (archivo) {
            archivo << nuevoContenido << std::endl;
            std::cout << "Contenido reemplazado exitosamente." << std::endl;
        } else {
            std::cout << "No se pudo abrir el archivo." << std::endl;
        }
    }

    // Método para agregar texto
    void agregar_texto() {
        std::cout << "Ingresa el nombre del archivo al que quieres agregar texto: ";
        std::string nombretxt;
        std::getline(std::cin, nombretxt);

        std::cout << "Ingresa el texto que quieres agregar: ";
        std::string texto;
        std::getline(std::cin, texto);

        std::ofstream archivo(nombretxt, std::ios::app);
        if (archivo) {
            archivo << texto << std::endl;
            std::cout << "Texto agregado exitosamente." << std::endl;
        } else {
            std::cout << "No se pudo abrir el archivo." << std::endl;
        }
    }

    // Método para eliminar un archivo
    void eliminar() {
        std::cout << "Ingresa el nombre del archivo que quieres eliminar: ";
        std::string nombretxt;
        std::getline(std::cin, nombretxt);

        if (std::remove(nombretxt.c_str()) == 0) {
            std::cout << "Archivo eliminado: " << nombretxt << std::endl;
        } else {
            std::cout << "No se pudo eliminar el archivo." << std::endl;
        }
    }
};

int main() {
    Archivotxt archivo("archivo.txt");
    return 0;
}