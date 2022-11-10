#include "NodoCola.h"
#include <TMaleta.h>   

NodoCola::NodoCola()
{
elemento='0';
siguiente=NULL;
//constructor por defecto
}
NodoCola::NodoCola(TMaleta maleta, NodoCola*sig )
{
elemento = maleta;
siguiente = sig;
}
NodoCola::~NodoCola()
{
//dtor
}