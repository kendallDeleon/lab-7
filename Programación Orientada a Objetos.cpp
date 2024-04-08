#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setOcupacion(string ocupacion) {
        this->ocupacion = ocupacion;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    string getOcupacion() {
        return ocupacion;
    }
};

int main() {
    Persona persona;
    persona.setNombre("Juan");
    persona.setEdad(30);
    persona.setOcupacion("Programador");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Ocupacion: " << persona.getOcupacion() << endl;

    return 0;
}
