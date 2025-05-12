#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Material {
    char nombre[20];
    int precio;
};

int main() {
    struct Material tabla = {"Tabla", 50};
    struct Material clavo = {"Clavo", 10};
    struct Material soga = {"Soga", 75};


    srand(time(NULL));
    int oro = (rand() % 300-100+1) + 100;  

    int costoTotal = (2 * tabla.precio) + (4 * clavo.precio) + soga.precio;

    printf("Oro disponible: %d\n", oro);

    if (oro >= costoTotal) {
        oro -= costoTotal;
        printf("Pudo comprar todos los materiales.\n");
    } else if (oro >= soga.precio) {
        oro -= soga.precio;
        printf("No le alcanzó para todos los materiales. Compró solo la soga.\n");
    } else {
        printf("No le alcanzó para comprar todos los materiales ni la soga.\n");
    }

    printf("Oro restante: %d\n", oro);

    return 0;
}