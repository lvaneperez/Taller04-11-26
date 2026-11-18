#include "Ambulancia.h"

using namespace std;

Ambulancia :: Ambulancia (string placa, string unidad, strin desc) : Vehiculo (placa), Emergencia(unidad, desc){
    this->enEmergencia = false;
};