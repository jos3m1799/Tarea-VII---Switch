#include <iostream>
using namespace std;

int main() {

    // Nombre del estudiante
    cout << "============================\n";
    cout << "Nombre del estudiante: Jose Argueta\n";
    cout << "============================\n\n";

    int opcion;
    
    // Variables globales del sistema
    int numero;
    int contador = 0;
    int suma = 0;

    int pares = 0;
    int impares = 0;

    do {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Registrar numeros\n";
        cout << "2. Mostrar estadisticas\n";
        cout << "3. Clasificar numeros\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1: {
                char continuar;

                do {
                    cout << "Ingrese un numero (no negativo): ";
                    cin >> numero;

                    // Validación con continue
                    if (numero < 0) {
                        cout << "Error: no se permiten numeros negativos.\n";
                        continue;
                    }

                    // Acumuladores
                    contador++;
                    suma += numero;

                    // Clasificación inmediata (uso de && y ||)
                    if (numero % 2 == 0 && numero >= 0) {
                        pares++;
                    } else if (numero % 2 != 0 || numero > 0) {
                        impares++;
                    }

                    cout << "Desea ingresar otro numero? (s/n): ";
                    cin >> continuar;

                } while (continuar == 's' || continuar == 'S');

                break;
            }

            case 2:
                if (contador == 0) {
                    cout << "No hay datos disponibles.\n";
                } else {
                    cout << "\nTotal de numeros: " << contador << endl;
                    cout << "Suma total: " << suma << endl;
                    cout << "Promedio: " << (float)suma / contador << endl;
                }
                break;

            case 3:
                if (contador == 0) {
                    cout << "No hay numeros para clasificar.\n";
                } else {
                    cout << "\nNumeros pares: " << pares << endl;
                    cout << "Numeros impares: " << impares << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el sistema.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 4);

    return 0;
}