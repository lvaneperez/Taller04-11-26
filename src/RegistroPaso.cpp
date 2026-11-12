#include "RegistroPaso.h"

RegistroPaso::RegistroPaso(Vehiculo* vehiculo) {
    this->vehiculo = vehiculo;
    this->placa = vehiculo->getPlaca();
    this->valorCobrado = vehiculo->cobrar();
    
}
RegistroPaso::~RegistroPaso() {
    cout << "Destruyendo RegistroPaso" << placa << endl;
}
string RegistroPaso::getPlaca() const {
    return placa;
}
int RegistroPaso::getValorCobrado() const {
    return valorCobrado; 
}
Vehiculo* RegistroPaso::getVehiculo() const {
    return vehiculo;
}
ostream& operator<<(ostream& salida, const RegistroPaso& registro) {
    salida<< "Placa : " << registro.getPlaca() <<", Vehiculo:" << registro.getVehiculo()->info()<< ", Valor cobrado:"<<registro.getValorCobrado();
    
    return salida;
} 