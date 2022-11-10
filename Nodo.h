#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <TMaleta.h>   
#include <iostream>

typedef struct Nodo{
    TMaleta maleta;
    Nodo* siguiente = nullptr; 
    Nodo* anterior = nullptr;
};      