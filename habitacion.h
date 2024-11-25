#ifndef HABITACION_H
#define HABITACION_H

#include <string>
using namespace std;

class Habitacion {
private:
    int numeroHabitacion;
    string tipo;
    bool disponible;
    float precio;

public:
    Habitacion(int, string, bool, float);
    void cambiarDisponibilidad(bool);
    void mostrarInfoHabitacion() const;
    float getPrecio() const;
    void setPrecio(float);
};

#endif
