#include <cassert>
#include <iostream>
using namespace std;

bool IsBisiesto (int a);

int main ()
{

int a, r;


	std::cout <<"Dado un año, determinar si es bisiesto" << "\n" 

	          <<"Ingresar año: ";

	std::cin >> a;
		
	r = IsBisiesto(a);

	std::cout << "El año es bisiesto " << r;

bool IsBisiesto (int);

 assert( IsBisiesto (1600));
 assert( not IsBisiesto (1700));
 assert( not IsBisiesto (1800));
 assert( not IsBisiesto (1900));
 assert( not IsBisiesto (1586));
 assert( not IsBisiesto (1580));
 assert( not IsBisiesto (1500));
 assert( IsBisiesto (2000));
 assert(not IsBisiesto (1590));
 
return 0;
}
bool IsBisiesto(int a) {
    return a > 1582 and (a%4==0) and ((a%100!=0) or a%400==0);
}
