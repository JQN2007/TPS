#include <iostream>

using namespace std;

int main() {
    // Inicializar el primer término de la serie//
    int termino = 11;

    // Imprimir los primeros 25 términos de la serie//
    for (int i = 0; i < 25; ++i) {
        cout << termino << " ";
        termino += 11; // Aumentar el término en 11 para obtener el siguiente término//
    }
cout<<endl;
    return 0;
}

