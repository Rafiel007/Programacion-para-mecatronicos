#include <stdio.h>

void main (void)
{
    int I, NUM, CUE = 0;
    int ARRE [10];                //Declaracion del arreglo
    for (I=0; I<10; I++)
    {
        printf("ingrese el elemento %d del arreglo: ", I+1);
        scanf ("%d", &ARRE[I]);         //lectura de asignacion _ del arreglo //

    }

printf ("\n\nIngrese el numero que se va a buscar en el arreglo:  ");
scanf("%d", &NUM);
for (I=0; I<10; I++)
    if (ARRE [I]== NUM)

    CUE++;
printf("\n\nEL %d se encuentra %d veces en el arreglo", NUM, CUE);

}
