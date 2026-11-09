#include "Excepciones.h"

PlacaInvalidaException :: PlacaInvalidaException (string msj) : msj(msj) {}
const char *PlacaInvalidaException::what() const noexcept { return msj.c_str(); }

DatosInvalidosException::DatosInvalidosException(string msj) : msj(msj) {}
const char *DatosInvalidosException::what() const noexcept { return msj.c_str();}

DescuadreCajaException::DescuadreCajaException(string msj, int diferencia) : msj(msj), diferencia(diferencia) {}
const char *DescuadreCajaException::what() const noexcept { return msj.c_str();}
int DescuadreCajaException::getDiferencia() const { return diferencia; }