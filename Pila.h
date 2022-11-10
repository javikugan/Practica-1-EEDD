#ifndef PILA_H
#define PILA_H
#include "Util.h"

class Pila{
private:  
    Nodo* cima;
public:
    TMaleta desapilar();
    void apilar(TMaleta maleta);
    int largo();
    void imprimirPila();
    TMaleta primero();
    Pila();
    ~Pila();
    bool esVacia();
    int mostrar();
};
#endif // PILA_H