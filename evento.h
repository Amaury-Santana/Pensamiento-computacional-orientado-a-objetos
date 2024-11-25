#ifndef EVENTO_H
#define EVENTO_H

#include "reserva.h"
#include <string>
using namespace std;

class Evento : public Reserva {
private:
    string nombreEvento;
    string descripcion;
    int asistentes;

public:
    Evento(int, Cliente, Habitacion, string, string, string, string, int);
    void mostrarDetallesReserva() const;
    void setNombreEvento(string);
    void setDescripcion(string);
};

#endif

