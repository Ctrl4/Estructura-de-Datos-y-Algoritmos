#include "arreglos.h"
#include "arreglosConTope.h"

int main()
{
    Arreglo a;
    ArregloConTope aConTope;
    int i=0;
    int num=0;

    iniciar(a);
    if(esVacio(a)==true) printf("true\n");
    if(esVacio(a)==false) printf("false\n");
    printf("%d \n",a[1]);
    cargar(a);
    mostrar(a);
    if(esVacio(a)==true) printf("true\n");
    if(esVacio(a)==false) printf("false\n");
    if(pertenece(a,5)==true) printf("true\n");
    if(pertenece(a,5)==false) printf("false\n");
    printf("\n%d\n",promedio(a));

    inicializar(aConTope);
    if(estaLleno(aConTope)==true) printf("true\n");
    if(estaLleno(aConTope)==false) printf("false\n");
    while(aConTope.tope<TAM){
        printf("\nIngrese numero: ");
        scanf("%d",&num);
        insertar(aConTope, num);
        i++;
    }
    if(estaLleno(aConTope)==true) printf("true\n");
    if(estaLleno(aConTope)==false) printf("false\n");

    eliminar(aConTope);
    if(estaLleno(aConTope)==true) printf("true\n");
    if(estaLleno(aConTope)==false) printf("false\n");
    return 0;
}
