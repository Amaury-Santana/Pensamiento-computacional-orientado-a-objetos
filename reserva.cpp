#include "reserva.h"
#include <iostream>
using namespace std;

Reserva::Reserva(int id, Cliente c, string inicio, string fin)
    : idReserva(id), cliente(c), fechaInicio(inicio), fechaFin(fin) {}

void Reserva::mostrarDetallesReserva() {
    cout << "Reserva ID: " << idReserva << endl;
    cliente.mostrarInfoCliente();
    cout << "Fecha de Inicio: " << fechaInicio << ", Fecha de Fin: " << fechaFin << endl;
}
