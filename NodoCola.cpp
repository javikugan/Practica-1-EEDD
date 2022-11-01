#include "NodoCola.h"
#include "TMaleta.h"

NodoCola::NodoCola()
{
maleta='0';
siguiente=NULL;
//constructor por defecto
}
NodoCola::NodoCola(TMaleta mmaleta, NodoCola*sig )
{
maleta = mmaleta;
siguiente = sig;
}
NodoCola::~NodoCola()
{
//dtor
}