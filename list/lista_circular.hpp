void crearLista(int size);
void mostrarLista();
void eliminarLista();

struct  nodo
{
    int valor;
    nodo* siguiente;
    nodo* anterior;

} *cabeza, *cola;