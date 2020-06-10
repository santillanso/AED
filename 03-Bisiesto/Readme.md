## Santillanso
### Legajo: 1288465
### Apellido: Santillan
### Nombre: Sonia
### Trabajo 3 - Precedencia de Operadores — Bisiesto
## Objetivos
- Demostrar el uso de operadores booleanos y expresiones complejas.
## Temas
- Expresiones.
- Operadores booleanos: and, or, y not.
- Operador resto: %.
- Asociatividad de Operadores: ID ó DI.
- Precedencia de Operadores.
- Orden de evaluación de Operandos.
- Efecto de lado de una expresión.
## Problema
Dado un año, determinar si es bisiesto.
## Restricciones
- Desarrollar la lógica en una función.
- El nombre de la función debe ser IsBisiesto 1
- Aplicar operadores booleanos
- No aplicar el operador condicional.
- No aplicar if ni switch.
## Tareas
1. Escribir el léxico, es decir, la definición matemática de la función.
2. Escribir las pruebas.
3. Escribir el prototipo.
4. Escribir la definición.
5. Incluir en readme.md el árbol de expresión asociado a la expresión de retorno
de la función.

 ## Etapa #1: Análisis del problema  
 Hipótesis: Dado un año determinar si es bisiesto o no.  
 A partir de 1582, un año es bisiesto si cumple los siguientes criterios:
- Es bisiesto si es divisible entre 4.
- Pero no es bisiesto si es divisible entre 100.
- Pero sí es bisiesto si es divisible entre 400.  

## Modelo IPO  
![Modelo IPO](https://github.com/santillanso/AED/blob/master/03-Bisiesto/IPO.png)  

## Etapa #2: Diseño de la Solución  

1. Léxico, definición matemática de la función.  
IsBisiesto: N &rightarrow; B / IsBisiesto (a) = t &and; (p &and; (&not; q &or; s))  
Donde:  
B = {0,1}  
p: a es divisible por 4  
q: a es divisible por 100  
s: a es divisible por 400  
t: a es mayor a 1582  

2. Pruebas.
- assert( IsBisiesto (1600));
- assert( not IsBisiesto (1700));
- assert( not IsBisiesto (1800));
- assert( not IsBisiesto (1900));
- assert( not IsBisiesto (1586));
- assert( not IsBisiesto (1580));
- assert( not IsBisiesto (1500));
- assert( IsBisiesto (2000));
- assert(not IsBisiesto (1590));  

3. Prototipo.  
bool IsBisiesto (int a)  

4. Definición.  
bool IsBisiesto(int a) {return a > 1582 and (a%4==0) and ((a%100!=0) or a%400==0);}  

5. Árbol de expresión.  
![Árbol de expresión](https://github.com/santillanso/AED/blob/master/03-Bisiesto/Arbol%20de%20expresi%C3%B3n.png)

