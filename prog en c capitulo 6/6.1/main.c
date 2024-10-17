#include <stdio.h>
#include <stdlib.h>

/*Diagonal principal.
el programa al recibir como dato una matriz de tipo entero, escribe la
diagonal principal*/

const int TAM = 10;

void Lectura ( int [] [TAM], int);      //prototipo de funciones
void Imprime( int [][TAM], int);
/* observa que siempre es nesesario declarar el numero de cilumnas . Si no lo
haces, el compilador marcara un error de sistaxis */

void main (void)
{
    int MAT[TAM][TAM];
    Lectura (MAT,TAM);
    Imprime(MAT, TAM);
}

void Lectura(int A[][TAM], int F)



{
    int I, J;
    for (I=0; I<F; I++)
        for (J = 0; J<F; J++)
    {
        printf ("ingrese el elemento %d %d: ", I+1, J+1);
        scanf("%d", &A[I][J]);
    }
}


void Imprime(int A[][TAM], int F)


{
    int I,J;
    for( I=0; I<F; I++)
        for (J=0; J<TAM; J++)
        if (I== J)
    printf ("\nDiagonal %d %d: %d ", I,J, A[I][J]);
}



