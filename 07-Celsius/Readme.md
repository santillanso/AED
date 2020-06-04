## Santillanso
### Legajo: 1288465
### Apellido: Santillan
### Nombre: Sonia
## Trabajo 7 - Funciones y Comparación de Valores en Punto Flotante — Celsius

### Análisis del Problema.
### Objetivos
• Demostrar el manejo de funciones y valores punto flotante.
### Temas
• Funciones.
• Tipo double.
• División entera y flotante.
• Pruebas con assert.
• Argumentos con valor por defecto.
### Problema
Desarrollar una función que, dada una magnitud en Farehnheit, calcule la
equivalente en Celsius:
Hay dos sub-problemas que se requieren solucionar antes de poder probar e
implementar la función Celsius:
• Valor de la fracción versus la división entera de la expresión 5/9 en C++.
### Restricciones
• Representación no precisa de los tipos flotantes.
Una solución al primer problema es realizar división entre flotantes. Para el
segundo problema, debemos incorporar la comparación con tolerancia, para eso
debemos diseñar una función bool que reciba dos flotantes a comparar y un
flotante que repesente la tolerancia.
### Restricciones
• Las pruebas deben realizarse con assert.
• Los prototipos deben ser:
double Celsius(double);
bool AreNear(double, double, double = 0.001);
### Tareas
1. Escribir el léxico, es decir, la definición matemática de la función.
2. Escribir las pruebas.
3. Escribir los prototipos.
4. Escribir las definiciones.
### Productos
DD-Celsius
|-- readme.md
`-- Celsius.cpp

### Refinamiento:

Se diseñará un programa que muestre en pantalla los tipos de datos de c++ y algunas operaciones con los mismos.

Tipos de datos de salida:

Entero: int = EDAD

Numero con coma flotante de precision doble (64 bits): double = PESO

Numero con coma flotante de precision simple (32 bits): float = ALTURA

Cadena de caracteres: char = nombre 

Booleano: bool = imc

Secuancia de caracteres: Indice de masa corporal

### Diseño de la solución.

Sólo hay salida de los distintos tipos de datos. Se realiza una operación matemática que ejemplifique una de las aplicaciones de dos tipos de datos.

Mostrar resultados.
