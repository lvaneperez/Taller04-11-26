#include "Persona.h"
#include "Excepciones.h"

Persona::Persona(string nombre, string documento) {
    if (nombre.empty() || documento.empty()) {
        throw DatosInvalidosException("El nombre y el documento no pueden estar vacios ");
    }

    this->nombre = nombre;
    this->documento = documento;
}

Persona::~Persona() {

}

string Persona::getNombre() const {
    return nombre;
}
string Persona::getDocumento() const {
    return documento;
}