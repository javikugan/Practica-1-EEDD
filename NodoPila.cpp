#include "NodoPila.h"
#include <Maleta.h>   
//hola
NodoPila::NodoPila()
{
valor=0;
siguiente=NULL;
//ctor
}
NodoPila::NodoPila(int v, NodoPila *sig)
{
valor = v;
siguiente = sig;
}
NodoPila::~NodoPila()
{
//dtor
}