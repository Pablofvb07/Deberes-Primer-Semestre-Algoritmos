#include <stdio.h>
int main()
{
  float base,altura,perimetro,area;
  printf("Ingrese la base del rectangulo");
  scanf("%f",&base);
   printf("Ingrese la altura del rectangulo");
   scanf("%f",&altura);
   perimetro=2*base+ 2*altura;
   area=base*altura;
   printf("el perimetro del rectangulo es-->" "%2.f",perimetro);
    printf("el area del rectangulo es-->" "%2.f",area);
    return 0;
}
