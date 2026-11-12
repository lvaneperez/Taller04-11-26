#include "Caseta.h"
#include "Excepciones.h"
#include <iostream>

using namespace std;
Caseta::Caseta(Operador* operador) {
    if (operador == nullptr) {
        throw DatosInvalidosException("La caseta necesita un operador");
    }
    this->operador = operador;
    totalRecaudado = 0;
    cantidadCarros = 0;
    cantidadMotos = 0;
    cantidadBuses = 0;
    cantidadCamiones = 0;
}
Caseta::~Caseta() {
    for (int i = 0; i < registros.size(); i++) {
        delete registros[i];
    }

    cout << "Destruyendo Caseta" << endl;
}
void Caseta::registrarPaso(Vehiculo* vehiculo) {
    if (vehiculo == nullptr) {
        throw DatosInvalidosException("No se puede registrar un vehiculo nulo");
    }

    RegistroPaso* nuevoRegistro = new RegistroPaso(vehiculo);
    registros.push_back(nuevoRegistro);
    totalRecaudado = totalRecaudado + nuevoRegistro->getValorCobrado();
    string informacion = vehiculo->info();

    if (informacion.find("Carro") == 0) {
 cantidadCarros++;
    }
    else if (informacion.find("Moto") == 0) {
      cantidadMotos++;
    }
    else if (informacion.find("Bus") == 0) {
        cantidadBuses++;
    }
    else if (informacion.find("Camion") == 0) {
        cantidadCamiones++;
    }
}

int Caseta::getTotalRecaudado() const {
    return totalRecaudado;
}

int Caseta::getCantidadPasos() const {
  return registros.size();
}
int Caseta::getCantidadCarros() const {
 return cantidadCarros;
}
int Caseta::getCantidadMotos() const {
    return cantidadMotos;
}
int Caseta::getCantidadBuses() const {
    return cantidadBuses;
}
int Caseta::getCantidadCamiones() const {
    return cantidadCamiones;
}
