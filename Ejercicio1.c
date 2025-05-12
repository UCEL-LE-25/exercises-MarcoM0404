#include <stdio.h>

int main(){
    int vida = 100; //se declara el valor de la vida 
    float escudo = 25;
    int tienePocion = 1; //se cambia por int ya que no tiene el include para usar bool


    if(vida ==100 && escudo >0){ // la vida tiene que ser ==, tiene que igualar y no declarar
        printf("Jugador con vida y escudo\n");
        
    }else if((vida>0&& vida<100) && tienePocion==1){ //para que el jugador esté herido pero no muerto, tiene que tener 
        //más de 0 y menos de 100 de vida, ademas se cambia el || por && ya que debe cumplir las dos condiciones, no solo una.
        printf("Jugador herido pero con posibilidad de curarse");
    }
    else if(vida<=0){ //la vida tiene que ser menor o igual a 0, no menor a 0 porque si tiene cero de vida no lo toma como muerto.
        printf("Jugador muerto");
    }else{
        printf("Estado desconocido");
    }
    return 0;
}