#include <stdio.h>
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

