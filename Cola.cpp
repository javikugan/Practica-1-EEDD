#include "Cola.h“ 
#include "TMaleta.h"
Cola::Cola(){
    primero = NULL; ultimo = NULL;
    longitud = 0;
}
Cola::~Cola() { }
void Cola::encolar(TMaleta maleta)
{
	Nodo* nodo = new Nodo();
	nodo->paquete = paquete;
	if (lastNodo == nullptr) {
		lastNodo = nodo;
		firstNodo = nodo;
	}
	else {
		lastNodo->next = nodo;
		nodo->previous = lastNodo;
		lastNodo = nodo;
	}
}
Paquete Cola::pop()
{
	Nodo* nodo = firstNodo;
	firstNodo = firstNodo->next;

	return nodo->paquete;
}
int Cola::length()
{
	int contador = 0;
	Nodo* nodo = firstNodo;

	while (nodo != nullptr) {
		nodo = nodo->next;
		contador++;
	}
	return contador;
}
bool Cola::buscarPaquete(string idNIF) {
	bool encontrado = false;
	Nodo* nodo = firstNodo;

	while (nodo != nullptr) {
		if (nodo->paquete.id == idNIF || nodo->paquete.NIF == idNIF) {
			encontrado = true;
		}
		nodo = nodo->next;
	}
	return encontrado;
}
void Cola::eliminarMaleta(string idNIF) {
	int longitud = length();
	for (int i = 0; i <= longitud - 1; i++) {
		if ((firstNodo->paquete.id == idNIF || firstNodo->paquete.NIF == idNIF)) {
			pop();
		}
		else {
			push(pop());
		}
	}
}
Nodo* Cola::topNodo() {
	return firstNodo;
}

void Cola::encolar(TMaleta maleta){
    NodoCola *nuevo_nodo = new
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
        TMaleta = primero->maleta;
        NodoCola *aux = primero;
        
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
    longitud--;
    return maleta;
    }
}

TMaleta Cola::inicio(){
    if(!es_vacia()){
        return primero->maleta;
    }
}

TMaleta Cola::fin(){
    if(!es_vacia()){
        return ultimo->maleta;
        }
}

int Cola::get_longitud(){
    return longitud;
    }

bool Cola::es_vacia(){
    return ((primero == NULL) && (ultimo == NULL));
}

void Cola::mostrarCola()
//No es correcto, la cola solo puede verse mostrando
el primero y desencolando, se implementa para
comprobar
código facilmente.
{
NodoCola *aux = primero;
if (es_vacia()) {cout<<"Cola Vacía: "<<endl;}
else {
cout<<"Datos de la Cola: "<<endl;
while (aux){
cout << aux->elemento<<endl;
aux = aux->siguiente;
}
}
}