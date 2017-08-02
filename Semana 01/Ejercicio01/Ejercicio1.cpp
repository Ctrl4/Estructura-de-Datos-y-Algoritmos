/* El usuario ingresa 3 valores(hora, minuto y segundo). Se debe retornar el segundo siguiente utilizando el sistema sexagesimal.*/

#include <stdio.h>

int main(){
  int hora, minuto, segundo;

  printf("Ingrese hora: ");
  scanf("%d",&hora);
  printf("Ingrese minuto: ");
  scanf("%d",&minuto);
  printf("Ingrese segundo: ");
  scanf("%d",&segundo);

  segundo++;
  if(segundo==60){
    segundo=0;
    minuto++;
  }
  if(minuto==60){
    minuto=0;
    hora++;
  }
  if(hora==24){
    hora=0;
  }
  if(hora<10){
    printf("0%d",hora);
  }else{
    printf("%d",hora);
  };
  if(minuto<10){
    printf("0%d",minuto);
  }else{
    printf("%d",minuto);
  };
  if(segundo<10){
    printf("0%d",segundo);
  }else{
    printf("%d",segundo);
  };

  return 0;
}
