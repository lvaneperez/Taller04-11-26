#pragma once
#include "Vehiculo.h"

class Bus : public Vehiculo {
    private:
    int puestos;

    public:
    Bus(string placa, int puestos);
    ~Bus() override;

    int getPuestos() const;

    int cobrar() const override;
    string info() const override;
};