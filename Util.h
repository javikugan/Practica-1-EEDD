
#ifndef UTIL
#define UTIL
#include <iostream> 
#include <string>
#include "Nodo.h"
#include "TMaleta.h"
#include "Cola.h"

class Util{
    
    void imprimirMaleta(TMaleta maleta);
    std::string generarID(int n);
    std::string generarDni();
    int generar_numero_aleatorio(int minimo, int maximo);
    void cadena_aleatoria(int longitud, char *destino);
    std::string dni_aleat();
    std::string generar_origen();
    std::string generar_destino();
    std::string generar_hora_salida();
    std::string Id_Vuelo_aleatorio();
    

};
#endif