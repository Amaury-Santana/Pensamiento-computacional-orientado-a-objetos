#include "reserva.h"
#include <iostream>
using namespace std;

// Constructor
Reserva::Reserva(int id, Cliente* c, vector<Habitacion*> habs, string inicio, string fin)
    : idReserva(id), cliente(c), habitaciones(habs), fechaInicio(inicio), fechaFin(fin) {}

// Destructor
Reserva::~Reserva() {
    for (size_t i = 0; i < habitaciones.size(); ++i) {
        delete habitaciones[i];
    }
    delete cliente;
}

// Muestra detalles de la reserva
void Reserva::mostrarDetallesReserva() const {
    cout << "ID Reserva: " << idReserva << endl;
    cliente->mostrarInfoCliente();
    for (size_t i = 0; i < habitaciones.size(); ++i) {
        habitaciones[i]->mostrarInfoHabitacion();
    }
    cout << "Fecha Inicio: " << fechaInicio << ", Fecha Fin: " << fechaFin << endl;
}

// Identifica el tipo de reserva
string Reserva::getTipoReserva() const {
    return "Reserva Común";
}

// Calcula el costo total de la reserva
float Reserva::calcularCostoTotal() const {
    float total = 0.0;
    for (size_t i = 0; i < habitaciones.size(); ++i) {
        total += habitaciones[i]->getPrecio();
    }
    return total;
}
