#ifndef ESCUELA_H_INCLUDED
#define ESCUELA_H_INCLUDED

#include “Estudiante.h”
#define MAX 150;
typedef struct {
Estudiante arreglo [MAX];
int tope;
} ArregloEscuela;
/*1. Inicializa el tope en cero */
void inicializar (ArregloEscuela &);
/*2. indica si el array con tope se llenó o no */
bool estaLleno (ArregloEscuela);
/*3. Indica si el estudiante con cédula ced existe en el array con tope o no */
bool existeEstudiante (ArregloEscuela, long int);
/*4. Inserta al estudiante en la primer posición disponible */
/* precondición: el estudiante no existe y el arreglo no se llenó */
void insertarEstudiante(ArregloEscuela, Estudiante);
/*5. Muestra por pantalla todos los estudiantes del arreglo */
void desplegarEstudiantes (ArregloEscuela);
/*6. Dados año y grupo, cuenta cuántos estudiantes están en dicho año y grupo */
int contarPorGrupo (ArregloEscuela, int, char);

#endif // ESCUELA_H_INCLUDED
