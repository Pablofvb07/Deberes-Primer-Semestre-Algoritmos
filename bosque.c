#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
int diameter,height, log_total, diameter_total=0,height_total=0;
float diameter_avg, height_avg ;
char option [2];
printf("Desea comenzar el programa? Si,No\n");
scanf("%s",option);
do
{
log_total++;
printf("Ingrese el diametro del tronco\n");
scanf("%d",&diameter);
diameter_total=diameter_total+diameter;
diameter_avg=diameter_total/log_total;
printf("Ingrese la altura del tronco\n");
scanf("%d",&height);
height_total=height_total+height;
height_avg=height_total/log_total;
printf("Desea ingresar otro tronco?\n");
scanf("%s",option);
} while (strcmp(option, "Si") == 0 || strcmp(option, "si") == 0);
printf("El diametro promedio de los troncos es %.2f\n",diameter_avg);
printf("La altura promedio de los troncos es %.2f\n",height_avg);
}