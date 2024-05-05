#include <iostream>

using namespace std;

#include <iostream>

int main() {
   // agregar variables de datos
   int opc, pasos;

    while (true) {

        cout << "--------MENÚ--------"<< endl;
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
                //Crear una nueva lista
                break;

            case 2:
                cout << "Lista: ";
                //Mostrar la lista existente
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
                // Eliminar lista
                cout << "Lista eliminada correctamente" << endl;
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