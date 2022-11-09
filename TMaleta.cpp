#include "TMaleta.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <string> 
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
std::string dni_aleat(){
    int dni;
    char muestra[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    dni = generar_numero_aleatorio(10000000,99999999);
    cout << dni << "\n";
  
    int indiceAleatorio = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
    return to_string(dni) + muestra[indiceAleatorio];

}
std::string generar_origen(){
    std::string muestra[]= {"MADRID", "MÁLAGA", "COPENHAGUE", "LONDRES-STANSTED", "WASHINGTON DULLES", "VIRGINIA", "CHANTILLY"};
    int origen_n = generar_numero_aleatorio(0,6);
    std::string origen = muestra[origen_n];
    return origen; 
}

std::string generar_destino(){
    std::string muestra[]= {"ARGENTINA", "CHILE","ALEMANIA", "BUENOS AIRES", "ISLANDIA", "ALBANIA", "BÉLGICA"};
    int destino_n = generar_numero_aleatorio(0,6);
    std::string destino = muestra[destino_n];
    return destino; 

}

std::string generar_hora_salida(){
    std::string muestra[]= {"2147", "2354", "1234"};
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
    cout << Id_Vuelo_aleatorio() << "\n";
    cout << dni_aleat() << "\n";
    cout << generar_origen() << "\n";
    cout << generar_destino() << "\n";
    cout << generar_hora_salida() << "\n";
    
    return 0;

}



