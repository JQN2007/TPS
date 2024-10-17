#include <iostream>
using namespace std;

int main(){
	//variables//
	int n;
	//ingresar un numero positivo//
	cout<<"Ingrese un numero entero positivo ";
	cin>> n;
	//mensaje de error en caso de no ser positivo o entero//
	if(n <= 0){
		cout<<"El numero debe ser entero positivo. "<<endl;
		return 1;
	}
	
	cout<<"   ";
	//imprime espacio par ala tabla//
	for(int i = 1; i <= n; ++i){
		cout<<i<<"   ";
	}
	cout<<endl;
	
	cout<<"  ";
	//imprime de forma horizontal para poder separar los numeros//
	for(int i = 1; i <= n; ++i){
		cout<<"----";
	}
	cout<<endl;
	//imprime de forma vertical para poder separar los numeros//
	for(int i = 1; i<=n; ++i){
		cout<<i<<" |";
		//imprime el resultado de la multiplicacion de j y i//
		for(int j = 1; j <= n; ++j){
			int resultado = i * j;
			cout<<" "<<resultado;
			//espacios e caso de que el numero ingresado sea mayor a un digito//
			if (resultado < 10){
				cout<<"  ";
				//espacios e caso de que el numero ingresado sea mayor a dos digito//
			}else if(resultado < 100){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
