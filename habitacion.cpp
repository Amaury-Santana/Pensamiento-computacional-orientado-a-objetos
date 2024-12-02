#include "habitacion.h"
#include <iostream>
using namespace std;

// Constructor
Habitacion::Habitacion(int num, string t, bool disp, float p)
    : numeroHabitacion(num), tipo(t), disponible(disp), precio(p) {}

// Cambia la disponibilidad
void Habitacion::cambiarDisponibilidad(bool estado) {
    disponible = estado;
}

// Muestra información de la habitación
void Habitacion::mostrarInfoHabitacion() const {
    cout << "Habitacion No: " << numeroHabitacion << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Disponible: " << (disponible ? "Si" : "No") << endl;
    cout << "Precio: $" << precio << endl;
}

float Habitacion::getPrecio() const {
    return precio;
}

void Habitacion::setPrecio(float p) {
    precio = p;
}
