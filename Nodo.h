#ifndef NODO
#define NODO
#include <iostream> 
#include <string>
#include "TMaleta.h"

typedef struct Nodo{
    Nodo* siguiente = nullptr; 
    Nodo* anterior = nullptr;
    TMaleta maleta;
} Nodo;        
#endif