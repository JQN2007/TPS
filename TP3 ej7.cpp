#include <iostream>

using namespace std;

int main() {
    int cantidad_impares = 0;
    int sumatoria_impares = 0;

    // Leer los primeros 300 n�meros enteros//
    for (int i = 1; i <= 300; ++i) {
        if (i % 2 != 0) {
            // Si el n�mero es impar, incrementar la cantidad y sumatoria//
            cantidad_impares++;
            sumatoria_impares += i;
        }
    }

    // Mostrar la cantidad de n�meros impares y su sumatoria//
    cout << "Cantidad de numeros impares: " << cantidad_impares << endl;
    cout << "Sumatoria de los numeros impares: " << sumatoria_impares << endl;

    return 0;
}

