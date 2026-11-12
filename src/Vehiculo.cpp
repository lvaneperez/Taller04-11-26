#include "Vehiculo.h"
#include "Excepciones.h"

Vehiculo::Vehiculo(string placa) {
    if(placa.empty()) {
        throw PlacaInvalidaException("La placa no puede estar vacia");
    
    }
    this->placa = placa;
    this->propietario = nullptr;

}
Vehiculo::~Vehiculo() {

}
string Vehiculo::getPlaca() const {
    return this->placa;
}

void Vehiculo::setPropietario(Propietario* propietario){
    this->propietario = propietario;
}
Propietario* Vehiculo::getPropietario() const {
    return this->propietario;
}
ostream& operator<<(ostream& salida, const Vehiculo& vehiculo) {
    salida << vehiculo.info();
    return salida;
}