#include <stdio.h>
#include <string.h>
   int main(void) {
    int barrels=10,total=0;
    char typeofb [3];
do
{   
    
    printf("Ingrese el tipo de barril (A,B,C,D)---> \n");
    scanf("%s", typeofb);
    if (strcmp(typeofb,"A")==0 ||strcmp(typeofb,"a")==0   )
    {
     printf ("Usted ha seleccionado barril tipo a= 25 litros \n");
     total=total+25;
    }
    else if (strcmp(typeofb,"B")==0 ||strcmp(typeofb,"b")==0)
    {
     printf ("Usted ha seleccionado barril tipo b= 40litros \n");
     total=total+40;
    }
    else if (strcmp(typeofb,"C")==0 ||strcmp(typeofb,"c")==0)
    {
     printf ("Usted ha seleccionado barril tipo c= 50litros \n");
     total=total+50;
    }
    else if (strcmp(typeofb,"D")==0 ||strcmp(typeofb,"d")==0)
    {
     printf ("Usted ha seleccionado barril tipo d=100litros \n");
     total=total+100;
    }
    else {printf("Tipo de barril incorrecto por favor ingrese otro \n");
    barrels++;}
    barrels--;
    } while (barrels>0);
    printf ("el volumen total de los barriles es de %d \n",total );
    return 0 ;}