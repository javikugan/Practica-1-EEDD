#ifndef NODOPILA_H
#define NODOPILA_H
#include <TMaleta.h>   
#include <iostream>

class NodoPila{

friend class Cola;

    private:
        NodoPila *siguiente;
        TMaleta* mm;

    public:

        NodoPila();
            NodoPila(TMaleta* mm, NodoPila *sig = NULL){
            maleta = mm;
            siguiente = sig;
        };
        ~NodoCola();

};

 