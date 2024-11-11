#ifndef HABITACION_H
#define HABITACION_H

#include <string>
using namespace std;

//Crear la clase privada y la pública parta ejecutarla en el compilador
class Habitacion {
private:
    int numeroHabitacion;
    string tipo;
    bool disponible;
    float precio;

public:
    Habitacion(int num, string t, bool disp, float p);
    void mostrarInfoHabitacion();
    void cambiarDisponibilidad(bool estado);
};

#endif
