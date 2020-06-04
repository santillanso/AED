
#include <cassert>
#include <iostream>


double celsius(double fahrenheit);
bool AreNear(double valor_exacto, double valor_calculado, double tolerancia);


int main() {

	double temperatura_f, temperatura_c;


	std::cout <<"Convertir una temperatura Fahrenheit" 
        	  <<"en una Celsius.\n"

	          <<"Introduzca una temperatura en grados Fahrenheit: ";


	std::cin >> temperatura_f;

		
	temperatura_c = celsius(temperatura_f);


	assert( AreNear(0.0, celsius(32.0), 0.0001) == true);


	std::cout << "La conversion a Celsius es: " << temperatura_c << " grados C";


	return 0;
}


double celsius(double fahrenheit) 
	{
	 return ((5.0/9.0)*(fahrenheit-32.0));
	}

bool AreNear(double valor_exacto, double valor_calculado, double tolerancia)
	{
	 return ((valor_calculado <= valor_exacto + tolerancia) and
		 (valor_calculado >= valor_exacto - tolerancia)) ? true : false;
	}