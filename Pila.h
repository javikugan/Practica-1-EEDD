#ifndef PILA_H
#define PILA_H
#include "NodoPila.h"
class Pila
{
private:
pnodo cima;
public:
Pila();
~Pila();
bool esVacia();
void apilar(int v);
void desapilar();
int mostrar();
};
#endif // PILA_H