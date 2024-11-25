#include "evento.h"
#include <iostream>
using namespace std;

Evento::Evento(int id, Cliente c, Habitacion h, string inicio, string fin, string nombre, string desc, int asis)
    : Reserva(id, c, h, inicio, fin), nombreEvento(nombre), descripcion(desc), asistentes(asis) {}

void Evento::mostrarDetallesReserva() const {
    Reserva::mostrarDetallesReserva();
    cout << "Nombre del Evento: " << nombreEvento << ", Descripcion: " << descripcion
         << ", Asistentes: " << asistentes << endl;
}

void Evento::setNombreEvento(string nombre) { nombreEvento = nombre; }
void Evento::setDescripcion(string desc) { descripcion = desc; }
