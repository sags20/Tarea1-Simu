#include <iostream>
#include "list/lista_circular.hpp"
using namespace std;

int size;

int main() {
   // agregar variables de datos
   int opc, pasos;

    while (true) {

        cout << "\n--------MENÚ--------"<< endl;
        cout << "1.Nueva lista"<< endl;
        cout << "2.Mostrar lista"<< endl;
        cout << "3.Ejecutar Algoritmo"<< endl;
        cout << "4.Ejecutar un número específico de pasos"<< endl;
        cout << "5.Eliminar lista"<< endl;
        cout << "0.Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opc;

        switch (opc) {
            case 1:
                cout << "Ingrese el tamaño de la lista.\n";
                cin >> size; 
                if(size <= 0){
                    cout << "El tamaño no puede ser menor o igual a cero, intente de nuevo.";
                }
                crearLista(size);
                break;

            case 2:
                mostrarLista();
                break;

            case 3:
                // Ejecutar el algoritmo completo
                break;

            case 4:
                cout << "Ingrese el número de pasos a ejecutar: ";
                cin >> pasos;
                // Ejecutar número específico de pasos
                break;

            case 5:
                eliminarLista();
                cout << "Lista eliminada correctamente." << endl;
                break;

            case 0:
                // Finalizar el programa
                return 0;

            default:
                cout << "Opción no válida" << endl;
                break;
        }
    }

    return 0;
}