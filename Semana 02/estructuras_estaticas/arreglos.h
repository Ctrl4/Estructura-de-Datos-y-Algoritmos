#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 5
typedef int Arreglo[TAM];
/* 1. Inicializa en 0 en todas las celdas del arreglo */
void iniciar(Arreglo);
/* 2. Carga con numeros aleatorios las celdas del arreglo (si el arreglo está vacío) */
void cargar (Arreglo);
/* 3. Devuelve true si todas las celdas del arreglo son 0 */
bool esVacio(Arreglo);
/* 4. Muestra por pantalla los valores del arreglo */
void mostrar (Arreglo);
/* 5. Indica si el argumento entero pertenece al arreglo o no */
bool pertenece (Arreglo, int);
/* 6. Calcula el promedio de los valores del arreglo */
int promedio (Arreglo);
/* 7. Imprime el valor máximo del arreglo y su posición */
void maxPos (Arreglo);

#endif // ARREGLOS_H_INCLUDED
