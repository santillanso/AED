## Tipo Polígono
## Objetivos
• Demostrar capacidad de construcción de tipos compuestos basados en otros
tipos compuestos.
## Temas
• Tipos.
• Definición de conjunto de valores con struct.
• Definición de conjunto de operaciones con funciones y pasaje de argumentos
por referencia (i.e., variable).
## Problema
Desarrollar el tipo de dato Polígono que representa polígonos con color en el
plano. Las operaciones son: AddVértice, GetVértice, SetVértice, RemoveVértice,
GetCantidadLados, y Get_GetPerímetro.
## Restricciones
• Las pruebas deben realizarse con assert, sin usar cin ni cout.
## Tareas
1. Especificar el tipo matemáticamente.
2. Diseñar y codificar las pruebas en main.
3. Implementar el tipo.
## Productos
1. readme.md
2. Polígono.md // Especificación
3. Polígono.cpp // Implementación y pruebas
## Hipótesis
-  Se pide diseñar un Tipo de dato para representar polígonos en el plano, compuestos de una cantidad finita de puntos, un color; y un conjunto de operaciones.
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
## Diseño de la solución
#### Se definirá el tipo de dato Polígono, como un struct que posee tres componentes: 
- struct Poligono { unsigned n; array<Punto, 9> puntospoligono; Color colorpoligono;} con:
1. array<Punto, 9> puntospoligono: puntos del polígono, 9 número máximo de puntos
2. n unsigned: número de puntos del polígono
3. struct color: color del polígono



