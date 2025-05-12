#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int daño_mago_base = 40;
    int mana_enemigo;
    float incrementacion = 0.15;
    int tipo_golpe;

    printf("Ingrese el mana total del enemigo (entre 120 y 300)\n");
    scanf("%d\n", &mana_enemigo);
    int daño_mago_actual = daño_mago_base + (mana_enemigo * incrementacion);


    printf("EL MAGO LANZA UN HECHIZO\n");
    if(daño_mago_actual >= 80){
        printf("CRITICAL HIT");
        tipo_golpe = 1;
    }else{
        printf(" \nNORMAL HIT");
        tipo_golpe = 0;
    }

    printf("Daño total del enemigo %d\n", daño_mago_actual);
    if(tipo_golpe==1){
        printf("Tipo de golpe: Crítico");
    }else{
        printf("Tipo de golpe:  Normal");
    }

    return 0;
}