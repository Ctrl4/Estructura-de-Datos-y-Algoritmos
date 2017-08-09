#include "arreglos.h"
#include "arreglosConTope.h"

void inicializar(ArregloConTope &aConTope){
    aConTope.tope=0;
    for(int i=0;i<TAM;i++){
        aConTope.arreglo[i]=0;
    }
}

bool estaLleno(ArregloConTope &aConTope){
    if(aConTope.tope==TAM){
        return true;
    }
    else{
        return false;
    }
}

void insertar(ArregloConTope &aConTope, int num){
    if(aConTope.tope<TAM){
        aConTope.arreglo[aConTope.tope]=num;
        aConTope.tope++;
    }
    else{
        printf("\nArreglo lleno!");
    }
}

void eliminar(ArregloConTope &aConTope){
    aConTope.arreglo[aConTope.tope]=0;
    aConTope.tope--;
}
