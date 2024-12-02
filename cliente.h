#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

// Clase que representa a un cliente
class Cliente {
private:
    string nombre;        
    string telefono;      
    int edad;             
    string formaDePago;   

public:
    Cliente(string, string, int, string); // Constructor
    void mostrarInfoCliente() const;     
    string getNombre() const;            
    int getEdad() const;                 
    string getFormaDePago() const;       
    void setNombre(string);             
    void setTelefono(string);          
    void setEdad(int);                   
    void setFormaDePago(string);         
};

#endif
