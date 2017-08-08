#ifndef ARREGLOSCONTOPE_H_INCLUDED
#define ARREGLOSCONTOPE_H_INCLUDED

#include"arreglos.h"
typedef struct {
    Arreglo arreglo; // el arreglo
    int tope; // el tope en un momento dado
} ArregloConTope;
/* 1. Inicia el arreglo y el tope en 0 */
void inicializar(ArregloConTope &);
/* 2. Dice si el arreglo ya se llenó */
bool estaLleno (ArregloConTope &);
/* 3. Inserta un valor en el arreglo con tope (si el arreglo no esta lleno) */
void insertar(ArregloConTope &, int);
/* 4. Elimina el último elemento del arreglo */
void eliminar(ArregloConTope &);
/* 5. Devuelve true si el encuentra el argumento entero */
bool seEncuentra (ArregloConTope, int);

#endif // ARREGLOSCONTOPE_H_INCLUDED
