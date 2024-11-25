#include "reserva.h"
#include <iostream>
using namespace std;

Reserva::Reserva(int id, Cliente c, Habitacion h, string inicio, string fin)
    : idReserva(id), cliente(c), habitacion(h), fechaInicio(inicio), fechaFin(fin) {}

void Reserva::mostrarDetallesReserva() const {
    cout << "Reserva ID: " << idReserva << endl;
    cliente.mostrarInfoCliente();
    habitacion.mostrarInfoHabitacion();
    cout << "Fecha Inicio: " << fechaInicio << ", Fecha Fin: " << fechaFin << endl;
}

float Reserva::calcularCostoTotal() const {
    return habitacion.getPrecio(); 
}

void Reserva::setFechaInicio(string inicio) { fechaInicio = inicio; }
void Reserva::setFechaFin(string fin) { fechaFin = fin; }
