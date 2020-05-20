#include <iostream>
#include <string>
#include <assert.h>
#include <stdio.h>
using namespace std;

int main()
{
int edad=33;

double peso=55.8;

float altura=1.65;

char nombre[5]="Juan";

bool apto = true;

string valor; 
    valor = "Indice de masa corporal";

double imc = peso/(altura*altura); 

assert (apto == true);

printf("\n Ejemplo de tipo de dato numero entero, edad: %d", edad);

printf("\n Ejemplo de tipo de dato numero con coma flotante de precision doble (64 bits), peso: %f", peso);

printf("\n Ejemplo de tipo de dato numero con coma flotante de precision simple (32 bits), altura: %f", altura);

printf("\n Ejemplo de tipo de dato cadena de caracteres nombre: %s",& nombre);

printf("\n Ejemplo de tipo de dato booleano: ");
if (apto == true)
{
    printf("la persona puede realizar actividad fisica de alto impacto");
}
else
{
    printf("la persona no puede realizar actividad fisica de alto impacto");
}

printf("\n Ejemplo de tipo de dato string: %s", valor.c_str());

printf("\n Ejemplo de operación de dos tipos distintos de datos: %f",& imc);

getchar();

return 0;

}