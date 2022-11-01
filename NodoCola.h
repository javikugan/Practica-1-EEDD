#ifndef NODOCOLA_H
#define NODOCOLA_H
#include "TMaleta.h"
#include <iostream>
class NodoCola
{
friend class Cola;
private:
NodoCola *siguiente;
Maleta maleta;
public:
NodoCola();
NodoCola(Maleta maleta, NodoCola*sig = NULL);
~NodoCola();
};