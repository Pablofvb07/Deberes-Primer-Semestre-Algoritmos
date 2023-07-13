#include <stdio.h>
int main(int argc, char const *argv[])
{ float valor,descuento,total ;
printf("Ingrese el valor a pagar-->");
    scanf("%f",&valor);
    descuento=valor*0.85;
    total=descuento;
    printf("el total a pagar es de-->" "%2.f",total);
    return 0;
}
