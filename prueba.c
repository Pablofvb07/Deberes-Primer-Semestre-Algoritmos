#include <stdio.h>

int main() {
    int cantidadAlumnos, edad, materiasAprobadas, materiasDesaprobadas;
    int contadorMayoresDesaprobadas = 0;
    int contadorAprobadas = 0;
    int contadorDesaprobadas = 0;
    int contadorTripleAprobadas = 0;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantidadAlumnos);

    for (int i = 0; i < cantidadAlumnos; i++) {
        printf("\nDatos del alumno %d:\n", i + 1);

        printf("Edad: ");
        scanf("%d", &edad);

        printf("Cantidad de materias aprobadas: ");
        scanf("%d", &materiasAprobadas);
        contadorAprobadas += materiasAprobadas;

        printf("Cantidad de materias desaprobadas: ");
        scanf("%d", &materiasDesaprobadas);
        contadorDesaprobadas += materiasDesaprobadas;

        if (edad > 21 && materiasDesaprobadas > 2) {
            contadorMayoresDesaprobadas++;
        }

        if (materiasAprobadas == materiasDesaprobadas * 3) {
            printf("Edad de la persona con triple de materias aprobadas: %d\n", edad);
            contadorTripleAprobadas++;
        }
    }

    float porcentajeAprobadas = (float)contadorAprobadas / (contadorAprobadas + contadorDesaprobadas) * 100;
    float porcentajeDesaprobadas = (float)contadorDesaprobadas / (contadorAprobadas + contadorDesaprobadas) * 100;

    printf("\nResultados:\n");
    printf("Cantidad de alumnos mayores a 21 años con más de 2 materias desaprobadas: %d\n", contadorMayoresDesaprobadas);
    printf("Porcentaje de materias aprobadas: %.2f%%\n", porcentajeAprobadas);
    printf("Porcentaje de materias desaprobadas: %.2f%%\n", porcentajeDesaprobadas);
    printf("Cantidad de personas con el triple de materias aprobadas respecto a las desaprobadas: %d\n", contadorTripleAprobadas);

    return 0;
}