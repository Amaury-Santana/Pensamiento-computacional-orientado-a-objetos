#include "cliente.h"
#include "habitacion.h"
#include "reserva.h"
#include "evento.h"
#include <iostream>
#include <vector>
using namespace std;

//Para correr el programa hay que poner esto en la terminal: g++ main.cpp cliente.cpp habitacion.cpp reserva.cpp evento.cpp -o main.out



void mostrarMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Crear Reserva" << endl;
    cout << "2. Crear Evento" << endl;
    cout << "3. Mostrar Reservas y Eventos" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}



//Al implementar todo esto ahora el usuario es el que pone todos los datos de la reserva o evento y el programa las hace, para eso creo 4 casos:
//Caso 1. Reservas
//Caso 2. Eventos
//Caso 3. Mostrar todas las reservas y eventos
//Caso 4. Por si alguna cosa no es válida. 



int main() {
    vector<Reserva*> reservas;
    vector<Evento*> eventos;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 1: {
            // Datos para crear una reserva
            string nombre, telefono, formaDePago, fechaInicio, fechaFin, tipoHabitacion;
            int edad, numeroHabitacion;
            float precioHabitacion;

            cout << "Ingrese el nombre del cliente: ";
            cin >> nombre;
            cout << "Ingrese el telefono: ";
            cin >> telefono;
            cout << "Ingrese la edad: ";
            cin >> edad;
            cout << "Ingrese la forma de pago: ";
            cin >> formaDePago;

            Cliente cliente(nombre, telefono, edad, formaDePago);

            cout << "Ingrese el numero de habitacion: ";
            cin >> numeroHabitacion;
            cout << "Ingrese el tipo de habitacion: ";
            cin >> tipoHabitacion;
            cout << "Ingrese el precio de la habitacion: ";
            cin >> precioHabitacion;

            Habitacion habitacion(numeroHabitacion, tipoHabitacion, true, precioHabitacion);

            cout << "Ingrese la fecha de inicio (YYYY-MM-DD): ";
            cin >> fechaInicio;
            cout << "Ingrese la fecha de fin (YYYY-MM-DD): ";
            cin >> fechaFin;

            reservas.push_back(new Reserva(reservas.size() + 1, cliente, habitacion, fechaInicio, fechaFin));
            cout << "Reserva creada con exito!\n";
            break;
        }
        case 2: {
            // Datos para crear un evento
            string nombre, telefono, formaDePago, fechaInicio, fechaFin, tipoHabitacion, nombreEvento, descripcion;
            int edad, numeroHabitacion, asistentes;
            float precioHabitacion;

            cout << "Ingrese el nombre del cliente: ";
            cin >> nombre;
            cout << "Ingrese el telefono: ";
            cin >> telefono;
            cout << "Ingrese la edad: ";
            cin >> edad;
            cout << "Ingrese la forma de pago: ";
            cin >> formaDePago;

            Cliente cliente(nombre, telefono, edad, formaDePago);

            cout << "Ingrese el numero de habitacion: ";
            cin >> numeroHabitacion;
            cout << "Ingrese el tipo de habitacion: ";
            cin >> tipoHabitacion;
            cout << "Ingrese el precio de la habitacion: ";
            cin >> precioHabitacion;

            Habitacion habitacion(numeroHabitacion, tipoHabitacion, true, precioHabitacion);

            cout << "Ingrese la fecha de inicio (YYYY-MM-DD): ";
            cin >> fechaInicio;
            cout << "Ingrese la fecha de fin (YYYY-MM-DD): ";
            cin >> fechaFin;

            cout << "Ingrese el nombre del evento: ";
            cin >> nombreEvento;
            cout << "Ingrese la descripcion del evento: ";
            cin >> descripcion;
            cout << "Ingrese el numero de asistentes: ";
            cin >> asistentes;

            eventos.push_back(new Evento(eventos.size() + 1, cliente, habitacion, fechaInicio, fechaFin, nombreEvento, descripcion, asistentes));
            cout << "Evento creado con exito!\n";
            break;
        }
        case 3:
            // Mostrar todas las reservas
            for (size_t i = 0; i < reservas.size(); ++i) {
                reservas[i]->mostrarDetallesReserva();
                cout << "--------------------\n";
            }

            // Mostrar todos los eventos
            for (size_t i = 0; i < eventos.size(); ++i) {
                eventos[i]->mostrarDetallesReserva();
                cout << "--------------------\n";
            }
            break;
        case 4:
            cout << "Saliendo del sistema.\n";
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    //  Para liberar la  memoria
    for (size_t i = 0; i < reservas.size(); ++i) {
        delete reservas[i];
    }
    for (size_t i = 0; i < eventos.size(); ++i) {
        delete eventos[i];
    }

    return 0;
}



