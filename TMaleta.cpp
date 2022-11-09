
#include "TMaleta.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <time.h>
using namespace std;


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
char dni_aleat(){
    int dninum;
    char dni;
    dninum = generar_numero_aleatorio(10000000,99999999);
    dni = int.TryParse(dninum);
    int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
    dni[8] = muestra[indiceAleatorio];
    return dni

}


std::string Id_Vuelo_aleatorio() {
    std::string idVuelo[] = {"IB3412", "AC4832", "RY2781", "MS1032", "UA5389", "AE2334", "KL9768"};
    int indiceAleatorio = generar_numero_aleatorio(0, 7);
    std::string destino = idVuelo[indiceAleatorio];
    return destino;
}
TMaleta::TMaleta(char idf, char dnif, char destinof, char origenf, int localizadorf, char nombref, int horaf){
    id = Id_Vuelo_aleatorio();
    dni= dni_aleat();
    destino = destinof;
    origen = origenf;
    localizador = localizadorf;
    nombre = nombref;
    hora = horaf;
}

TMaleta crear_Maleta_rand(){
    id = Id_Vuelo_aleatorio();
    dni= dni_aleat();
    destino = destinof;
    origen = origenf;
    localizador = localizadorf;
    nombre = nombref;
    hora = horaf;
}
int main(){
    cout << dni_aleat();
}