#include <iostream>
#include <cassert>
#include <string>

using namespace std;
 
struct Tipocolor { uint8_t rojo, verde, azul; };
    const Tipocolor rojo {255,0,0};
    const Tipocolor verde {0,255,0};
    const Tipocolor azul {0,0,255};
    const Tipocolor amarillo {255,255,0};
    const Tipocolor cyan {0,255,255};
    const Tipocolor magenta {255,0,255};
   // const Tipocolor negro {0,0,0};
   // const Tipocolor blanco {255,255,255};

bool IsIgual (const Tipocolor &color1, const Tipocolor &color2); 
bool IsIgual (const Tipocolor &color1, const Tipocolor &color2)
{   return ((color1.azul == color2.azul) && (color1.verde == color2.verde) && (color1.rojo == color2.rojo))? true : false;
}

Tipocolor Suma (const Tipocolor &color1, const Tipocolor &color2);
Tipocolor Suma (const Tipocolor &color1, const Tipocolor &color2)
{   Tipocolor snuevocolor;
    snuevocolor.azul = (color1.azul + color2.azul) > 255 ? 255 : color1.azul + color2.azul;
    snuevocolor.verde = (color1.verde + color2.verde) > 255 ? 255 : color1.verde + color2.verde;
    snuevocolor.rojo = (color1.rojo + color2.rojo) > 255 ? 255 : color1.rojo + color2.rojo;
return (snuevocolor);
  
}

Tipocolor Resta (const Tipocolor &color1, const Tipocolor &color2);

Tipocolor Resta (const Tipocolor &color1, const Tipocolor &color2)
{   Tipocolor rnuevocolor;
    rnuevocolor.azul = (color1.azul - color2.azul) > 0? 0 : color1.azul + color2.azul;
    rnuevocolor.verde = (color1.verde - color2.verde) > 0? 0 : color1.verde + color2.verde;
    rnuevocolor.rojo = (color1.rojo - color2.rojo) > 0? 0 : color1.rojo + color2.rojo;
return (rnuevocolor);
  
}

Tipocolor Mezcla (const Tipocolor &color1, const Tipocolor &color2);

Tipocolor Mezcla (const Tipocolor &color1, const Tipocolor &color2)
{   Tipocolor mezcla;
    mezcla.azul = (color1.azul + color2.azul)/2;
    mezcla.verde = (color1.verde + color2.verde)/2;
    mezcla.rojo = (color1.rojo + color2.rojo)/2;
return (mezcla);
  
}

Tipocolor Mezcla2 (const Tipocolor &color1, const Tipocolor &color2);
unsigned a,b; 

Tipocolor Mezcla2 (const Tipocolor &color1, const Tipocolor &color2)
{   Tipocolor mezcla2;
    mezcla2.azul = (color1.azul/a + color2.azul/b);
    mezcla2.verde = (color1.verde/a + color2.verde/a);
    mezcla2.rojo = (color1.rojo/a + color2.rojo/a);
return (mezcla2);
  
}

const Tipocolor blanco = Suma (Suma (rojo, verde), Suma(verde, azul));
const Tipocolor negro = Resta (rojo, rojo);


int main()
{
    Tipocolor color1{2,0,0};
    assert(2 == color1.rojo);
    Tipocolor color2{1,1,0};
    assert(1 == color2.verde);

    assert( IsIgual ({2,0,0}, {2,0,0}) == true);
    assert( IsIgual ({2,0,0}, {2,3,0}) == false);

    assert (255 == Suma ( {255,0,0}, {0,255,0}).rojo );
    assert (150 == Suma ( {0,75,0}, {0,75,0}).verde );

    assert (200 == Resta ( {250,250,0}, {50,50,0}).rojo );
    assert (20 == Resta ( {0,75,80}, {0,75,60}).azul );

    assert (70 == Mezcla ( {100,200,0}, {40,50,0}).rojo );
    assert (50 == Mezcla ( {0,150,40}, {0,70,60}).azul );

    assert (25 == Mezcla2 ( {10/2,200/2,0}, {40/2,20/2,0}).rojo );
    assert (14 == Mezcla2 ( {0,20/4,40/4}, {0,32/4,16/4}).azul );
}


