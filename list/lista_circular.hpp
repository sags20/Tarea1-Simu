#ifndef LISTA_CIRCULAR_HPP
#define LISTA_CIRCULAR_HPP

void crearLista(int size);
void mostrarLista();
void eliminarLista();

struct  nodo
{
    int valor;
    nodo* siguiente;
    nodo* anterior;
};

#endif