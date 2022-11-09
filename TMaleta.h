#ifndef TMaleta
#define TMaleta
#include <iostream>
class TMaleta
{
private:
   char id[6];
   char dni[10]; //creo dni
   char destino[3]; 
   char origen[3];
   int localizador;
   char nombre[30];
   int hora; 
public:
    TMaleta();
    TMaleta(char id, char dni, char destino, char origen, int localizador, char nombte, int hora)
    ~TMaleta();
};
typedef TMaleta 

#endif 

