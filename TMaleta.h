#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <TMaleta.h>   
#include <iostream>
class TMaleta{
    friend class TMaleta; 
    private: 
    

   char id[6];
   char dni[10]; //creo dni
   char destino[3]; 
   char origen[3];
   int localizador; //4 digitos
   char nombre[30];
   int hora; 
   

    
    /* data */
};
