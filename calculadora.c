#include <stdio.h>
#include <Windows.h>
main (){ 
    int menu ;
    float valor1, valor2, resultado;
    do
    {
         system ("cls");
        printf("1.-Suma\n");
        printf("2.-Resta\n");
        printf("3.-multiplicacion\n");
        printf("4.-division\n");
        printf ("5.-salir\n");
        printf ("ingrese la operacion que quiere realizar \n");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
           printf("Ingrese el primer valor a sumar");
           scanf("%f",&valor1);
           printf("ingrese el segundo valor a sumar");
           scanf("%f", &valor2);
           resultado=valor1+valor2;
           printf("la suma de %.2f y de %.2f es %.2f", valor1 , valor2, resultado);
           printf("Apachurrele enter para volver al menu\n");
            getch();
            break;
            case 2:
           printf("Ingrese el primer valor a restar");
           scanf("%f",&valor1);
           printf("ingrese el segundo valor a restar");
           scanf("%f", &valor2);
           resultado=valor1-valor2;
           printf("la resta de %.2f y de %.2f es %.2f", valor1 , valor2, resultado);
           printf("Apachurrele enter para volver al menu\n");
            getch();
            break;
            case 3:
           printf("Ingrese el primer valor a multiplicar");
           scanf("%f",&valor1);
           printf("ingrese el segundo valor a multiplicar");
           scanf("%f", &valor2);
           resultado=valor1*valor2;
           printf("la multiplicacion de %.2f y de %.2f es %.2f", valor1 , valor2, resultado);
           printf("Apachurrele enter para volver al menu\n");
        getch();
            break;
            case 4:
           printf("Ingrese el primer valor a dividir");
           scanf("%f",&valor1);
           printf("ingrese el segundo valor a dividir");
           scanf("%f", &valor2);
           if (valor2 !=0)
           resultado=valor1/valor2;
           printf("la division de %.2f y de %.2f es %.2f", valor1 , valor2, resultado);
           printf("Apachurrele enter para volver al menu");
            getch();
            break;
        default:
        break;
        }
    } while (menu!=5);}
    
    
    
