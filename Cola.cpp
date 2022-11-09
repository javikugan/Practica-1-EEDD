#include "Cola.h“ 
#include "TMaleta.h"
Cola::Cola(){
    primero = NULL; ultimo = NULL;
    longitud = 0;
}
Cola::~Cola() { }

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