#include <stdio.h>
/*producto de vectores.
el rpograma calcula el producto de dos vectores y almacena el resultado
en otro arreglo unidimencional*/

const int MAX = 10;     /* se define una constante para el tamaño delos
arreglos */


void Lectura (int VEC[], int T);
void Imprime (int VEC{}, int T);                            //prototipos de funciones
void Producto (Producto(int *X, int *Y, int *Z, int *T);    /*observa que en los
 parametros , para indicar que lo que se recube es un arreglo, se puede escribir
 VEC[] o *VEC.*/

void main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];
    /*SE DECLARAN TRES ARREGLOS DE TIPO ENTERO DE 10 ELEMENTOS */
    Lectura(VE1, MAX);'
    /*SE LLAMA FUNCION lECTURA, oBSERVA QUE EL PASL DEL AEEGLO A LA FUNCION
    ES por referencia. Solo se debe incluir el nombre del arreglo*/
    Lectura(VE2, MAX);
    Producto(VE1, VE2, VE3, MAX);
    //Se llama a la funcion roducto. se pasan los nombres de los tres arreglos.
    printf("\nProducto de los vectores");
    Imprime(CE3, MAX);
}

void Lectura (int VEC[], int T)
/*la funcion lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero*/
{
    int I;
    printf("\n");
    for (I=0; I<T; I++)
    {
        printf ("ingrese el elemento %d: ", I+1);
        scanf ("%d", &VEC[I]);
    }
}

void Imprime (int VEC[], int T)


int I;
{
    for (I=0; I<T; I++)
    printf("\nVEC[%d]: %d", I+1, VEC[I]);
}

void Producto (int *X, int *Y, int *Z, int T)


{
    int I;
    for (I=0; I<T; I++)
        Z[I] = X[I] * Y[I];
}
