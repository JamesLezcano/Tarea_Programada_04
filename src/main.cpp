#ifndef UNIT_TEST

#include "procesadorInstrucciones.h"
#include "identificadorOperaciones.h"
#include "operacionSaludo.h"
#include "operacionSuma.h"

#include <iostream>
#include <string>
#include <fstream>

#include "proveedorFormato.h"
#include "proveedorFormatoDesdeStream.h"

using namespace std;

int main() {

    try {
        // Inicialización
        // Configuración de la inyección de dependencias
        map<string, Operacion *> operaciones {};
        std::ifstream ifsHola("formatoHola.ini", std::ifstream::in);
        if (!ifsHola.is_open())
        {
            std::cerr << "Error leyendo archivo formato.ini" << std::endl;
            return -1;
        }
        std::ifstream ifsHello("formatoHello.ini", std::ifstream::in);
        if (!ifsHello.is_open())
        {
            std::cerr << "Error leyendo archivo formato.ini" << std::endl;
            return -1;
        }
        std::ifstream ifsSuma("formatoSuma.ini", std::ifstream::in);
        if (!ifsSuma.is_open())
        {
            std::cerr << "Error leyendo archivo formato.ini" << std::endl;
            return -1;
        }

        ProveedorFormato *proveedorFormatoHola = new ProveedorFormatoDesdeStream(&ifsHola);
        ProveedorFormato *proveedorFormatoHello = new ProveedorFormatoDesdeStream(&ifsHello);
        ProveedorFormato *proveedorFormatoSuma = new ProveedorFormatoDesdeStream(&ifsSuma);

        OperacionSaludo *operacionHola = new OperacionSaludo(proveedorFormatoHola);
        OperacionSaludo *operacionHello = new OperacionSaludo(proveedorFormatoHello);
        OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormatoSuma);


        operaciones.insert(std::pair<string, Operacion *>("hola", operacionHola));
        operaciones.insert(std::pair<string, Operacion *>("hello", operacionHello));
        operaciones.insert(std::pair<string, Operacion *>("suma", operacionSuma));

        IdentificadorOperacionesBase *identificadorOperaciones = new IdentificadorOperaciones(operaciones);
        // Fin de inicialización 
        
        ProcesadorInstrucciones *procesador = new ProcesadorInstrucciones(identificadorOperaciones);
       
       
        string resultado = procesador->Procese("hola", "todos");
        cout << "Resultado: " << resultado << endl;

        resultado = procesador->Procese("hello", "everyone");
        cout << "Resultado: " << resultado << endl;

        resultado = procesador->Procese("suma", "2 + 3");
        cout << "Resultado: " << resultado << endl;

        // Cerrar archivo de entrada
        ifsHola.close();
        ifsHola.close();
        ifsSuma.close();

    } catch (char const* exception)
    {
        cerr << "Error: " << exception << endl;
    }

    return 0;
}

#endif