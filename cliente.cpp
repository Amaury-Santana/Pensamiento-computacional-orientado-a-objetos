#include "cliente.h"
#include <iostream>
using namespace std;

// Constructor
Cliente::Cliente(string n, string t, int e, string fp)
    : nombre(n), telefono(t), edad(e), formaDePago(fp) {}

// Muestra detalles del cliente
void Cliente::mostrarInfoCliente() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Edad: " << edad << endl;
    cout << "Forma de Pago: " << formaDePago << endl;
}

string Cliente::getNombre() const {
    return nombre;
}
int Cliente::getEdad() const {
    return edad;
}
string Cliente::getFormaDePago() const {
    return formaDePago;
}
void Cliente::setNombre(string n) {
    nombre = n;
}
void Cliente::setTelefono(string t) {
    telefono = t;
}
void Cliente::setEdad(int e) {
    edad = e;
}
void Cliente::setFormaDePago(string fp) {
    formaDePago = fp;
}
