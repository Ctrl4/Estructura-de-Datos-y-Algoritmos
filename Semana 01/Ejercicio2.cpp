/* Programa que determine el sueldo bruto para cada uno de tres empleados. La empresa paga la cuota normal en las primeras 40 horas de trabajo de cada empleado, y paga cuota y media en todas las horas trabajadas que excedan de 40. Usted recibe las horas trabajadas y el valor de la hora de cada empleado. Debe determinar y mostrar el sueldo bruto de cada empleado.*/

int main(){
    int horas=0;
    float cuota=0;
    float sueldo=0;
    
    for(int i=1;i<=3;i++){
        printf("Ingrese cantidad de horas del trabajador: %d",i);
        scanf("%d",&horas);
        printf("Ingrese precio de la hora del trabajador: %d",i);
        scanf("%f",&cuota);
        
        if(horas>40){
            sueldo=40*cuota+((horas-40)*cuota)*1.5;
        }
        else{
            sueldo = horas*cuota;
        };
        printf("El sueldo del empleado %d es: $%f\n",i,sueldo);
        printf("================================================\n");
    }
    return 0;

}
