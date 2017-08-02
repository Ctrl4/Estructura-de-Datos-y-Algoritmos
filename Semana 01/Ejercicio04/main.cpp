#include "tipos.h"


int main()
{
    arreglo arre;
    cargar(arre);
    mostrar(arre);
    printf("\nEl promedio de los valores del arreglo es: %d",promedio(arre));
    printf("\n8 pertenece al arreglo?(1=si): %d",pertenece(arre, 8));
    printf("\n9 pertenece al arreglo?(1=si): %d",pertenece(arre,9));
    printf("\nEl mayor valor del arreglo es: %d",maxVal(arre));
    return 0;
}
