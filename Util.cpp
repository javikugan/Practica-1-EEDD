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
    std::string dni;
    char numeros[]= "0123456789";
    char muestra[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   
   
    for (int x = 0; x < 8; x++) {
        int indiceAleatorio1 = generar_numero_aleatorio(0, (int) strlen(numeros) - 1);
        dni + numeros[indiceAleatorio1]
        }
        
  
    int indiceAleatorio2 = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
    return to_string(dni) + muestra[indiceAleatorio2];

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
std::string generara_localizador(){
    char numeros[]= "0123456789";
    for (int x=0; x < 4; x++){
        int indiceAleatorio= generar_numero_aleatorio(0, (int) strlen(numeros)-1);
        localizador + numeros[indiceAleatorio];
        
    }
}

std::string Id_Vuelo_aleatorio() {
    std::string idVuelo[] = {"IB3412", "AC4832", "RY2781", "MS1032", "UA5389", "AE2334", "KL9768"};
    int indiceAleatorio = generar_numero_aleatorio(0, 7);
    std::string destino = idVuelo[indiceAleatorio];
    return destino;
}
TMaleta generar_maleta(){
    TMaleta maleta;
    maleta.dni = dni_aleat();
    maleta.hora = generar_hora_salida();
    maleta.destino = generar_destino();
    maleta.origen = generar_origen();
    maleta.localizador = generar_numero_aleatorio(1000)
}


int main(){
    cout << Id_Vuelo_aleatorio() << "\n";
    cout << dni_aleat() << "\n";
    cout << generar_origen() << "\n";
    cout << generar_destino() << "\n";
    cout << generar_hora_salida() << "\n";
    cout << generara_localizador() << "\n"; 
    
    return 0;

}