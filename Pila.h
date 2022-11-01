#ifndef PILA_H
#define PILA_H
#include "NodoPila.h"
#include "TMaleta.h"

class Pila
{
<<<<<<< Updated upstream
private:
    pnodo cima;
public:
=======
    private:
    pnodo cima; 

    public:
>>>>>>> Stashed changes
    Pila();
    ~Pila();
    bool esVacia();
    void apilar(int v);
    void desapilar();
    int mostrar();
};
#endif // PILA_H