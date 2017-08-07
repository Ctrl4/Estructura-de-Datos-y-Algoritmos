#include "estructuras.h"

int *prepararBolillero(){
    static int bolillero[4];
    int auxiliar=0;
    int i=0;
    int x=0;
    srand(time(NULL));
    while(i<5){
        auxiliar=1+rand() % 48;
        while(x<i){
            if(bolillero[x]!=auxiliar){
                    x++;
            }
            else{
                auxiliar=1+rand() %48;
                x=0;
            };
        };
        bolillero[i]=auxiliar;
        i++;
        x=0;
    };
    return (bolillero);
}

int prepararExtra(int *a){
    int extra=0;
    int auxiliar=0;
    int i=0,x=0;
    srand(time(NULL));
    do{
        auxiliar=1+rand()%48;
        if(a[i]!=auxiliar){
            i++;
        }
        else{
            auxiliar=1+rand()%48;
            i=0;
        }
    }while(i<5);
    extra=auxiliar;
    return(extra);
}
