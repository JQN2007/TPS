#include<iostream>
using namespace std;
int main()
{
	//variables//
	int n;
	int resultado=1;
	//ingresar el numero entero//
	cout<<"ingrese el numero ENTERO que desee obtener su factorial: "<<endl;
	cin>>n; 
	//en caso de que no sea entero//
	if(n<0){
		cout<<"Tiene que ser positivo y entero."<<endl;
	resultado=0;
    }
    //en caso de sea igual a cero//
    else if (n==0)
    {
    	cout<<"Haceme trabjar porfavor, pone un numero"<<endl;
    	return 0; 
	}
    else
    {
	//hace la cuenta para multiplicar el numero hasta el numero inghresado por usted//
	for(int i=1;i<=n;i++)
	{
		resultado=resultado*i;
	}
}
//muestra en pantalla el resultado//
	cout<<"El resultado final es: "<<resultado<<endl;	
}
