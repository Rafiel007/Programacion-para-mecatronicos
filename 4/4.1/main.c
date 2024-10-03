#include <stdio.h>
#include <stdlib.h>


int cubo(void);         //prototipo funcion//

int I;                  //variable global//

void main(void)
{
    int CUB;
    for (I=1; I <= 10; I++)
    {


        CUB= cubo ();       //llamada a la funcion cubo//
    printf("\nEl cubo de %d es:  %d", I, CUB );
    }
}

int cubo(void)              //declaracion de la funcion//
//la funcion calcula el cubo de la vcariable global I. //
{
    return (I*I*I);
}
