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
1. readme.md
2. Punto.md // Especificación
3. Punto.cpp // Implementación y pruebas
## Hipótesis
-  Se pide diseñar un Tipo de dato Punto para representar puntos en el plano, con coordenadas cartesianas (x e y) ; y un conjunto de operaciones.
## Refinamiento del problema
#### Se definirá el tipo de dato Punto, como un struct que posee dos componentes: 
- struct Punto { double x, y; };
## Modelo IPO
- Operaciones:
1. IsIgual
- ENTRADA: Struct Punto1, Struct Punto2
- PROCESAMIENTO: Comparacón de dos Struct Punto
- SALIDA: Bool
2. GetDistancia
- ENTRADA: Struct Punto1, Struct Punto2
- PROCESAMIENTO: Cálcuo de la distancia entre dos puntos
- SALIDA: double d
3. GetDistanciaAlOrigen
- ENTRADA: Struct Punto1, Struct Punto0
- PROCESAMIENTO: Cálcuo de la distancia entre dos puntos, uno de ellos el orígen 
- SALIDA: double do
