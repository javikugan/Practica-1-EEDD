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
};
