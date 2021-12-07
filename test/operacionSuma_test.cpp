#include <gtest/gtest.h>
#include <string>
#include "./../src/operacionSuma.h"
#include "proveedorFormatoPrueba.h"
#include "../src/ExcepcionErrorSuma.h"

using namespace std;

namespace {
    TEST(OperacionSuma_Test, Test_Formato_Aplicado2) {

        ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Resultado = ");
        OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);

        string actual = operacionSuma->Ejecute("3 + 7");
        string esperado = "Resultado = 10";

        EXPECT_EQ(esperado, actual);
    }

    TEST(operadorequivocadoTest, Prueba_ExcepcionSuma) {
        EXPECT_THROW({  
            ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Resultado = ");
            OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);
            string actual = operacionSuma->Ejecute("3 - 7");
        }, ExcepcionErrorSuma);
    }

    TEST(valoreserroneosTest, Prueba_ExcepcionSuma) {
        EXPECT_THROW({  
            ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Resultado = ");
            OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);
            string actual = operacionSuma->Ejecute("perro + 7");
        }, ExcepcionErrorSuma);
    }

    TEST(NoHayValoresTest, Prueba_ExcepcionSuma) {
        EXPECT_THROW({  
            ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Resultado = ");
            OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);
            string actual = operacionSuma->Ejecute(" ");
        }, ExcepcionErrorSuma);
    }

     TEST(sinEnterosTest, Prueba_ExcepcionSuma) {
        EXPECT_THROW({  
            ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Resultado = ");
            OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);
            string actual = operacionSuma->Ejecute(" + ");
        }, ExcepcionErrorSuma);
    }
}