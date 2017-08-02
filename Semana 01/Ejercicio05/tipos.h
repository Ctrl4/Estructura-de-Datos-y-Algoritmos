#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED
#include <stdio.h>

    /* 0. Tipo de datos(un arreglo de 50 enteros)*/
#define TAM 5
typedef int arreglo[TAM];
    /* 1. Cargar por teclado los valores del arreglo */
void cargar(arreglo);
    /* 2.Mostrar por pantalla los valores del arreglo */
void mostrar(arreglo);
    /* 3. Devolver el promedio de los valores del arreglo */
int promedio(arreglo);
    /* 4. Devolver 1 si el valor x pertenece al arreglo */
int pertenece(arreglo,int);
    /* 5. Devolver el valor entero maximo del arreglo */
int maxVal(arreglo);



#endif // TIPOS_H_INCLUDED
