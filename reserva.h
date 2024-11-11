#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include "cliente.h"
using namespace std;

//Crear la clase privada y la pública parta ejecutarla en el compilador
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
