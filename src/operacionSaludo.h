#ifndef OPERACIONSALUDO_H
#define OPERACIONSALUDO_H

#include "operacion.h"
#include "proveedorFormato.h"
#include <string>

using namespace std;

class OperacionSaludo : public Operacion {

    ProveedorFormato *proveedorFormato;

    public:
    OperacionSaludo(ProveedorFormato *proveedorFormato);

    virtual string Ejecute(string valor);

};

#endif