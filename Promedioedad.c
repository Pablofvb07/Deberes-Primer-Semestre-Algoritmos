#include <stdio.h>
    main(){ 
    int QuantityP, Age, Gender;
    int counter=0, counterM=0, counterF=0 ;
    float percentageWomen,percentageMen;
    // 0 for Masculine 1 for Femenine
        printf("enter the amount of people--->");
        scanf("%d", &QuantityP);
    while (counter<QuantityP){
        printf ("Enter the age --->");
        scanf ("%d", &Age);
        printf ("Select your gender:0= Masculine 1= Femenine----->");
        scanf("%d", &Gender);
    switch (Gender){
    case 0:
        if (Age>=18)
        counterM++;
    break;
    case 1:
        if (Age>=18)
        counterF++;
    break;
    default:
        printf ("The entered value is not allowed");
    break;
   

    }
    percentageWomen = (float)counterF/QuantityP * 100;
    percentageMen = (float)counterM /QuantityP* 100;
    counter++; }
    printf("la cantidad de mujeres mayores de edad es de:%d\n",counterF);
    printf("la cantidad de Hombres mayores de edad es de:%d\n",counterM);
    printf("el porcentaje de mujeres es de%.2f%%\n",percentageWomen);
    printf("el porcentaje de hombres es de%.2f%%\n",percentageMen);
    
    
    }