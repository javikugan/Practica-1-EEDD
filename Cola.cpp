#include "Cola.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "TMaleta.h"
#include "Util.h"
#include "Util.cpp"
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
/*bool Cola::buscarMaleta(string idNIF) {
	bool encontrado = false;
	Nodo* nodo = primero;

	while (nodo != nullptr) {
		if (nodo->paquete.id == idNIF || nodo->paquete.NIF == idNIF) {
			encontrado = true;
		}
		nodo = nodo->next;
	}
	return encontrado;
}
void Cola::eliminarMaleta(std::string idNIF) {
	int longitud = length();
	for (int i = 0; i <= longitud - 1; i++) {
		if ((firstNodo->paquete.id == idNIF || firstNodo->paquete.NIF == idNIF)) {
			pop();
		}
		else {
			push(pop());
		}
	}
}*/
Nodo* Cola::first() {
	return primero;
}

/*void Cola::encolar(TMaleta maleta){
    Nodo *nuevo_nodo = new
NodoCola(maleta);
    if(es_vacia()){
        primero = nuevo_nodo;
        ultimo = nuevo_nodo;
    }else{
        ultimo->siguiente = nuevo_nodo;
        ultimo = nuevo_nodo;
    }
    longitud++;
}

TMaleta Cola::desencolar(){
    if(!es_vacia()){
        TMaleta maleta = primero->maleta;
        Nodo*aux = primero;
        
        if((primero == ultimo) && (primero->siguiente == NULL)){
            primero = NULL;
            ultimo = NULL;
            aux->siguiente = NULL;
            delete(aux);
            
            }else{
                primero = primero->siguiente;
                aux->siguiente = NULL;
                delete(aux);
                }
    return maleta;
    }
}*/

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
if (es_vacia()) {std::cout<<"Cola Vacía: "<<std::endl;}
else {
std::cout<<"Datos de la Cola: "<<std::endl;
while (aux){
imprimirMaleta(aux ->maleta);
aux = aux->siguiente;
}
}
}