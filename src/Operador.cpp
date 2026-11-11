#include "Operador.h"
#include "Excepciones.h"

Operador::Operador(string nombre, string documento, string codigoEmpleado) : Persona(nombre, documento) {
    if (codigoEmpleado.empty()){
        throw DatosInvalidosException("El codigo del empleado no puede estra vacio");

    }
    this->codigoEmpleado = codigoEmpleado;
}
Operador::~Operador(){

}
string Operador::getCodigoEmpleado() const {
    return codigoEmpleado;
}
string Operador::descripcion() const {
    return "Operador: " + getNombre() + ", Documento: "+ getDocumento() + ", codigo del emepleado :" + codigoEmpleado;
}
