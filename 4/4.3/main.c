#include <stdio.h>

//conflicto de variables del mismo nombre//

void f1 (void);
int K=5;

void main (void)
{
    int I;
    for(I=1; I <=3 ; I++)
        f1();
}
void f1(void)

{
    int K=2;       //variable local//
    K += K;
    printf("\n\nEl valor de la variable local es: %d, K);
    ::k = ::K + K;          //Uso de ambas variables.//
    printf("\nEl valor de la variable global es %d", ::k);
}
