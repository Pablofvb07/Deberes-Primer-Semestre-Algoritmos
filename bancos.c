#include <stdio.h>
    //Sabiendo la cantidad de bancos de un aula y la cantidad de alumnos inscritos en el curso. 
    //Determinar si alcanzan los bancos existentes, de no ser así informar además de cuantos bancos son necesarios agregar.
    // Tarea en Parejas de Pablo Vargas y Ariel Velasco 

    main () 
    {
    int Bancos,Alumnos;
    printf("Ingrese la cantidad de bancos en un aula");
    scanf("%d",&Bancos);
    printf("Ingrese la cantidad de alumnos inscritos en el curso");
    scanf("%d",&Alumnos);
    if (Bancos<Alumnos)
    {Bancos=Alumnos-Bancos;
    printf("La cantidad de bancos que tienen que agregar es de:""%d",Bancos);}
    else
    if (Bancos>=Alumnos)
    printf( "La cantidad de bancos existentes alcanzan para todos los estudiantes");

    }

