#include <stdio.h>
#include <math.h>
int main (void) {
int number=0, even=0 , odd=0;

do
{
printf ("Ingrese un numero\n");
scanf ("%d",&number);
 if ( number%2==0 && number>0)
    even++;
 else if (number %2==1)
    odd++;
else if (number==0)
printf("Su numero es 0\n");
else
printf("generando resultados.....\n");
} while (number>=0);
printf("el total de numeros pares ingresados es %d\n",even);
printf("el total de numeros impares ingresados es %d\n",odd);


}