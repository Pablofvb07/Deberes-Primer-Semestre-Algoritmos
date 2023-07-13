#include <stdio.h>
main ()
{
int age, counter=0;
    printf ("Adivine la edad de matusalen");
   do{
    printf ("Ingrese un numero \n");
    scanf("%d",&age);
    if (age<969)
    {
    printf("la edad ingresada es incorrecta. Pista:Intenta con un numero mas alto");
    }else if (age > 969)
    {
      printf("la edad ingresada es incorrecta. Pista:Intenta con un numero mas bajo");
    
    }
    else 
    printf ("La edad ingresada es correcta. FELICIDADES!!!!");
    break;
    counter++;
    } while (counter<3 );


    }
