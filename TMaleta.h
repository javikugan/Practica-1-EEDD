#ifndef TMALETA
#define TMALETA
#include <iostream> 
#include <string>
typedef struct TMaleta
{
   std::string id;
   std::string dni; 
   std::string destino; 
   std::string origen;
   std::string localizador; //4 digitos
   std::string nombre;
   std::string hora; 
   /* data */
} TMaleta;
#endif