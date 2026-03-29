#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Mostrar los números del 1 al 5" << endl;
        cout << "2. Mostrar los números pares del 2 al 10" << endl;
        cout << "3. Ingresar un número y mostrar si es positivo o negativo" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Números del 1 al 5:" << endl;
                for(int i = 1; i <= 5; i++) {
                    cout << i << endl;
                }
                break;

            case 2:
                cout << "Números pares del 2 al 10:" << endl;
                for(int i = 2; i <= 10; i += 2) {
                    cout << i << endl;
                }
                break;

            case 3: {
                float numero;
                cout << "Ingresa un número: ";
                cin >> numero;

                if(numero > 0) {
                    cout << "El número es positivo" << endl;
                } else if(numero < 0) {
                    cout << "El número es negativo" << endl;
                } else {
                    cout << "El número es cero" << endl;
                }
                break;
            }

            case 4:3
                cout << "¡Gracias por usar el programa! Hasta luego." << endl;
                break;

            default:
                cout << "Opción no válida. Intenta de nuevo." << endl;
        }

    } while(opcion != 4);
         cout << "Rodrigo Adrian Barrios Monterroso" ;

    return 0;
}