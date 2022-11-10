#ifndef COLA_H
#define COLA_H
#include "Util.h"
#include "TMaleta.h"
#include "Nodo.h"


class Cola{
    private:
        TMaleta maleta;
        Nodo* primero;
        Nodo* ultimo;

    public:
        Cola(); ~Cola();
        void encolar(TMaleta maleta);
        TMaleta desencolar();
        TMaleta fin();
        TMaleta inicio();
        bool es_vacia();
        Nodo* first();
        int length();
        Cola* generarNMaletas(int numMaletas);
        void mostrarCola();

    };
#endif 