#include "arreglos.h"

void iniciar(Arreglo a){
    for (int i=0;i<TAM;i++){
        a[i]=0;
    }
}

void cargar(Arreglo a){
    srand(time(NULL));
    for(int i=0;i<TAM;i++){
        a[i]=1+rand()%10;
    }
}

bool esVacio(Arreglo a){
    int i=0;
    bool val=false;
    while(i<TAM){
        if(a[i]==0){
            i++;
        }
        else{
            return (val);
        }
        val = true;
    }
    return (val);
}

void mostrar(Arreglo a){
    printf("\n");
    for(int i=0;i<TAM;i++){
        printf("%d:",a[i]);
    }
    printf("\n");
}

bool pertenece(Arreglo a,int b){
    int i=0;
    bool val=false;
    while(i<TAM){
        if(a[i]==b){
            return val=true;
        }
        else{
            i++;
        }
    }
    return val;
}

int promedio(Arreglo a){
    int auxiliar=0;
    for(int i=0;i<TAM;i++){
        auxiliar=a[i]+auxiliar;
    }
    return auxiliar/TAM;
}

/*
void maxPos(Arreglo a){
    int auxiliar=0;
    for(int i=0;i<TAM;i++){
        if(a[i]>=auxiliar){

        }
    }
}
*/
