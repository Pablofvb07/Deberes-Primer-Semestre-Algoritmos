#include <stdio.h>
     main() {
    int age, approved, notapproved,students_total, counter=0, number=0, students21=0, totalapproved=0, totalnotapproved=0,totalsubjects=0, agetriple ;
    float percentageapproved, percentagenotapproved;

    printf ("Ingrese la cantidad de estudiantes cuyas notas va a ingresar");
        scanf("%d",&students_total);
    do
    {  
        number++;
        printf ("Ingrese la edad de el estudiante numero %d \n ",number );
        scanf("%d",&age);
        printf("Ingrese la cantidad de materias aprobadas por el estudiante numero %d\n", number);
        scanf("%d",&approved);
        printf("Ingrese la cantidad de materias desaprobadas por el estudiante numero %d\n", number);
        scanf("%d",&notapproved);
        if (age>21 && notapproved>2)
        {students21++;}
        totalapproved+=approved;
        totalnotapproved+=notapproved; 
        if (approved=notapproved*3)
        {
        printf("la edad de este estudiante que tiene el triple de materias aprobadas es: %d\n",age );
        agetriple=age;
        }        
        students_total--;  
    } while (students_total>0);
    percentageapproved=(float)totalapproved/(totalapproved+totalnotapproved)*100; 
    percentagenotapproved=(float)totalnotapproved/(totalapproved+totalnotapproved)*100;
     printf("La cantidad de estudiantes mayores a 21 años son %d\n",students21);
     printf("el porcentaje de materias aprobadas es:%.2f%%\n",percentageapproved);
     printf("el porcentaje de materias desaprobadas es de:%.2f%%\n",percentagenotapproved);    
    }