#include <iostream>
#include <cassert>
#include <array>
#include <string>

using namespace std;

    struct Color { string rojo, verde, azul;};     
    struct Punto {double x, y;};
    struct Poligono { unsigned n; array<Punto, 9> puntospoligono; Color colorpoligono;};

    void AddVertice (Poligono&, Punto);
    Punto GetVertice (Poligono&, Punto, unsigned); //el unsigned será la posición del punto a obtener
    void SetVertice (Poligono&, Punto, unsigned); //el unsigned será la posición del punto a cambiar
    void RemoveVertice (Poligono&, unsigned);    
    unsigned GetCantidadLados (const Poligono&); // los unsigned serán la posición de dos puntos adyacent
    //devuelve la longitud de uno de sus lados  
    float GetDistancia (Punto, Punto); //Calcula distancia entre puntos
    float PerimetroPoligono (const Poligono&); //esta función convocaría a LongitudLadoPol para poder sumar la magnitud de los lados
    //devuelve el perímetro del polígono 

   void AddVertice (Poligono poligono, Punto punto)
   {
       poligono.n = poligono.n+1;
       int posicion = poligono.n;
       poligono.puntospoligono.at (posicion) = punto;
   }

    Punto GetVertice (Poligono poligono, Punto punto, unsigned posicion)
    {
        return poligono.puntospoligono.at (posicion);
    }
   
    void SetVertice (Poligono poligono, Punto punto, unsigned posicion)
    {
        poligono.puntospoligono.at (posicion) = punto;
    }

    void SetColorPol (Poligono poligono, Color color)
    {
        poligono.colorpoligono = color;
    }

    void RemoveVertice (Poligono poligono)
    {
        poligono.n = poligono.n - 1;
    }

    unsigned GetCantidadLados (Poligono poligono)
    {
        return poligono.n;
    }

    float GetDistancia (Punto punto1, Punto punto2)
    {
        float distancia;
        distancia = sqrt ((pow(punto2.x,2)-pow(punto1.x,2))+(pow(punto2.y,2)-pow(punto1.y,2)));
        return distancia;
    }
    
    float PerimetroPol (Poligono poligono)
    {
       float lado1 = GetDistancia (poligono.puntospoligono.at (0), poligono.puntospoligono.at (1));
       float lado2 = GetDistancia (poligono.puntospoligono.at (1), poligono.puntospoligono.at (2));
       float lado3 = GetDistancia (poligono.puntospoligono.at (2), poligono.puntospoligono.at (3));
       float lado4 = GetDistancia (poligono.puntospoligono.at (3), poligono.puntospoligono.at (4));
       float lado5 = GetDistancia (poligono.puntospoligono.at (4), poligono.puntospoligono.at (5));
       float lado6 = GetDistancia (poligono.puntospoligono.at (5), poligono.puntospoligono.at (6));
       float lado7 = GetDistancia (poligono.puntospoligono.at (6), poligono.puntospoligono.at (7));
       float lado8 = GetDistancia (poligono.puntospoligono.at (7), poligono.puntospoligono.at (8));
       float lado9 = GetDistancia (poligono.puntospoligono.at (8), poligono.puntospoligono.at (9));
       float lado10 = GetDistancia (poligono.puntospoligono.at (9), poligono.puntospoligono.at (0));

       float perimetro = lado1+lado2+lado3+lado4+lado5+lado6+lado7+lado8+lado9+lado10; 
       return perimetro;
    }
  
int main ()
{
Punto p{1,2};
assert(1 == p.x);
assert(2 == p.y);

Punto origen{0,0};
assert(0 == origen.x);
assert(0 == origen.y);
assert(p.x != origen.x);
assert(p.x != origen.y);

}