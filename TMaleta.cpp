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
    std::string muestra[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    dninum = generar_numero_aleatorio(10000000,99999999);
    dni = int.TryParse(dninum);
    int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
    dni[8] = muestra[indiceAleatorio];
    return dni;

}
char generar_origen(){
    char origen;
    std::string muestra[]= {"MADRID", "MÁLAGA", "COPENHAGUE", "LONDRES-STANSTED", "WASHINGTON DULLES", "VIRGINIA", "CHANTILLY"}
    int origen_n = generar_numero_aleatorio(0,6);
    std::string origen = muestra[origen_n];
    return origen; 
}

char generar_destino(){
    char destino;
    std::string muestra[]= {"ARGENTINA", "CHILE", "ALEMANIA", "BUENOS AIRES", "ISLANDIA", "ALBANIA", "BÉLGICA"}
    int destino_n = generar_numero_aleatorio(0,6)
    std::string destino = muestra[destino_n];
    return destino; 

}

int generar_hora_salida(){
    char hora_salida;
    std::string muestra[]= {"2147", "2354", "1234"}
    std:: string hora_salida = muestra[generar_numero_aleatorio(0,2)];
    return hora_salida;

}




std::string Id_Vuelo_aleatorio() {
    std::string idVuelo[] = {"IB3412", "AC4832", "RY2781", "MS1032", "UA5389", "AE2334", "KL9768"};
    int indiceAleatorio = generar_numero_aleatorio(0, 7);
    std::string destino = idVuelo[indiceAleatorio];
    return destino;
}


int main(){
    std::string IdVuelo = Id_Vuelo_aleatorio();
    cout << IdVuelo;
    cout << "Imprime los destinos generados de forma aleatoria";
    cout << generar_hora_salida();
    return 0;

}



