#ifndef RESERVA_H
#define RESERVA_H

#include "cliente.h"
#include "habitacion.h"
#include <string>
using namespace std;

class Reserva {
protected:
    int idReserva;
    Cliente cliente;
    Habitacion habitacion;
    string fechaInicio;
    string fechaFin;

public:
    Reserva(int, Cliente, Habitacion, string, string);
    virtual void mostrarDetallesReserva() const;
    float calcularCostoTotal() const;
    void setFechaInicio(string);
    void setFechaFin(string);
};

#endif
