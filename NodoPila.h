#ifndef NODOPILA_H
#define NODOPILA_H
#include "TMaleta.h"
#include <iostream>

<<<<<<< Updated upstream
class NodoPila{

    private:
        int valor;
        NodoPila *siguiente;
        friend class Pila;
=======
class NodoPila
{
    private:
    int valor;
    NodoPila *siguiente;
    friend class Pila;
>>>>>>> Stashed changes
    public:
    NodoPila();
    NodoPila(int v, NodoPila *sig = NULL);
    ~NodoPila();
<<<<<<< Updated upstream
};
typedef NodoPila *pnodo;
=======
    };
    typedef NodoPila *pnodo;
>>>>>>> Stashed changes
#endif // NODOPILA_H