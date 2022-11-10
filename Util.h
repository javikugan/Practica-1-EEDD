#define N1 100
#define N2 15
#define N3 10
#include <iostream> 
#include <string>
#include "Nodo.h"
#include "TMaleta.h"
#include "Cola.h"

namespace Util{
    

    std::string generarID(int n);
    std::string generarDni();
    int generar_numero_aleatorio(int minimo, int maximo);
    void cadena_aleatoria(int longitud, char *destino);
    std::string dni_aleat();
    std::string generar_origen();
    std::string generar_destino();
    std::string generar_hora_salida();
    std::string Id_Vuelo_aleatorio();
    void imprimirMaleta(TMaleta maleta);
    

};
