#include "habitacion.h"
#include <iostream>
using namespace std;

Habitacion::Habitacion(int num, string t, bool disp, float p)
    : numeroHabitacion(num), tipo(t), disponible(disp), precio(p) {}

void Habitacion::mostrarInfoHabitacion() {
    cout << "Habitación No: " << numeroHabitacion << ", Tipo: " << tipo << ", Precio: $" << precio 
         << ", Disponible: " << (disponible ? "Sí" : "No") << endl;
}

void Habitacion::cambiarDisponibilidad(bool estado) {
    disponible = estado;
}

