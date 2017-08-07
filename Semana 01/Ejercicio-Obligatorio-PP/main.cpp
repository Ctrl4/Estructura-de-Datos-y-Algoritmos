#include "estructuras.h"

int main(){
    int *bolillero;
    bolillero=prepararBolillero();
    printf("\nBolillero: ");
    printf("\n%d-%d-%d-%d-%d |Extra: %d",bolillero[0],bolillero[1],bolillero[2],bolillero[3],bolillero[4],prepararExtra(bolillero));
    return 0;
}
