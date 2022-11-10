#include "Cola.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <string> 
#include "Util.h"
#include "Nodo.h"
#include "TMaleta.h"
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
        dni + numeros[indiceAleatorio1];
        cout << dni;
        }
        
  
    int indiceAleatorio2 = generar_numero_aleatorio(0, (int) strlen(muestra) - 1);
    return dni + muestra[indiceAleatorio2];

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
std::string generar_localizador(){
    char numeros[]= "0123456789";
    std::string localizador;
    for (int x=0; x < 4; x++){
        int indiceAleatorio= generar_numero_aleatorio(0, (int) strlen(numeros)-1);
        localizador + numeros[indiceAleatorio];
    
    }
    return localizador;
}

std::string Id_Vuelo_aleatorio() {
    std::string idVuelo[] = {"IB3412", "AC4832", "RY2781", "MS1032", "UA5389", "AE2334", "KL9768"};
    int indiceAleatorio3 = generar_numero_aleatorio(0, 7);
    std::string destino = idVuelo[indiceAleatorio3];
    return destino;
}
std::string generar_nombres(){
    std::string nombre= "";
     

    std::string nombres[] = {"Antonio", "David", "Juan", "Francisco", "Daniel", "José", "Manuel", "Teresa", "Celia", "María", "Lucía", "Rocío", "Ascen", "Loren", "Álvaro", "Lourdes", "Laura", "Sofía", "Mario", "Javier", "Marco", "Lara", "Luisa", "Luis", "Fernando", "Domingo", "África", "Andrea", "Sergio", "Adrián", "Pablo", "Sandra", "Marta", "Valeria", "Paula", "Luna", "Diana", "Noelia", "Marcos", "Iván", "Jaime", "Diego", "Isabel", "Blanca", "Ana"};
    std::string apellido[] = {"Pascual", "Rodríguez", "Polanco", "Núñez", "González", "Aldea", "Manso", "Pérez", "Cebrecos", "Moglovejo", "Fernández", "Roma", "Ortiz", "Viñas", "Vaca", "Jarillo", "Cembellín", "Alberti", "Martínez", "Sánchez", "García", "Gómez", "López", "Martín", "Cuesta", "Mogolló", "Simón", "Peña", "Velasco", "Jurado", "Loro", "Blanco", "Honrado", "Gil", "de Cos", "Márquez", "Díaz", "Palomino", "Tesifonte", "Luzdivino", "Dombina", "Calleja", "Ruiz", "Oristila", "Bonifacio"};
    int indiceAleatorio4 = generar_numero_aleatorio(0,44);
    int indiceAleatorio5 = generar_numero_aleatorio(0,44);
    nombre = nombre + " " + nombres[indiceAleatorio4] + apellido[indiceAleatorio4] + apellido[indiceAleatorio5]; 
    return nombre;

}
TMaleta generar_maleta(){
    TMaleta maleta;
    maleta.dni = dni_aleat();
    maleta.hora = generar_hora_salida();
    maleta.destino = generar_destino();
    maleta.origen = generar_origen();
    maleta.localizador = generar_localizador();
    maleta.nombre = generar_nombres();
    return maleta;
}
void imprimirMaleta(TMaleta maleta) {

	cout << "|" + maleta.id + "|" + maleta.localizador + "|" + maleta.nombre + "|" + maleta.destino + "|" + maleta.hora + "|" + maleta.nombre + "|" << endl;
}
Cola* generarNMaletas(int numMaletas) {
	//genera n paquetes de manera aleatoria y los mete en una cola
	Cola* cola = new Cola();
	TMaleta maleta;
	for (int i = 0; i <= numMaletas - 1; i++) {
		maleta = generar_maleta();
		cola->Cola::encolar(maleta);
		imprimirMaleta(maleta);
	}
	return cola;
}



int main(){
    cout << Id_Vuelo_aleatorio() << "\n";
    cout << dni_aleat() << "\n";
    cout << generar_origen() << "\n";
    cout << generar_destino() << "\n";
    cout << generar_hora_salida() << "\n";
    cout << generar_localizador() << "\n"; 
    cout << generar_nombres() << "\n";
    return 0;

}
