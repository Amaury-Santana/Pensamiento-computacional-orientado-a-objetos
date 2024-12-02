# Pensamiento-computacional-orientado-a-objetos
Amaury Manuel Santana Barrios A01708442

# Gestión de Reservas de Hotel
Autor: Amaury Manuel Santana Barrios
Matrícula: A01708442

# Descripción
Pensando en ideas para mi proyecto, recordé que mi mamá trabaja en una agencia donde se gestionan reservas de viajes y habitaciones para clientes. A menudo la veo dedicando mucho tiempo a llamadas telefónicas para realizar estas gestiones, lo que me inspiró a crear un sistema que automatice este proceso.

Este sistema permite gestionar reservas de un hotel de manera eficiente. Los usuarios pueden registrar clientes, crear reservas (comunes o para eventos), y consultar habitaciones disponibles. Está diseñado para optimizar las funciones de recepción y administración de un hotel, haciendo más sencilla la tarea para usuarios como recepcionistas o administradores.

# Clases Principales
Cliente:
Representa a los clientes, almacenando su nombre, teléfono, edad y forma de pago.

Habitación:
Modela las habitaciones del hotel con atributos como número, tipo (sencilla, doble, suite), disponibilidad y precio.

Reserva:
Clase base para manejar reservas generales, asociadas a un cliente y a una o varias habitaciones.

Evento:
Extiende Reserva para incluir eventos, agregando atributos como nombre del evento, descripción y número de asistentes.

# Características
Automatización: Facilita el registro de clientes y la creación de reservas.
Gestión eficiente: Usa punteros para manejar relaciones entre objetos, liberando memoria correctamente.
Menú interactivo: Permite al usuario crear reservas comunes o eventos, y consultar información registrada.
Diferenciación clara: Clasifica reservas comunes y eventos al mostrar información.

