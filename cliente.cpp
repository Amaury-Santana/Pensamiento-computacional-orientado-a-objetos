#include "cliente.h"
#include <iostream>
using namespace std;

//Definir que el constructor pertenece a la clase Cliente
Cliente::Cliente(string n, string t, int e, string fp) : nombre(n), telefono(t), edad(e), formaDePago(fp) {}

void Cliente::mostrarInfoCliente() {
    cout << "Nombre: " << nombre << ", Teléfono: " << telefono << ", Edad: " << edad
         << ", Forma de Pago: " << formaDePago << endl;
}

string Cliente::getNombre() { return nombre; }
int Cliente::getEdad() { return edad; }
