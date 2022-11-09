#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <TMaleta.h>   
#include <iostream>
class NodoCola
{
friend class Cola;
private:
NodoCola *siguiente;
TMaleta maleta;
public:
NodoCola();
NodoCola(TMaleta maleta, NodoCola*sig = NULL);
~NodoCola();
};