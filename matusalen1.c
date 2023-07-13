#include <stdio.h>
    main () {
    int age, counter=3, answer;
   do
    {
        printf("Adivina la edad de matusalen \n ");
        printf("Ingresa un numero");
        scanf("%d", &age);
        if (age<969)
        {printf("La edad ingresada es incorrecta. Pista intenta con un numero mas alto. \n");}
        else
        if (age>969)
        {printf("La edad ingresada es incorrecta. Pista intenta con un numero mas bajo. \n");}
        else
        if (age==969)
        {printf ("FELICIDADES!!!! HAS ACERTADO LA EDAD");
        break;}
        counter-- ;
        if (counter=0)
        {
        printf ("Se han acabado tus intentos. Quieres volver a intentarlo? Si:1 No:2 \n");
        scanf ("%d",answer);
         if (strcmp(answer, 1) == 0 ){
        main();}
        else
        printf ("gracias por jugar \n");
       
          
    }
 while (counter>0)
    }
    }