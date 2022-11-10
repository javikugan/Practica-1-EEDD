#include "Pila.h"
#include "TMaleta.h"
#include <iostream>
#include "Util.h"


using namespace std;

Pila::Pila()
{cima = NULL;}  

Pila::~Pila(){
    while(cima) desapilar();
    }

bool Pila::esVacia(){ 
    return cima == NULL; 
    }

void Pila::apilar(TMaleta maleta){
    
    Nodo* nodo = new Nodo();
    nodo -> paquete = paquete;
    if (cima == 0) {
		cima = nodo;
	}
	else {
		nodo->next = cima;
		cima = nodo;
	}
}
TMaleta Pila::desapilar(){
    if(cima){
        Nodo* nodo = cima;
        cima = nodo-> siguiente;
        delete nodo;
        return nodo->paquete;
    }else{
        cout << "Pila Vacia"
    }
    
}
int Pila::largo()
{
	int contador = 0;
	Nodo* nodo = cima;

	while (nodo != nullptr) {
		nodo = nodo->next;
		contador++;
	}
return contador;
}
void Pila::imprimirPila() {

	Nodo* nodo = cima;

	while (nodo != nullptr) {
		imprimirPaquete(nodo->maleta);
		nodo = nodo->siguiente;
	}
}
TMaleta Pila::cima() {
	return cima->paquete;
}