#ifndef PILA_H
#define PILA_H
#include "Util.h"

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