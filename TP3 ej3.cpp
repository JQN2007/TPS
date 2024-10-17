#include <iostream>
using namespace std;
int main()
{
    //Variables//
 	float num;
 	//ingresar el numero a dividir//
 	cout<<"ingrese el numero:"<<endl;
 	cin>>num;
 	//muestra en pantalla toda las divisiones hasta llegar a 0.01//
 	for (; num >= 0.01; num /= 2) 
	 {
        cout << "Resultado de la división: " << num << endl;
    }
    //el resultado//
 	cout << "El valor final es: " << num << endl;
	 }
