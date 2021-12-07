#include "operacionSaludo.h"
#include <string>

OperacionSaludo::OperacionSaludo(ProveedorFormato *proveedorFormato) {
    this->proveedorFormato = proveedorFormato;
}

string OperacionSaludo::Ejecute(string valor) {
    return proveedorFormato->ObtenerFormato() + valor;
}