#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
#include "TMaleta.h"
class Cola{
    private:
        Nodo* primero;
        Nodo* ultimo;

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