#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
	float num1,num2,num3,promedio;
	//CODIGO PARA SABER EL PROMEDIO DE CALIFICACION//
cout<<"ingrese el primer numero:"<<endl;
cin>>num1;
cout<<"ingrese el segundo numero:"<<endl;
cin>>num2;
cout<<"ingrese el tercer numero:"<<endl;
cin>>num3;
//RESULTADO DE NOTAS//
promedio=num1+num2+num3/3;
//EN CASO DE PROMEDIO MAYOR O IGUAL A 7//
if(promedio>=7)
{
	cout<<"Calificacion final:"<<endl<<"TEA";
}
//EN CASO DE QUE EL PROMEDIO SE MAYOR O IGUAL A 4 Y MENOR QUE 7//
 if(promedio>=4 &&  promedio<7)
{
	cout<<"Calificaoion final:"<<endl<<"TEP";
}
//EN CASO DE QUE PROMEDIO SEA MENOR A 7//
else if(promedio<4)
{
	cout<<"Calificacion final:"<<endl<<"TED";
}
return 0;
}
