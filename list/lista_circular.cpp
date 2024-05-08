#include <iostream>
#include "lista_circular.hpp"
using namespace std;

struct nodo *cabeza;
struct nodo *cola;

void crearLista(int size)
{

    for (int i = 1; i <= size; i++)
    {
        nodo *newElement = new nodo();
        newElement->valor = i;

        if (cabeza == NULL)
        {
            cabeza = newElement;
            cola = newElement;
            cabeza->siguiente = cabeza;
            cabeza->anterior = cola;
        }
        else
        {
            cola->siguiente = newElement;
            newElement->anterior = cola;
            newElement->siguiente = cabeza;
            cola = newElement;
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

