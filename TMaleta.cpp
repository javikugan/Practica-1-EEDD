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

string Id_Vuelo_aleatorio() {
    std::string idVuelo[] = {"IB3412", "AC4832", "RY2781", "MS1032", "UA5389", "AE2334", "KL9768"};
    int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(idVuelo) - 1);
    destino = idVuelo[indiceAleatorio];
    return destino;
}


int main(){
    std::string IdVuelo = Id_Vuelo_aleatorio();
    printf(IdVuelo);
    return 0;
}