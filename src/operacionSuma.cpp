#include <iostream>
#include "ExcepcionErrorSuma.h"
#include "operacionSuma.h"
#include <string>
#include <sstream>



OperacionSuma::OperacionSuma(ProveedorFormato *proveedorFormato) {
    this->proveedorFormato = proveedorFormato;
}

string OperacionSuma::Ejecute(string valor) {
    string i;  // i es el valor de retorno de la exprecion de salida;
    try {
        stringstream stream(valor);
        int numero_1, numero_2;
        string operador;
        stream>>numero_1;
        stream>>operador;
        stream>>numero_2;
        if (operador=="+"){
            int sumando = numero_1+numero_2;
            string resultado(std::to_string(sumando));
            i= proveedorFormato->ObtenerFormato() + resultado ;
        }
        else{
            throw ExcepcionErrorSuma();
        } 
    }catch (string &excepcion){
            cerr << excepcion << endl;
    }
    return i;
}