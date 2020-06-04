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

#### Léxico
celsius: R->R/celsius(fahrenheit)= (5.0/9.0)*(fahrenheit-32.0)
#### Pruebas
assert( AreNear(0.0, celsius(32.0), 0.0001) == true)
bool AreNear(double valor_exacto, double valor_calculado, double tolerancia)
#### Prototipos
double celsius(double fahrenheit)
#### Definiciones
double temperatura_f, temperatura_c
