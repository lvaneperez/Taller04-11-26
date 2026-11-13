#include "Camion.h"
#include "Variante.h"
#include "Excepciones.h"
#include <iostream>

using namespace std;

Camion::Camion(string placa, int ejes) : Vehiculo(placa) {
    if (ejes < 2) {
        throw DatosInvalidosException("El camion debe tener al menos dos ejes");

    }
    this-> ejes = ejes;
}
Camion::~Camion() {
    cout << "Destruyendo Camion"<< getPlaca() << endl; }
int Camion::getEjes() const {
    return ejes;
}
void Camion::agregarEje(){
    ejes++;
}


int Camion::cobrar() const {

    int tarifaPorEje = 8000 + 100 * DECENA;
    int tarifaTotal = tarifaPorEje * ejes;

    return tarifaTotal;
}

string Camion::info() const {
    return "Camion - Placa:" + getPlaca() + ", Ejes:" + to_string(ejes);
}