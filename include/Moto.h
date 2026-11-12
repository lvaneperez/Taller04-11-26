#pragma once
#include "Vehiculo.h"

class Moto : public Vehiculo {
    private:
    int cilindraje;
    public:
    Moto(string placa, int cilindraje);
    ~Moto() override;

    int getCilindraje() const;
    bool esAltoCilindraje() const;

    int cobrar() const override;
    string info() const override;
};