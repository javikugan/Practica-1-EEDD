#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <TMaleta.h>   
#include <iostream>

class NodoCola{

friend class Cola;

    private:
        NodoCola *siguiente;
        TMaleta* mm;

    public:

        NodoCola();
            NodoCola(TMaleta* mm, NodoCola*sig = NULL){
            valor = mm;
            siguiente = sig;
        };
        ~NodoCola();
        
};  