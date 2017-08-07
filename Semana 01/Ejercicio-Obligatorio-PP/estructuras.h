#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    /* Estructura para una jugada simple */
struct jugada{
    //Jugada del usuario ingresada por teclado.
    int miJugada[5];
    //Bolillero simple generado de manera random
    int bolillero[5];
    //Bolilla extra generada de manera random.
    int bolillaExtra;
};

    /* El tipo "Apuesta" definido por el usuario */
typedef struct jugada Apuesta;

    /* Prepara el bolillero para luego poder realizar una apuesta, devuelve la dirección de memoria de un arreglo generado mismo en la función. */
int * prepararBolillero();
    /* Prepara la bolilla extra */
int prepararExtra(int *a);
    /* Apuesta simple: Recibe una apuesta y devuelve la cantidad de aciertos */
int apostar(Apuesta a);

#endif // ESTRUCTURAS_H_INCLUDED
