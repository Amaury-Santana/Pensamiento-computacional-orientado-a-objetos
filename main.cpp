
//Mando a llamar las clases
#include <iostream>
#include "cliente.h"
#include "reserva.h"
#include "habitacion.h"
using namespace std;

//En esta parte sinceramente no se si estoy del todo bien pero la idea es crear objetos de cada clase, ya luego que aprenda es pedirselo al usuario pero sería algo asi:
int main() {
    // Creo un objeto de la clase Cliente
    Cliente cliente1("Ana García", "555-1234", 30, "Tarjeta de Crédito");

    //Y asi con cada clase

    //Luego hacer lo mismo con la parte de los detalles del cliente, la reserva y la disponibilidad de la habitación, masomenos asi:
    // Mostrar detalles del cliente y de la reserva
    cout << "Detalles del Cliente y de la Reserva:\n";
    reserva1.mostrarDetallesReserva();

    //Y asi con lo demás.

    return 0;
}


