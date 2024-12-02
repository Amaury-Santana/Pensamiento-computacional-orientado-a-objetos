#ifndef RESERVA_H
#define RESERVA_H

#include "cliente.h"
#include "habitacion.h"
#include <string>
#include <vector>
using namespace std;

// Clase base para manejar reservas
class Reserva {
protected:
    int idReserva;                     
    Cliente* cliente;                  
    vector<Habitacion*> habitaciones;  
    string fechaInicio;                
    string fechaFin;                   

public:
    Reserva(int, Cliente*, vector<Habitacion*>, string, string); // Constructor
    virtual ~Reserva(); 
    virtual void mostrarDetallesReserva() const; 
    virtual string getTipoReserva() const; 
    float calcularCostoTotal() const;     
};

#endif
