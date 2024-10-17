#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
float num1,num2;
//CODIGO PARA SBER NUMERO MAYOR,MENOR O IGUAL//
cout<<"ingrese el primer numero:"<<endl;
cin>>num1;
cout<<"ingrese el segundo numero:"<<endl;
cin>>num2;
//EN CASO DE NUMERO1 MAYOR A NUMERO2//
if(num1>num2)
{
	cout<<"el numero mayor es:"<<endl<<num1<<endl;
	cout<<"el numero menor es:"<<endl<<num2<<endl;
}
//EN CASO DE QUE AMBOS NUMEROS SEAN IGUALES//
else if(num1==num2)
 {
 	cout<<"titan,los numeros son iguales"<<endl;
 }
 //EN CASO DE QUE NUMERO1 MENOR A NUMERO2//
 if(num1<num2)
{
	cout<<"el numero mayor es:"<<endl<<num2<<endl;
	cout<<"el numero menor es:"<<endl<<num1<<endl;
}
return 0;
}


