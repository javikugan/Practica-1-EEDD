#include "Cola.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Util.h"
#include "Nodo.h"
#include "TMaleta.h"
Cola::Cola(){
    primero = NULL; ultimo = NULL;
}
Cola::~Cola() { }
void Cola::encolar(TMaleta maleta)
{
	Nodo* nodo = new Nodo();
	nodo->maleta = maleta;
	if (primero == nullptr) {
		ultimo = nodo;
		primero = nodo;
	}
	else {
		ultimo->siguiente = nodo;
		nodo->anterior = ultimo;
		ultimo = nodo;
	}
}
TMaleta Cola::desencolar()
{
	Nodo* nodo = primero;
	primero = primero->siguiente;

	return nodo->maleta;
}
int Cola::length()
{
	int contador = 0;
	Nodo* nodo = primero;

	while (nodo != nullptr) {
		nodo = nodo->siguiente;
		contador++;
	}
	return contador;
}

Nodo* Cola::first() {
	return primero;
}



TMaleta Cola::inicio(){
    
        return primero->maleta;
    
}

TMaleta Cola::fin(){
	return ultimo->maleta;
    
}



bool Cola::es_vacia(){
    return ((primero == NULL) && (ultimo == NULL));
}

void Cola::mostrarCola()
{
Nodo *aux = primero;
if (es_vacia()) {std::cout<<"Cola Vacía: "<<std::endl;
	}else{
	std::cout<<"Datos de la Cola: "<<std::endl;
	while (aux){
		aux = aux->siguiente;
		}
}
}
int main(){

};