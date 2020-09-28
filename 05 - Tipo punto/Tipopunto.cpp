#include <iostream>
#include <cassert>
#include <math.h>     

struct Punto{double x, y;};

bool IsIgual (Punto, Punto);
double GetDistancia (Punto, Punto);
double GetDistanciaAlOrigen (Punto);
double d;

int main()
{
    Punto p{1,2};
    assert(1 == p.x);
    assert(2 == p.y);
    Punto origen{0,0};
    assert(0 == origen.x);
    assert(0 == origen.y);
    assert(p.x != origen.x);
    assert(p.x != origen.y);
    Punto punto1{1,1};
    Punto punto2{2,2};
    
assert(IsIgual(punto1, punto1));
assert(0==GetDistancia(punto1, punto1));
assert(0==GetDistanciaAlOrigen(origen));
}

bool IsIgual(Punto punto1, Punto punto2)
{   return
    punto1.x == punto2.y
      && punto1.x == punto2.y;
}

double GetDistancia(Punto punto1, Punto punto2)
{   return
    d=sqrt((punto1.x-punto2.x)*(punto1.x-punto2.x)+(punto1.y-punto2.y)*(punto1.y-punto2.y));
}

double GetDistanciaAlOrigen(Punto punto1)
{   return
    d=sqrt((punto1.x)*(punto1.x)+(punto1.y)*(punto1.y));
}