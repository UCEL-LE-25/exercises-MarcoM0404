#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int flechas[10];
    int elemento;
    int acertadas=0;
    int falladas=0;
    srand(time(NULL));

    for (int i =0;i<10;i++){

        int probabilidad = rand()%100;
        printf("%d\n",probabilidad);
        if(probabilidad>40){
            elemento = 1;
        }else{
            elemento=0;
        }
        flechas[i]=elemento;

    }

    for(int i=0;i<10;i++){
        if(flechas[i]==1){
            acertadas++;

        }else{
            falladas++;
        }

        printf("%d",flechas[i]);
        printf(",");
    }

    printf("\n Acertadas: %d", acertadas);
    printf("\n Falladas: %d", falladas);


    return 0;
}