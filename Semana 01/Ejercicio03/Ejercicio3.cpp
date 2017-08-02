/* Se desea escribir un programa que calcule la cantidad de aprobados y reprobados de un curso. La condición para aprobar el curso es obtener al menos 60 puntos entre la suma de los dos parciales. No se conoce la cantidad exacta de alumnos, pero se sabe que posee al menos un inscripto. El programa irá leyendo los datos por teclado y finalmente mostrará por pantalla la cantidad de aprobados y reprobados.*/
#include <stdio.h>

int main(){
    int primerParcial, segundoParcial;
    int notaFinal=0;
    int contadorAprobados=0;
    int contadorReprobados=0;

    do{
        printf("Ingrese nota del primer parcial: ");
        scanf("%d", &primerParcial);
        printf("Ingrese nota del segundo parcial: ");
        scanf("%d", &segundoParcial);
        notaFinal = primerParcial + segundoParcial;
        if(notaFinal>=60){
            contadorAprobados++;
        }
        else{
            contadorReprobados++;
        };
    }while(primerParcial!=-1||segundoParcial!=-1);
    printf("Aprobados: %d",contadorAprobados);
    printf("Reprobados: %d",contadorReprobados);
    return 0;

}
