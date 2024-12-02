#ifndef HABITACION_H
#define HABITACION_H

#include <string>
using namespace std;

// Clase que representa una habitación
class Habitacion {
private:
    int numeroHabitacion; 
    string tipo;          
    bool disponible;      
    float precio;         

public:
    Habitacion(int, string, bool, float); // Constructor
    void cambiarDisponibilidad(bool);    
    void mostrarInfoHabitacion() const;  
    float getPrecio() const;             
    void setPrecio(float);               
};

#endif
