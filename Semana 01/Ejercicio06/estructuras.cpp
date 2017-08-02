#include "estructuras.h"

int apostar(Apuesta a){
    /* Contador auxiliar para algunas iteraciones.*/
    int aux=0;
    int acertoExtra=0;
    /* Pregunta 5 veces para generar la jugada */
    for(int i=0;i<5;i++){
        printf("Ingrese jugada Nro. %d: ",i+1);
        scanf("%d",&a.miJugada[i]);
    };
    printf("Mi jugada es: \n");
    printf("%d %d %d %d %d",a.miJugada[0],a.miJugada[1],a.miJugada[2],a.miJugada[3],a.miJugada[4]);

    /* Se generan los números ganadores de manera random.*/
    srand(time(NULL));
    for(int i=0;i<5;i++){
        a.bolillero[i]=1+rand() % 48;
    }
    a.bolillaExtra=1+rand() % 48;
    do{
        if(a.bolillaExtra==a.bolillero[aux]){
            a.bolillaExtra=1+rand() % 48;
            aux=0;
        }
        aux++;
    }while(aux<=5);
    /* Vuelvo a poner aux en 0 para volver a utilizarlo a continuacion, para contar cada acierto que tuvo*/
    aux=0;
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            if(a.miJugada[i]==a.bolillero[j]){
                aux++;
                j=5;
            }
            else{
                j++;
            };
        }
        i++;
    }
    /* Si acerto menos de 5 veces revisa si acerto la bolilla extra.*/
    if(aux<5){
        for(int i=0;i<=5;i++){
            /* Si no acierta la bolilla extra en el lugar i, se fija el siguiente de lo contrario se setea "acertoExtra" a 1 y termina el loop*/
            if(a.miJugada[i]==a.bolillaExtra){
                acertoExtra=1;
                i=5;
            }
        }
    }
    if(acertoExtra==0){
        return(aux);
    }
    else{
        switch(aux){
            case 0: return(0);break;
            case 1: return(6);break;
            case 2: return(7);break;
            case 3: return(8);break;
            case 4: return(9);break;
        }
    }

}
