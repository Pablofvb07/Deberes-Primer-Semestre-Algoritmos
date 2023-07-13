#include <stdio.h>
#define valorD 5
#define valorN 8
//tipo jornada 0=diurno 1=nocturno
//Nrodia 1=Lunes 2=Martes 3=Miercoles
//4= Jueves 5=Viernes 6=Sabado 7=Domingo
// y=&& o=||
// Nombre del Estudiante:Pablo Vargas 
main () 
{
    int NroHoras,Tipojornada,Nrodia,totalpago;
    printf("Ingrese el numero de horas---->  ");
    scanf("%d",&NroHoras);
    printf("Ingrese el tipo de jornada-----> ");
    scanf("%d",&Tipojornada);
    printf("Ingrese el dia en el que trabajo-----> ");
    scanf("%d",&Nrodia);
    if (Tipojornada==0 && Nrodia==7)
     totalpago= NroHoras*( valorD +2);
     else totalpago=NroHoras*valorD;
    if (Tipojornada==1 && Nrodia==7)
    totalpago= NroHoras*( valorN + 3);
    else totalpago=NroHoras*valorN;
    printf("El valor diario a pagar es % d dolares", totalpago);
}