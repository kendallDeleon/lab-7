#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
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

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    void setNumeroEstudiante(int numeroEstudiante) {
        this->numeroEstudiante = numeroEstudiante;
    }

    void setPromedioCalificaciones(float promedioCalificaciones) {
        this->promedioCalificaciones = promedioCalificaciones;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }
};

int main() {
    Estudiante estudiante;
    estudiante.setNombre("Maria");
    estudiante.setEdad(25);
    estudiante.setOcupacion("Estudiante");
    estudiante.setNumeroEstudiante(12345);
    estudiante.setPromedioCalificaciones(9.5);

    cout << "Nombre: " << estudiante.getNombre() << endl;
    cout << "Edad: " << estudiante.getEdad() << endl;
    cout << "Ocupacion: " << estudiante.getOcupacion() << endl;
    cout << "Numero de Estudiante: " << estudiante.getNumeroEstudiante() << endl;
    cout << "Promedio de Calificaciones: " << estudiante.getPromedioCalificaciones() << endl;

    return 0;
}
