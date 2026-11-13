#include "Carro.h"
#include "Propietario.h"
#include "Variante.h"
#include "Excepciones.h"
#include <iostream>

using namespace std;

Carro::Carro(string placa, int pasajeros) : Vehiculo(placa) {

    if (pasajeros < 1) {
        throw DatosInvalidosException("El carro debe tener el menos un pasajero");

    }
    this->pasajeros = pasajeros;
}

//Destructor 
Carro::~Carro() {
    cout << "Destruyendo Carro " << getPlaca() << endl;
}
//Modifica la cantidad de pasajeros 
void Carro::setPasajeros(int pasajeros) {

    if(pasajeros < 1) {
        throw DatosInvalidosException("El carro debe tener al menos un pasajero ");
    }
    this->pasajeros = pasajeros;
}
void Carro:: subirPasajero() {
    pasajeros++;
}
//Consulta la cantidad  de pasajeros 
int Carro::getPasajeros() const {
    return pasajeros;
}
//Calcula el valor del peaje
int Carro::cobrar() const {

    int tarifa = 10000 + 200 * UNIDAD;

    if(getPropietario() != nullptr && getPropietario()->esVecino()){
        int descuento = 30 + CENTENA;
        tarifa = tarifa * (100 - descuento) / 100;
    }
    return tarifa;
}
//Muestra la informacion del carro 
string Carro::info() const {

    return "Carro - Placa: " + getPlaca() + " , Pasajeros: " + to_string(pasajeros);
}


