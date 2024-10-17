#include <iostream>

using namespace std;

int main() 
{
	//variables//
	int numero,resultado=1;
	//imprimir enpnatalla el numero al cual se le indicara la potencia//
	cout<<"ingrese el numero: ";
	cin>>numero;
	//indicar a cuanto se va elevar tal numero//
	for(int i=1;i<=5;i++)
	{
		resultado*=numero;
	}
	//el resultado//
	cout<<"-------------------------------------------"<<endl;
	cout<<"El numero elevado a la quinta potencia es: "<<resultado<<endl;
	cout<<"-------------------------------------------"<<endl;		
}
