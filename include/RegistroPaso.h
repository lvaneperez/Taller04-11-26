#pragma once
#include "Vehiculo.h"
#include <string>
#include <iostream>

using namespace std;

class RegistroPaso {
    private:
    Vehiculo* vehiculo;
    string placa;
    int valorCobrado;

    public:
    RegistroPaso(Vehiculo* vehiculo);
    ~RegistroPaso();

    string getPlaca() const;
    int getValorCobrado() const;
    Vehiculo* getVehiculo() const;
};
ostream& operator<<(ostream& salida, const RegistroPaso& registro);