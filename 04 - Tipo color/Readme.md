## Santillanso
### Legajo: 1288465
### Apellido: Santillan
### Nombre: Sonia
### Trabajo 4 - Tipo color
## Objetivos
• Demostrar capacidad de construcción de tipos compuestos basados en tipos
existentes atómicos.
## Temas
• Tipos.
• Definición de conjunto de valores con struct.
• Tipos enteros de ancho fijo.
• Variables externas.
• Variables const.
## Problema
Diseñar un tipo Color basado en el modelo RGB1, con tres canales de 8 bits.
Todo color está compuesto por tres componentes: intensidad de red (rojo), de
green (verde), y de blue (azul). Cada intensidad está en el rango [0, 255]. Definir
los valores para rojo, azul, verde, cyan, magenta, amarillo, negro, y blanco. Dos
colores se pueden mezclar, lo cual produce un nuevo color que tiene el promedio
de intensidad para cada componente.
## Restricciones
• Las operaciones de proyección para red, green, y blue se implementan con
acceso directo a los componentes, no es necesario definir getters especiales.
Por la misma razón, los setters no son necesarios.
• Utilizar el tipo uint8_t de cstdint, si no es posible, usar unsigned char.
• Los colores primarios, secundarios, negro y blanco deben implementarse
como ocho variables declaradas fuera de main y de toda función, con el
calificador const para que no puedan modificarse.
• Implementar la operación IsIgual que retorna true si un color es igual a otro,
si no, false.
## Tareas
1. Especificar matemáticamente el tipo en Color.md:
a. Especificar el conjunto de operaciones.
b. Especificar el conjunto de valores.
2. Diseñar y codificar las pruebas en main.
3. Declarar los prototipos de las operaciones arriba de main.
4. Declarar Color antes de los prototipos las operaciones.
5. Compilar: Luego de finalizar tareas anteriores, estamos en condiciones de
compilar. Deberíamos obtener error de linkeo (i.e., vinculación) pero no de
compilación.
6. Codificar las definiciones de las operaciones, debajo de main.
7. Probar: Luego de las definiciones, deberíamos poder realizar el proceso de
traducción completo (i.e., compilación y linkeo) sin errores. Una vez obtenido
el programa ejecutable, deberíamos poder ejecutarlo sin errores.
## Hipótesis
1. Se pide diseñar un Tipo de dato compuesto, para representar colores según el modelo RGB y operar con los mismos.
2. Para respetar el rango y tamaño del Tipo de dato a diseñar, se debe tener en cuenta que cada color tiene una intensidad que va del 0 al 255, lo que representa cada uno de los tres canales que componen a cada color.
## Refinamiento del problema
1. Se definirá el tipo de dato Tipocolor, como un struct que posee tres componentes: rojo, azul, verde; cada uno de estos compuesto por tres uint8_t (entero positivo que puede tomar valores del 0 al 255). A partir de esto, se formularán operaciones que permitan trabajar con este tipo de dato. 
## Modelo IPO
1. Entrada: Color - Tipo de dato: Tipocolor {rojo (uint8_t), verde (uint8_t), azul (uint8_t)} -
2. Proceso: Operaciones (Suma, Resta, Mezcla, IsIgual)
3. Salida: 
- Suma: Color (Tipocolor)
- Resta: Color (Tipocolor)
- Mezcla: Color (Tipocolor)
- IsIgual: True/False (Bool)
## Crédito extra
Indicar porque, si no es posible usar uint8_t, es correcto usar unsigned char y no char.
#### Rango char: de -128 a 127
#### Rango unsigned char: 0 a 255

