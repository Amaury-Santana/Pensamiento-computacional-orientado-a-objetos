#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    string nombre;
    string telefono;
    int edad;
    string formaDePago;

public:
    Cliente(string n, string t, int e, string fp);
    void mostrarInfoCliente();
    string getNombre();
    int getEdad();
};

#endif
