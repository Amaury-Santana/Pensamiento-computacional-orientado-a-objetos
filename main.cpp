#include <iostream>
#include "cliente.cpp"
#include "reserva.cpp"
#include "habitacion.cpp"
using namespace std;

// linea para ejecutar el programa: g++ main.cpp -o main.out
//  ./main.out

int main() {
    
    Cliente cliente1("Ana García", "555-1234", 30, "Tarjeta de Crédito");

   
    Reserva reserva1(101, cliente1, "2024-11-20", "2024-11-25");

    
    Habitacion habitacion1(201, "Doble", true, 200.0);

    
    cout << "Detalles del Cliente y de la Reserva:\n";
    reserva1.mostrarDetallesReserva();

    
    cout << "\nDetalles de la Habitación:\n";
    habitacion1.mostrarInfoHabitacion();

    
    habitacion1.cambiarDisponibilidad(false);
    cout << "\nDespués de la Reserva, la Disponibilidad de la Habitación es:\n";
    habitacion1.mostrarInfoHabitacion();

    return 0;
}
