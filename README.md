Tarea Programada 04
James Araya Rodríguez
B70528

Para ejecutar este codigo se utiliza C++17

Si se desea ejecutarlo desde una terminal los codigos necesarios son:
g++ -g./src/*.cpp -o /obj/tarea04.exe

Si se desea ejecutar desde consola de visual se utiliza 
.\obj\Tarea04.exe

recordar configurar el vscode para su correcto funcionamiento

Funciones de la Tarea:

- Reciba como parámetro primero el tipo de operación
    - hello
    - suma
    - hola

- Reciba como segundo parámetro, el valor a utilizar en la operación
    - "suma", "2 + 3"
    - "hola", "todos"
    - "hello", "everyone"

- La función debe devolver ya sea el resultado aritmético si la operación es 'suma', 'hola ' o 'hello ' más el valor recibido como parámetro.

- El formato de la salida de la operación 'hola' debe de ser configurable por el usuario final mediante un archivo de configuración.

- Se incluyen pruebas de excepciones imaginando el peor de los casos 


Se parte desde el ejemplo 20 se analiza y apartir de la comprecion de su funcionamiento se implementan las diferentes caracteristicas.

Ejemplo: ejemplo20.exe hola todos


------

1 - Leer un requerimiento que no se haya trabajado
2 - [RED] Traducir ese requerimiento a un test
3 - Hacer código para satisfacer el test 
    3.1 - Identificar colaboradores (interfaces de otros módulos)
    3.2 - Implementación de prueba de los colaboradores específica para el test
    3.3 - [GREEN] El test debe de pasar
4 - [REFACTOR] Identificar mejoras para el código (mientras no rompan los tests)
5 - Ejecuto el código
6 - Si no satisface todos los requerimientos o falla, volver al paso 1

Estado del ejemplo: Implementando IdentificadorOperaciones_Test

------

Para ejecutar, agregue un archivo "formato.ini" en la carpeta donde tiene el ejecutable (por ejemplo: /obj).
El formato.ini debe de tener el formato para el método `hola`.

El formatoHola.ini continen "Hola a"
El formatoHello.ini contiene "Hello"
El formatoSuma.ini contiene "Resultado"

Esto con el fin de adecuarlo a cada formato y su implementacion 