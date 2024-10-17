#include<iostream>
using namespace std;
int main()
{
	//variables//
	int cantidad_vendedores;
	//para infgresar la cantidad de vendedores//
	cout<<"Iingrese la cantidad de vendedores: "<<endl;
	cin>>cantidad_vendedores;
	//aqui se usa esta variable para poder guardar en una misma sentencia definidas veces//
	string nombres[cantidad_vendedores];
	int ventas[cantidad_vendedores];
	//hace que aparezca en pantalla cada vendedor y sus ventas, partes de guardarlas en su variable//
	for(int i = 0; i < cantidad_vendedores; ++i)
	{
		cout<<"vendedor"<<i + 1<<": "<<endl;
		cout<<"Iingrese el nombre: ";
		cin>>nombres[i];
		cout<<"Iingrese la cantidad de ventas: "<<endl;
		cin>>ventas[i];
	}
	//variable de las sumas de las ventas//
	int suma_ventas = 0;
	
	//imprime los nombres y las ventas que nosotros ingresamos//
	for(int i = 0; i < cantidad_vendedores; ++i)
	{
		cout<<nombres[i]<<": "<<ventas[i]<<" Ventas"<<endl;
		suma_ventas+=ventas[i];
	}
	//imprime el resultado final de las ventas//
	cout<<"total de ventas: "<<suma_ventas<<" Ventas"<<endl;
}
