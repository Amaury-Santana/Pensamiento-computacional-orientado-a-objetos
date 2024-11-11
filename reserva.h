#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include "cliente.h"
using namespace std;

class Reserva {
private:
    int idReserva;
    Cliente cliente;
    string fechaInicio;
    string fechaFin;

public:
    Reserva(int id, Cliente c, string inicio, string fin);
    void mostrarDetallesReserva();
};

#endif

