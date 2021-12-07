#include <gtest/gtest.h>
#include <string>
#include "./../src/operacionSaludo.h"
#include "proveedorFormatoPrueba.h"

using namespace std;

namespace {
    TEST(OperacionHola_Test, Test_Formato_Aplicado) {

        ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Hola a ");
        OperacionSaludo *operacionHola = new OperacionSaludo(proveedorFormato);

        string actual = operacionHola->Ejecute("todos!!!");
        string esperado = "Hola a todos!!!";

        EXPECT_EQ(esperado, actual);
    }
}