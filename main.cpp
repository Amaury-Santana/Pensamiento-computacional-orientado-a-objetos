#include "cliente.h"
#include "habitacion.h"
#include "reserva.h"
#include "evento.h"
#include <iostream>
#include <vector>
using namespace std;


//Para correr el programa hay que poner esto en la terminal: g++ main.cpp cliente.cpp habitacion.cpp reserva.cpp evento.cpp -o main.out


// Muestra el menú principal
void mostrarMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Crear Reserva Común" << endl;
    cout << "2. Crear Reserva para Evento" << endl;
    cout << "3. Mostrar Reservas y Eventos" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

//Al implementar todo esto ahora el usuario es el que pone todos los datos de la reserva o evento y el programa las hace, para eso creo 4 casos:
//Caso 1. Reserva común
//Caso 2. Eventos
//Caso 3. Mostrar todas las reservas y eventos
//Caso 4. Por si alguna cosa no es válida. 



int main() {
    vector<Reserva*> reservas; // Contiene reservas y eventos
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Entrada invalida. Intente de nuevo.\n";
            continue;
        }

        switch (opcion) {
        case 1: {
            // Crea una reserva común
            string nombre, telefono, formaDePago, fechaInicio, fechaFin, tipoHabitacion;
            int edad, numeroHabitacion;
            float precioHabitacion;

            cin.ignore();
            cout << "Ingrese el nombre del cliente: ";
            getline(cin, nombre);
            cout << "Ingrese el telefono: ";
            getline(cin, telefono);
            cout << "Ingrese la edad: ";
            cin >> edad;
            cin.ignore();
            cout << "Ingrese la forma de pago: ";
            getline(cin, formaDePago);

            Cliente* cliente = new Cliente(nombre, telefono, edad, formaDePago);

            cout << "Ingrese el numero de habitacion: ";
            cin >> numeroHabitacion;
            cin.ignore();
            cout << "Ingrese el tipo de habitacion: ";
            getline(cin, tipoHabitacion);
            cout << "Ingrese el precio de la habitacion: ";
            cin >> precioHabitacion;
            cin.ignore();

            vector<Habitacion*> habitaciones;
            habitaciones.push_back(new Habitacion(numeroHabitacion, tipoHabitacion, true, precioHabitacion));

            cout << "Ingrese la fecha de inicio (YYYY-MM-DD): ";
            getline(cin, fechaInicio);
            cout << "Ingrese la fecha de fin (YYYY-MM-DD): ";
            getline(cin, fechaFin);

            reservas.push_back(new Reserva(reservas.size() + 1, cliente, habitaciones, fechaInicio, fechaFin));
            cout << "Reserva creada con exito!\n";
            break;
        }
        case 2: {
            // Crea un evento
            string nombre, telefono, formaDePago, fechaInicio, fechaFin, tipoHabitacion, nombreEvento, descripcion;
            int edad, numeroHabitacion, asistentes;
            float precioHabitacion;

            cin.ignore();
            cout << "Ingrese el nombre del cliente: ";
            getline(cin, nombre);
            cout << "Ingrese el telefono: ";
            getline(cin, telefono);
            cout << "Ingrese la edad: ";
            cin >> edad;
            cin.ignore();
            cout << "Ingrese la forma de pago: ";
            getline(cin, formaDePago);

            Cliente* cliente = new Cliente(nombre, telefono, edad, formaDePago);

            cout << "Ingrese el numero de habitacion: ";
            cin >> numeroHabitacion;
            cin.ignore();
            cout << "Ingrese el tipo de habitacion: ";
            getline(cin, tipoHabitacion);
            cout << "Ingrese el precio de la habitacion: ";
            cin >> precioHabitacion;
            cin.ignore();

            vector<Habitacion*> habitaciones;
            habitaciones.push_back(new Habitacion(numeroHabitacion, tipoHabitacion, true, precioHabitacion));

            cout << "Ingrese la fecha de inicio (YYYY-MM-DD): ";
            getline(cin, fechaInicio);
            cout << "Ingrese la fecha de fin (YYYY-MM-DD): ";
            getline(cin, fechaFin);

            cout << "Ingrese el nombre del evento: ";
            getline(cin, nombreEvento);
            cout << "Ingrese la descripcion del evento: ";
            getline(cin, descripcion);
            cout << "Ingrese el numero de asistentes: ";
            cin >> asistentes;
            cin.ignore();

            reservas.push_back(new Evento(reservas.size() + 1, cliente, habitaciones, fechaInicio, fechaFin, nombreEvento, descripcion, asistentes));
            cout << "Evento creado con exito!\n";
            break;
        }
        case 3:
            // Muestra reservas y eventos
            for (size_t i = 0; i < reservas.size(); ++i) {
                cout << "Tipo: " << reservas[i]->getTipoReserva() << endl;
                reservas[i]->mostrarDetallesReserva();
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

    // Libera la memoria
    for (size_t i = 0; i < reservas.size(); ++i) {
        delete reservas[i];
    }

    return 0;
}
