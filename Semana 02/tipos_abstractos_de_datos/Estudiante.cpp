#include "Estudiante.h"

void cargar(Estudiante &e){
    printf("\nIngrese cedula del estudiante(Sin puntos ni guiones): ");
    scanf("%ld",&e.cedula);
    printf("\nIngrese anioCarrera: ");
    scanf("%d",&e.anioCarrera);
    printf("\nIngrese letra del grupo: ");
    scanf("%s",&e.grupo);

}

void mostrar(Estudiante &e){
    printf("\nEstudiante: ");
    printf("\ncedula: %ld",e.cedula);
    printf("\naño de carrera: %d",e.anioCarrera);
    printf("\ngrupo: %c",e.grupo);
}

long int darCedula(Estudiante &e){
    return e.cedula;
}

int darAnioCarrera(Estudiante &e){
    return e.anioCarrera;
}

char darGrupo(Estudiante &e){
    return e.grupo;
}
