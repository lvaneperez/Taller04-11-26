#pragma once
#include "vehiculoo.h"

class carro : public vehiculoo {
    private:
    int pasajeros;
    public:
    Carro(string placa, int pasajeros);
    ~Carro();
    void setPasajeros(int pasajeros);
    int getPasajeros() const; 

    string info() const override;
    int cobrar () const override; 
};