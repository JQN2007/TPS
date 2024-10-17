#include <iostream>
using namespace std;

int main() {
    float A, B, C;

    // Leer los tres valores//
    cout << "Ingrese tres valores diferentes para A, B y C: ";
    cin >> A >> B >> C;

    // Verificar si los valores son distintos//
    if (A != B && A != C && B != C) {
        // Encontrar el mayor y el menor//
        float mayor, menor;
        if (A > B && A > C)
            mayor = A;
        else if (B > A && B > C)
            mayor = B;
        else
            mayor = C;

        if (A < B && A < C)
            menor = A;
        else if (B < A && B < C)
            menor = B;
        else
            menor = C;

        // Imprimir resultados//
        cout << "El mayor valor es: " << mayor << endl;
        cout << "El menor valor es: " << menor << endl;
    } else {
        cout << "Error: Los valores deben ser distintos. Inténtalo de nuevo." << endl;
    }

    return 0;
}
