#pragma once
#include "vehiculo"

class Carro: public Vehiculo {
    private:
    int psajeros;
    public:
    Carro(string placa, int pasajeros);
    ~Carro();
    void setPasajeros(int pasajeros);
    int getPasajeros() const;

    string info()const override;
    int cobrar ()const override;
};