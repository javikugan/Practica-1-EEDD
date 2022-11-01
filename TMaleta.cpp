
#include "TMaleta.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

int generar_numero_aleatorio(int minimo, int maximo){
    srand(time(NULL));
    int aleat = minimo + rand()%maximo;
    return aleat;
}
void cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    for (int x = 0; x < longitud; x++) {
        int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    }
}
void dni_aleatorio(char *destino){
    char numeros[] = "0123456789"
    for (int x = 0; x < 8; x++) {
        int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    

}
void Id_Vuelo_aleatorio(char *destino) {
   std::string idVuelo[] = {"IB3412", "AC4832", "RY2781", "MS1032", "UA5389", "AE2334", "KL9768"};
    int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(idVuelo) - 1);
    destino = idVuelo[indiceAleatorio];
    
}


int main(){
    char id[7];
    Id_Vuelo_aleatorio(id);
    printf(id);
    return 0;
}
