#include <iostream>

using namespace std;

int main() {
    // Inicializar el primer t�rmino de la serie//
    int termino = 11;

    // Imprimir los primeros 25 t�rminos de la serie//
    for (int i = 0; i < 25; ++i) {
        cout << termino << " ";
        termino += 11; // Aumentar el t�rmino en 11 para obtener el siguiente t�rmino//
    }
cout<<endl;
    return 0;
}

