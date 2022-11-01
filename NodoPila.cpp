#include "NodoPila.h"
#include <TMaleta.h>   
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
} TMaleta maleta; 
 Nodopila * Sig