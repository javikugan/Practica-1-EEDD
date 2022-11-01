
#include "TMaleta.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    for (int x = 0; x < longitud; x++) {
        int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    }
}
int main(){
    char id[10];
    cadena_aleatoria(10,id);
    printf(id);
}