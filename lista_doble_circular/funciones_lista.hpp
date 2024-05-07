#include <iostream>
#include "nodo.hpp"
using namespace std;

void crearLista(int tamaño)
{

    for (int i = 1; i <= tamaño; i++)
    {
        nodo *nuevoElemento = new nodo();
        nuevoElemento->valor = i;

        if (cabeza == NULL)
        {
            cabeza = nuevoElemento;
            cola = nuevoElemento;
            cabeza->siguiente = cabeza;
            cabeza->anterior = cola;
        }
        else
        {
            cola->siguiente = nuevoElemento;
            nuevoElemento->anterior = cola;
            nuevoElemento->siguiente = cabeza;
            cola = nuevoElemento;
            cabeza->anterior = cola;
        }
    }
}

void mostrarLista()
{
    nodo *elementoActual = new nodo();
    elementoActual = cabeza;
    if (cabeza != NULL)
    {
        cout << "Mostrando lista...\n\n";
        do
        {
            cout << "  " << elementoActual->valor;
            elementoActual = elementoActual->siguiente;
        } while (elementoActual != cabeza);
    }
    else
    {
        cout << "\nLa lista esta vacia.";
    }
}

void eliminarLista(){
    if(cabeza == NULL){
        return;
    }

    nodo* nodoActual = cabeza;
    do {
        nodo* siguiente = nodoActual->siguiente;
        delete nodoActual;
        nodoActual-> siguiente;
    }while( nodoActual != cabeza);

    cabeza = nullptr;
}

