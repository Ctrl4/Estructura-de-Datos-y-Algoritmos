#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

#include<stdio.h>

typedef struct {
long int cedula;
int anioCarrera;
char grupo;
} Estudiante;
/*1. Carga los datos del estudiante, leyéndolos por teclado */
void cargar (Estudiante &);
/*2. Muestra los datos del estudiante por pantalla */
void mostrar (Estudiante &);
/*3. Retorna la cédula del estudiante */
long int darCedula (Estudiante &);
/*4. Retorna el año de carrera del estudiante */
int darAnioCarrera (Estudiante &);
/*5. Retorna el grupo del estudiante */
char darGrupo(Estudiante &);

#endif // ESTUDIANTE_H_INCLUDED
