#include "estructuras.h"

int apostar(Apuesta a){
    for(int i=0;i<5;i++){
        printf("Ingrese jugada Nro. %d: ",i);
        scanf("%d",&a.miJugada[i]);
    };
    srand(time(NULL));
    for(int i=0;i<5;i++){
        a.bolillero[i]=1+rand() % 48;
        printf("\n%d",a.bolillero[i]);
    }


}
