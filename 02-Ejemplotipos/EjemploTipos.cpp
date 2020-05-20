#include <iostream>
#include <string>
#include <assert.h>
#include <stdio.h>
using namespace std;

int main()
{
int numero1=1;

double numero2=2.1;

float numero3=12.23;

char letra='a';

char palabra[5]="HOLA";

bool numero4 = false;

unsigned numero5 = -1;

string cadena; 
    cadena = "Algoritmos y estructura de datos";

double s = numero1 + numero2; 

assert (s != 2);

printf("\n Ejemplo de tipo de dato numero entero: %d", numero1);

printf("\n Ejemplo de tipo de dato numero con coma flotante de precision doble (64 bits): %f", numero2);

printf("\n Ejemplo de tipo de dato numero con coma flotante de precision simple (32 bits): %f", numero3);

printf("\n Ejemplo de tipo de dato caracter: %c", letra);

printf("\n Ejemplo de tipo de dato cadena de caracteres: %s",& palabra);

printf("\n Ejemplo de tipo de dato booleano: ");
if (numero4 == true)
{
    printf("true");
}
else
{
    printf("false");
}

printf("\n Ejemplo de tipo de dato numero negativo: %d",& numero5);

printf("\n Ejemplo de tipo de dato string: %s", cadena.c_str());

printf("\n Ejemplo de suma de dos tipos distintos de datos: %f",& s);

getchar();

return 0;

}