#include <stdio.h>
#include <string.h>

typedef struct{
    int pages;
    int state;
}Impresora;

typedef struct{
    char nombre[20];
    Impresora impresoras[4];
}Sector;

int main(){
    Sector sectores[3]={
        {"Administración"},
        {"Recursos Humanos"},
        {"Técnica"}
    };

    for (int i=0; i<3;i++){
        printf("****SECTOR  %s ****\n" ,sectores[i].nombre);
        for(int j=0;j<4;j++){
            printf("Impresora %d : (Estado 1 : Activa, 0: Inactiva)\n", j+1);
            scanf("%d", &sectores[i].impresoras[j].state);
            printf("Impresora %d : Páginas impresas: \n", j+1);
            scanf("%d", &sectores[i].impresoras[j].pages);

        }

    }


    int sector_max = 0;
    int max_pages = 0;


    for (int i=0; i<3;i++){
        int total_pages = 0;
        int activas=0;
        printf("Sector %s\n", sectores[i].nombre);
        for(int j=0;j<4;j++){
            total_pages += sectores[i].impresoras[j].pages;
            if(sectores[i].impresoras[j].state == 1){
                activas++;
            }


        }
        printf("Total páginas impresas:  %d\n", total_pages);
            printf("Impresoras activas: %d\n", activas);

            if(max_pages < total_pages){
                max_pages = total_pages;
                sector_max = i;
            }



    }

    printf("El sector que más páginas impresas tiene es: %s\n", sectores[sector_max].nombre);
    printf("Total páginas impresas: %d\n", max_pages);







    return 0;
} 
