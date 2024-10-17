#include <iostream>

using namespace std;

int main() {
    int n;
    int numero;
    int pares = 0;
    int impares = 0;

    // Solicitar al usuario la cantidad de números a ingresar
    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> n;

    // Solicitar al usuario que ingrese los números y contar pares e impares
    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            // Si el número es divisible por 2, es par
            pares++;
        } else {
            // Si el número no es divisible por 2, es impar
            impares++;
        }
    }

    // Mostrar la cantidad de pares e impares
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}

