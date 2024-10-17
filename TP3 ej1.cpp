#include<iostream>
using namespace std;
int main()
{
	//VARIABLES//
	int aprobados=0;
	int reprobados=0;
	int nota;
	//INTRODUCIR LA NOTA PARA SABER CUANTOS APROBADOS Y REPROBADOS HAY//
	for(int f=0;f<=9;f++)
	{
	cout<<"introduzca la nota del alumno"<<endl;
	cin>>nota;
	//EN CASO DE NOTA MAYOR QUE 7//
	if(nota>=7)
	{	
	aprobados=aprobados+1;
	}
	//EN CASO DE NOTA MENOR QUE 7//
	else
	{	
		reprobados=reprobados+1;
	}
	}
	//MENSAJE PARA SABER CANTIDAD DE APROBADOS Y REPROBADOS//
cout<<"Cantidad de aprobados: "<<aprobados<<endl;
cout<<"Cantidad de reprobados: "<<reprobados<<endl;	
	return 0;
	
}
