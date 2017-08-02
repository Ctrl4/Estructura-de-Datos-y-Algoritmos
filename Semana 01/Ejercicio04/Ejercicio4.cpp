/*Realizar un programa que tire 6000 veces un dado y cuente la cantidad de veces que salió cada cara.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dado=0;
    int dadoUno=0;
    int dadoDos=0;
    int dadoTres=0;
    int dadoCuatro=0;
    int dadoCinco=0;
    int dadoSeis=0;

    srand(time(NULL));
    for(int i=0;i<6000;i++){
        dado=1+rand()%6;
        switch (dado){
            case 1: dadoUno++;break;
            case 2: dadoDos++;break;
            case 3: dadoTres++;break;
            case 4: dadoCuatro++;break;
            case 5: dadoCinco++;break;
            case 6: dadoSeis++;break;
        }
    }
    printf("Veces que se repite cada cara del dado: \n");
    printf("=======================================\n");
    printf("1: %d\n",dadoUno);
    printf("2: %d\n",dadoDos);
    printf("3: %d\n",dadoTres);
    printf("4: %d\n",dadoCuatro);
    printf("5: %d\n",dadoCinco);
    printf("6: %d\n",dadoSeis);
    return 0;
}
