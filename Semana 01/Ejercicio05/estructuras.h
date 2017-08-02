#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    /* Estructura para una jugada simple */
struct jugada{
    //Jugada del usuario
    int miJugada[5];
    //Bolillero simple
    int bolillero[5];
    //Bolilla extra
    int bolillaExtra;
};

    /* El tipo "Apuesta" definido por el usuario */
typedef struct jugada Apuesta;
    /* Apuesta simple: Recibe una apuesta y devuelve la cantidad de aciertos */

int apostar(Apuesta a);

#endif // ESTRUCTURAS_H_INCLUDED
