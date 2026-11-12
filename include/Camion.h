#pragma once
#include "Vehiculo.h"

class Camion : public Vehiculo {
    private:
    int ejes;

    public:
    Camion(string placa, int ejes);
    ~Camion() override;

    int getEjes() const;
    void agregarEje();
    int cobrar() const override;
    string info() const override;
};