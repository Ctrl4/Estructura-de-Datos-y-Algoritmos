#include "tipos.h"

void cargar(arreglo a){
    for(int i=0;i<TAM;i++){
        printf("Ingrese el valor para la posición %d del arreglo: ",i);
        scanf("%d",&a[i]);
    }
}

void mostrar(arreglo a){
    for(int i=0;i<TAM;i++){
        printf("\nValor del arreglo en la posición %d: %d",i,a[i]);
    }
}

int promedio(arreglo a){
    int suma=0;
    for(int i=0;i<TAM;i++){
        suma=suma+a[i];
    }
    return (suma/TAM);
}

int pertenece(arreglo a,int num){
    for(int i=0;i<TAM;i++){
        if(num==a[i])
            return 1;
    }
    return 0;
}

int maxVal(arreglo a){
    int aux=0;
    for(int i=0;i<TAM;i++){
        if(aux<a[i]){
            aux=a[i];
        }
    }
    return aux;
}
