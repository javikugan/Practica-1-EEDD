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
    nodo -> maleta = maleta;
    if (cima == 0) {
		cima = nodo;
	}
	else {
		nodo->siguiente = cima;
		cima = nodo;
	}
}
TMaleta Pila::desapilar(){
        Nodo* nodo = cima;
        cima = nodo-> siguiente;
        delete nodo;
        return nodo->maleta;
    
    
    
}
int Pila::largo()
{
	int contador = 0;
	Nodo* nodo = cima;

	while (nodo != nullptr) {
		nodo = nodo->siguiente;
		contador++;
	}
return contador;
}
void Pila::imprimirPila() {

	Nodo* nodo = cima;

	while (nodo != nullptr) {
		Util::imprimirMaleta(nodo->maleta);
		nodo = nodo->siguiente;
	}
}
TMaleta Pila::primero() {
	return cima->maleta;
}

int main(){
	return 0;
};