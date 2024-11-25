#include "habitacion.h"
#include <iostream>
using namespace std;

Habitacion::Habitacion(int num, string t, bool disp, float p)
    : numeroHabitacion(num), tipo(t), disponible(disp), precio(p) {}

void Habitacion::cambiarDisponibilidad(bool estado) { disponible = estado; }

void Habitacion::mostrarInfoHabitacion() const {
    cout << "Habitacion No: " << numeroHabitacion << ", Tipo: " << tipo
         << ", Disponible: " << (disponible ? "Si" : "No")
         << ", Precio: " << precio << endl;
}

float Habitacion::getPrecio() const { return precio; }
void Habitacion::setPrecio(float p) { precio = p; }
