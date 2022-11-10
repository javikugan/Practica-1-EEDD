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
        TMaleta fin();
        TMaleta inicio();
        
        bool es_vacia();
        Nodo* first();
        int length();
        void mostrarCola();

    };
#endif 