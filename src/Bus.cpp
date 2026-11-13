#include "Bus.h"
#include "Variante.h"
#include "Excepciones.h"
#include <iostream>

Bus::Bus(string placa, int puestos) : Vehiculo(placa) {
    if (puestos < 1){
        throw DatosInvalidosException("El bus debe tener al menos un puesto");

    }
    this->puestos = puestos; 
}
Bus::~Bus() {
    cout << "Destruyendo Bus" << getPlaca() << endl;

}
int Bus::cobrar() const {
    int tarifa = 14000 + 300 * DECENA;

    return tarifa;
}
string Bus::info() const {
    return "Bus - Placa:" + getPlaca() + ", Puestos:" + to_string(puestos);
}