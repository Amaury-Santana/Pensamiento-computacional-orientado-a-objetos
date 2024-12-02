#ifndef EVENTO_H
#define EVENTO_H

#include "reserva.h"
#include <string>
using namespace std;

// Clase que representa un evento
class Evento : public Reserva {
private:
    string nombreEvento; 
    string descripcion;  
    int asistentes;      

public:
    Evento(int, Cliente*, vector<Habitacion*>, string, string, string, string, int); // Constructor
    void mostrarDetallesReserva() const; 
    string getTipoReserva() const;       
};

#endif
