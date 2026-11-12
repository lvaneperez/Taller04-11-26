#pragma once
#include "RegistroPaso.h"
#include "Operador.h"
#include <vector>

using namespace std;
class Caseta {
private:
    Operador* operador;
    vector<RegistroPaso*> registros;
    int totalRecaudado;
    int cantidadCarros;
    int cantidadMotos;
    int cantidadBuses;
    int cantidadCamiones;
public:
    Caseta(Operador* operador);
    ~Caseta();
    void registrarPaso(Vehiculo* vehiculo);
    int getTotalRecaudado() const;
    int getCantidadPasos() const;
    int getCantidadCarros() const;
    int getCantidadMotos() const;
    int getCantidadBuses() const;
    int getCantidadCamiones() const;
};
