#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void escribirArchivo() {
    ofstream archivo("datos.txt", ios::app);
    if (archivo.is_open()) {
        string nombre;
        int edad;

        cout << "Ingrese el nombre: ";
        getline(cin, nombre);

        cout << "Ingrese la edad: ";
        cin >> edad;

        archivo << nombre << "," << edad << "\n";
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo.";
    }
}

void leerArchivo() {
    ifstream archivo("datos.txt");
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo.";
    }
}

int main() {
    escribirArchivo();
    leerArchivo();

    return 0;
}
