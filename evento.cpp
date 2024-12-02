#include "evento.h"
#include <iostream>
using namespace std;

// Constructor
Evento::Evento(int id, Cliente* c, vector<Habitacion*> habs, string inicio, string fin,
               string nombre, string desc, int asis)
    : Reserva(id, c, habs, inicio, fin), nombreEvento(nombre), descripcion(desc), asistentes(asis) {}

// Muestra detalles del evento
void Evento::mostrarDetallesReserva() const {
    Reserva::mostrarDetallesReserva(); // Muestra detalles generales de la reserva
    cout << "Nombre del Evento: " << nombreEvento << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Asistentes: " << asistentes << endl;
}

// Lo identifica como evento
string Evento::getTipoReserva() const {
    return "Evento";
}
