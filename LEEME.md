codigo estudiantil: 104626011506

Preguntas Taller

1. por que no se puede crear un objeto de vehiculo directamente?
Porque Vehiculo es una clase general que no tiene definidas por completo las funciones cobrar() e info(). Estas funciones deben tener su propia implementacion en cada tipo de vehiculo, como carro, Moto,Bus y Camion.
2. Por que el destructor de Vehiculo es virtual?
Porque los vehiculos se almacenan mediante punteros de tipo Vehiculo*. Al eliminar uno de esos punteros, el destrcitor virtual permite que primero se ejecute el destructor del Vehiculo especifico y luego el de Vehiculo, evitando que quede sin ejecutarse parte de su destruccion.
3. ¿Que hace tu programa si se llama al registro de un paso con un puntero nulo, y por que decidiste eso?
Lo que hace es que cuando registrarPaso() recibe un puntero nullptr, lanza una excepcion DatosInvalidosException antes de intentar utilizarlo. Decidi hacerlo asi para evitar acceder a un vehiculo que no existe y prevenir errores durante el registro.
