#include "Moto.h"
#include "Propietario.h"
#include "Variante.h"
#include "Excepciones.h"
#include "iostream"

Moto::Moto(string placa, int cilindraje) : Vehiculo(placa) {
    if (cilindraje <= 0) {
        throw DatosInvalidosException("El cilindraje debe ser mayor que cero");

    }
    this->cilindraje = cilindraje;
}

Moto::~Moto() {
    cout << "Destruyendo Moto " << getPlaca() << endl;

}
int Moto::getCilindraje() const {
    return cilindraje;
}
bool Moto::esAltoCilindraje() const {
    if (cilindraje > 400) {
        return true;
    }else {
        return false;
    }
}
int Moto::cobrar() const {

    int tarifa = 3000 + 100 * UNIDAD;

    if (getPropietario() != nullptr && getPropietario()->esVecino()){
        int descuento = 30 + CENTENA;
        tarifa = tarifa * (100 - descuento) / 100;
    }
    return tarifa;

}
string Moto::info() const {
    string alto;

    if(esAltoCilindraje()) {
        alto = "Alto cilinadraje";
    }else {
        alto = "Bajo cilindraje";
    }
    return "Moto - Placa:" + getPlaca() + ", Cilindraje:" + to_string(cilindraje) + ", Alto cilindraje:" +  alto;
}