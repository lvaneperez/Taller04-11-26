#pragma once
#include <string>
#include <iostream>

using namespace std;

class Propietario;

class Vehiculo {
    protected:
    string placa;
    Propietario* propietario;

    public:
    Vehiculo(string placa);
    virtual ~Vehiculo();

    string getPlaca() const;
    void setPropietario(Propietario* propietario);
    Propietario* getPropietario() const;

    virtual int cobrar() const = 0;
    virtual string info() const = 0;

};
ostream& operator<<(ostream& salida, const Vehiculo& vehiculo);