## Santillanso
### Legajo: 1288465
### Apellido: Santillan
### Nombre: Sonia
### Trabajo 5 - Tipo punto
## Objetivos
• Demostrar capacidad de construcción de tipos compuestos basados en tipos
existentes atómicos.
## Temas
• Tipos.
• Definición de conjunto de valores con struct.
• Definición de conjunto de operaciones con funciones y pasaje de argumentos
por referencia (i.e., variable).
## Problema
Desarrollar el tipo de dato Punto que representa un punto en el plano
con coordenadas cartesianas. Las operaciones son: IsIgual, GetDistancia, y
GetDistanciaAlOrigen.
 Restricciones
• Las pruebas deben realizarse con assert, sin usar cin ni cout.
## Tareas
1. Especificar matemáticamente el tipo en Punto.md:
a. Especificar el conjunto de operaciones.
b. Especificar el conjunto de valores.
2. Diseñar y codificar las pruebas en main.
3. Declarar los prototipos de las operaciones arriba de main.
4. Declarar Punto antes de los prototipos las operaciones.
5. Compilar: Luego de finalizar tareas anteriores, estamos en condiciones de
compilar. Deberíamos obtener error de linkeo (i.e., vinculación) pero no de
compilación.
6. Codificar las definiciones de las operaciones, debajo de main.
7. Probar: Luego de las definiciones, deberíamos poder realizar el proceso de
traducción completo (i.e., compilación y linkeo) sin errores. Una vez obtenido
el programa ejecutable, deberíamos poder ejecutarlo sin errores.
## Productos
DD-Punto
|-- readme.md
|-- Punto.md // Especificación
`-- Punto.cpp // Implementación y pruebas
## Hipótesis
-  Se pide diseñar un Tipo de dato para representar polígonos en el plano, compuestos de una cantidad finita de puntos y un color; y un conjunto de operaciones.
## Refinamiento del problema
#### Se definirá el tipo de dato Polígono, como un struct que posee tres componentes: 
- struct Poligono { unsigned n; array<Punto, 9> puntospoligono; Color colorpoligono;}
1. con struct Punto {double x, y;}: puntos del arreglo
2. n unsigned: número de puntos
3. string color: color del polígono
## Modelo IPO
- Operaciones:
1. AddVértice
- ENTRADA: Struct Polígono
- PROCESAMIENTO: Agrega un Scruct Punto a la entrada
- SALIDA: nula
2. GetVertice
- ENTRADA: Struct Polígono, Struct Punto
- PROCESAMIENTO: Selecciona un Struct Punto del Struct Polígono
- SALIDA: Struct Punto
3. SetVertice
- ENTRADA: Struct Polígono, Struct Punto
- PROCESAMIENTO: Cambia un Struct Punto del Struct Polígono
- SALIDA: nula
4. RemoveVertice
- ENTRADA: Struct Polígono, Struct Punto
- PROCESAMIENTO: saca un Struct Punto del Struct Polígono
- SALIDA: nula
5. GetCantidadLados
- ENTRADA: Struct Polígono
- PROCESAMIENTO: selecciona la componente n del Struct Polígono
- SALIDA: unsigned n
6. Get_Perímetro
- ENTRADA: Struct Polígono
- PROCESAMIENTO: Suma las distancias entre cada punto del polígono
- SALIDA: double perimetro

