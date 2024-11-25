#include "cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(string n, string t, int e, string fp) : nombre(n), telefono(t), edad(e), formaDePago(fp) {}

void Cliente::mostrarInfoCliente() const {
    cout << "Nombre: " << nombre << ", Telefono: " << telefono << ", Edad: " << edad 
         << ", Forma de Pago: " << formaDePago << endl;
}

string Cliente::getNombre() const { return nombre; }
int Cliente::getEdad() const { return edad; }
string Cliente::getFormaDePago() const { return formaDePago; }

void Cliente::setNombre(string n) { nombre = n; }
void Cliente::setTelefono(string t) { telefono = t; }
void Cliente::setEdad(int e) { edad = e; }
void Cliente::setFormaDePago(string fp) { formaDePago = fp; }

