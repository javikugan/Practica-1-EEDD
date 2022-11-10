#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"
#include "TMaleta.h"
class Cola{
    private:
        NodoCola* primero;
        NodoCola* ultimo;

    public:
        Cola(); ~Cola();
        void encolar(TMaleta maleta);
        TMaleta desencolar();
        char inicio();
        char fin();
        bool es_vacia();
        Nodo* topNodo();
    };
#endif 