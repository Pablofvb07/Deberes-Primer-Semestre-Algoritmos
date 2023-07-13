#include <stdio.h>
int main()
{
 float salario, incremento,salarionuevo ;
printf("Ingrese su salario anterior-->");
 scanf("%f",&salario);
 incremento=salario*0.15;
 salarionuevo=incremento+salario;
 printf("El nuevo salario del obrero sera""%2.f",salarionuevo);
    return 0;
}
