#pragma once
#include <string>
#include <coordenadas.h>
#include "furgoneta.h"
#include "Cola.h"

namespace Util{

    std::string generarID(int n);
    
    Coordenadas generarCoodenada();
    bool generarUrgencia();
    std::string generarDni();
    void organizarPaquetes();
    void organizarZona(Furgoneta* f, Cola* c, Paquete* p, int* estadisticoPaquetes, int* estadisticoFurgos);
    int generar_numero_aleatorio(int minimo, int maximo);
    void cadena_aleatoria(int longitud, char *destino);
    std::string dni_aleat();
    std::string generar_origen();
    std::string generar_destino();
    std::string generar_hora_salida();
    std::string Id_Vuelo_aleatorio();
    

};
