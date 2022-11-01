#include "Pila.h"
#include "NodoPila.h"
#include "TMaleta.h"
#include <iostream>

using namespace std;

Pila::Pila()
{cima = NULL;}  

Pila::~Pila()
    { while(cima) desapilar();}
    bool Pila::esVacia()
{ return cima == NULL; }
void Pila::apilar(int v)
{ pnodo nuevo = new NodoPila(v,
cima);
//comienzo de la pila nevo nodo
cima = nuevo;
}
void Pila::desapilar()
{ pnodo nodo; //puntero aux para manipular el nodo
if(cima)
nodo = cima;
cima = nodo->siguiente;
delete nodo;
}
int Pila::mostrar()
{ if(esVacia()) {
cout << "Pila vacia"<<endl;
}
else{
cout << "Cima pila: "<< cima->valor<<endl;
}
return 0;
}
int main(){
    cout << "Creamos la pila Vacía" << endl;
    Pila p; p.mostrar();
    cout << "Apilo 0" << endl;
    p.apilar(0); p.mostrar();
    cout << "Apilo 1" << endl;
    p.apilar(1); p.mostrar();
    cout << "Apilo 2" << endl;
    p.apilar(2); p.mostrar();
    cout << "Desapilo" << endl;
    p.desapilar(); p.mostrar();
    p.~Pila(); //es innecesario, se va a llamar al destructor al salir de la ejecución
return 0;
}