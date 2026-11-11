#include "Propietario.h"

Propietario::Propietario(string nombre, string documento, bool vecino) : Persona(nombre, documento){
    this->vecino = vecino;
}

Propietario::~Propietario(){

}

bool Propietario::esVecino() const {
    return vecino;
}
string Propietario::descripcion() const {
    string estado;
    if(vecino) {
        estado = " Si es vecino";
    }else {
        estado = " No es vecino";
    }
    return "Propietario:" + getNombre() + ", Documento:" + getDocumento() + ", Vecino:" + estado;
};