#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
float num1,num2,resultadoA,resultadoB;
//CODIGO PARA SUMAR/RESTAR LOS NUMEROS O PARA MULTIPLICAR/DIVIDIR// 
cout<<"ingrese el primer numero:"<<endl;
cin>>num1;
cout<<"ingrese el segundo numero:"<<endl;
cin>>num2;
//EN CASO DE NUMERO1 MAYOR A NUMERO2//
if(num1>num2)
{
	//RESULTADO SUMADO Y RESTADO//
	resultadoA=num1+num2;
	resultadoB=num1-num2;
	cout<<"el resultado de su suma es:"<<endl<<resultadoA<<endl;
	cout<<"el resultado de su resta es:"<<endl<<resultadoB<<endl;
}
//EN CASO DE NUMERO2 MAYOR A NUMERO1//
if(num1<num2)
{
	//RESULTADO MULTIPLICADO Y DIVIDIDO
	resultadoA=num1*num2;
	resultadoB=num2/num1;
	cout<<"El resultado de la multiplicacion es:"<<endl<<resultadoA<<endl;
	cout<<"El resultado de la division es:"<<endl<<resultadoB<<endl;
}
return 0;
}

