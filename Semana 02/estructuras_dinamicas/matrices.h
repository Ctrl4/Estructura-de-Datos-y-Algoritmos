#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

#include"arreglosConTope.h"
typedef bool Matriz[TAM][TAM];
/* 1. Inicia todos los elementos de la matriz a false */
void inicia(Matriz &);
/* 2. Devuelve true si todos los elementos de la matriz son false */
bool esFalsa (Matriz);
/* 3. Devuelve el estado de la celda */
bool estadoCelda(Matriz, int, int);
/* 4. Dada una coordenada, la cambia de estado a true (si dicho estado es false) */
void cambiarEstado(Matriz &, int, int);

#endif // MATRICES_H_INCLUDED
