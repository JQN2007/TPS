#include <iostream>

using namespace std;

int main()
 {
 	//variables//
    int num = 0;
    int suma = 0;
    int maximo=0;
	float minimo=999999999999999999;
    int contador = 0; 
    float promedio;

    // Solicitar la carga de los numeros//
    cout << "Ingrese 10 numeros:" << endl;
    for (int i=0; i < 10; i++)
{

    cout<<"valor"<<i+1<<"= ";
    cin>>num;
    suma += num;


if(num>maximo)
{
	maximo=num;
}
if(num<minimo){

minimo=num;
	
}
    }
    // Calcular el promedio
    promedio = suma / 10;

    // Mostrar los resultados
    cout<<"-----------------------"<<endl;
    cout << "Suma de los numeros: " << suma << endl;
    cout << "Valor máximo: " << maximo << endl;
    cout << "Valor mínimo: " << minimo << endl;
    cout << "Promedio: " << promedio << endl;
    cout<<"-----------------------"<<endl;
    return 0;
}

