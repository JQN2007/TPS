#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
	int num1,num2,num3,num4,resultadoA,resultadoB;
	//CODIGO PARA SABER LA SUMA DE LOS PRIMEROS DOS NUMEROS Y EL PRODUCTO DEL TERCER Y CUARTO NUMERO//
    cout<<"ingrense su primer numero:"<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero:"<<endl;
    cin>>num2;
    cout<<"ingrises el tercer numero:"<<endl;
    cin>>num3;
    cout<<"ingrese el cuarto numero"<<endl;
    cin>>num4;
    //RESULTADO QUE APARECE EN PANTALLA//
    resultadoA=num1+num2;
    resultadoB=num3*num4;
    cout<<"la suma del primer  y segundo numero es:"<<endl<<resultadoA<<endl;
    cout<<"la  multiplicacion del tecer y cuarto numero es:"<<endl<<resultadoB<<endl;
    return 0;
    }
