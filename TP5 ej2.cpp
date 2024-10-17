#include <iostream>

using namespace std;
int main(){
	//variables//
	int n;
	//ingresar un numero positivo/
	cout<<"Ingrese un numero entero positivo:";
	cin>>n;
	//cartel de error en caso de que el numero no sea positivo ni entero//
	if(n <= 0){
		cout<<"El numero debe ser entero positivo"<<endl;
		return 1;
	}
	//sirve para imprimir columnas//
	for(int i = 0; i <= n; ++i){
		//para imprimir filas//
		for(int j = 0; j <= n; ++j){
			if(j < i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
		}
		return 0;
	}
