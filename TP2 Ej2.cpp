#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
int num;
//CODIGO PARA SABER SI ES POSITIVO,0 O NEGATIVO//
cout<<"ingrese un numero:"<<endl;
cin>>num;
//EN CASO DE NUMERO MAYOR A 0//
if (num>0)
{		
	cout<<"El numero es positivo "<<endl;
}
//EN CASO DE NUMERO IGUAL A 0//
else if (num==0)
{
	cout<<"El numero no cambio "<<endl;	
}
//EN CASO DE NUMERO MENOR QUE 0//
if (num<0)
{
    cout<<"El numero es negativo "<<endl;
}
return 0;
}


