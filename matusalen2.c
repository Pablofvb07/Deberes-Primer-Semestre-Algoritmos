#include <stdio.h>

int main() {
    int Counter = 3;
    int age;
    
    do {
        printf("Adivina la edad de Matusalén : ");
        scanf("%d", &age);
        
        if (age == 969) {
            printf("¡Correcto! Has adivinado la edad de Matusalén.\n");
            break;
        } else if (age < 969) {
            printf("Incorrecto. Matusalén es mayor.\n");
        } else {
            printf("Incorrecto. Matusalén es menor .\n");
        }
        
        Counter--;
        if (Counter > 0) {
            printf("Te quedan %d intento(s).\n", Counter);
        } else {
            printf("Has agotado todos los intentos.\n");
        }
    } while (Counter > 0);
    
    printf("¿Deseas intentarlo nuevamente? (si/no): ");
    char answer[3];
    scanf("%s", answer);
    
    if (strcmp(answer, "si") == 0 || strcmp(answer, "SI") == 0) {
        main();
    } else {
        printf("Gracias por jugar.\n");
    }
    
    return 0;
}