#pragma once
#include <string>

using namespace std;

class Emergencia {
    protected
    string unidad;
    string descripcion;
    bool enEmergencia;

    public:
     Emergencia (string unidad, string descripcion );

     void setUnidad (string unidad);
     void setDescripcion (string descripcion);
    

     string getUnidad();
     string getDescripcion();
    
}