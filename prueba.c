#include <stdio.h>
#include <string.h>



struct Estudiante {
    char nombre[50];
    int edad;
    float nota_final;
};

int main() {
    struct Estudiante estudiantes[100];
    int cantidad = 0;
    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Agregar nuevo estudiante\n");
        printf("2. Mostrar todos los registrados\n");
        printf("3. Calcular promedio de notas\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        

        switch (opcion) {
            case 1:

                if (cantidad >= 100) {
                    printf("No se pueden agregar más estudiantes.\n");
                    break;
                }
                printf("Nombre (una palabra): ");
                scanf("%s", estudiantes[cantidad].nombre);
                printf("Edad: ");
                scanf("%d", &estudiantes[cantidad].edad);
                printf("Nota final: ");
                scanf("%f", &estudiantes[cantidad].nota_final);
                cantidad++;
                break;

            case 2:
                printf("\n--- Lista de estudiantes ---\n");
                for (int i = 0; i < cantidad; i++) {
                    printf("Estudiante %d:\n", i + 1);
                    printf("  Nombre: %s\n", estudiantes[i].nombre);
                    printf("  Edad: %d\n", estudiantes[i].edad);
                    printf("  Nota final: %.2f\n", estudiantes[i].nota_final);
                }
                break;

            case 3:
                if (cantidad == 0) {
                    printf("No hay estudiantes registrados.\n");
                    break;
                }
                float suma = 0;
                for (int i = 0; i < cantidad; i++) {
                    suma += estudiantes[i].nota_final;
                }
                printf("Promedio de notas: %.2f\n", suma / cantidad);
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 4);

    return 0;
}
