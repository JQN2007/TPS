#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
int num,resultado;
//CODIGO PARA SABER SI ES PAR O IMPAR//
cout<<"ingrese numero"<<endl;
cin>>num;
//CUENTA PARA SABERLO//
resultado=num%2;
//SI ES PAR//
if (resultado ==0)
{
cout<<"ES PAR "<<endl;
}
//SI ES IMPAR//
else 
{
cout<<"ES IMPAR"<<endl;
}
return 0;
}
