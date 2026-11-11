#pragma once
#include "Persona.h"

class Operador : public Persona {
    private:

    string codigoEmpleado;

    public:
    Operador(string nombre, string documento, string codigoEmpleado);
    ~Operador() override;

    string getCodigoEmpleado() const;
    string descripcion() const override;
};