#include <stdio.h>


void main(void)
{
    int ELE[5] ={0};        /*declaracion del arreglo entero ELE de cinco elementos. Todos sus
    elementos se inicializan en 0.*/
    int I, VOT ;
    printf("ingresa el primer voto (0- para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT <6))      // Se veridfica que sea el voto correcto

        ELE [VOT-1]++;            /*los votos se almacenan en el rreglo. Recuerda que la primera posicion del arreglo es 0, por esa razon a la
        variable VOT se le descuenta 1. Los votos del primer candidato se
        almecenan en la posicion 0.*/
        else
            printf("\n El voto ingresado es incorrecto. \n");
        printf(" Infresa el siguiente voto (0 - Patra terminar): ");
        scanf("%d", &VOT);
    }
    printf("\n\nResultados de la Eleccion\n");
    for (I=0; I <= 4; I++)
        printf("\nCandidato %d: %d, ",I+1, ELE[I] );
}
