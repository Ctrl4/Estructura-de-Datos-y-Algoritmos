#include "Estudiante.h"


int main()
{
    Estudiante e;
    cargar(e);
    mostrar(e);
    printf("\n%ld",darCedula(e));
    printf("\n%d",darAnioCarrera(e));
    printf("\n%c",darGrupo(e));
    return 0;
}
