#include <stdio.h>
#include<math.h>
// Tarea en Parejas de Pablo Vargas y Ariel Velasco 
    main ()
    {
    int caramelos,chupetes,chicles,total,cantidades,total50;
    float porcentaje ;
    cantidades=0; 
    total50=0;
    printf("Ingrese la cantidad de caramelos");
     scanf("%d",&caramelos);
    printf("Ingrese la cantidad de chupetes");
    scanf("%d",&chupetes);
     printf("Ingrese la cantidad de chicles");
     scanf("%d",&chicles);
     if (caramelos > 50) {
        cantidades++;
        total50 += caramelos;
    }
    if (chupetes > 50) {
        cantidades++;
        total50+=chupetes;
    }
    if (chicles > 50) {
        cantidades++;
        total50+=chicles;
    }
    total=caramelos+chicles+chupetes;
    porcentaje = (float)total50 / total;
     
     printf("La cantidad de golosinas que tienen mas de 50 unidades es: ""%d",cantidades);
     printf("Esto representa el %.0f porciento de todas sus golosinas",(porcentaje*100));
     if (caramelos<10)
     printf("El stock de los caramelos esta bajo por favor verifique\n");
     if (chupetes<10)
     printf("El stock de los chupetes esta bajo por favor verifique\n");
     if (chicles<10)

     printf("El stock de los chicles esta bajo por favor verifique\n");
    }