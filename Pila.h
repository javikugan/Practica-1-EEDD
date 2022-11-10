#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
#include "TMaleta.h"
class Pila{
private:  
    Nodo* cima;
public:
    void desapilar(TMaleta maleta);
    TMaleta desapilar();

    Pila();
    ~Pila();
    bool esVacia();
    int mostrar();
};
#endif // PILA_H