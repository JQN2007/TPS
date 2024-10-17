#include<iostream>
using namespace std;

int main()
{
	//variables//
	int tp3;
	//imprime en pantalla//
	cout << "buenas profe e aqui mis trbalhos " << endl;
	cout << "---------------------------------" << endl;
	cout << "ingrese que trabajo decida aprobar :D: " << endl;
	cout << "---------------------------------" << endl;
	cin >> tp3;
	//para elegir opciones//
	switch(tp3)
	{
		case 1:
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_1°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
		{
			// VARIABLES //
			int aprobados = 0;
			int reprobados = 0;
			int nota;
			
			// INTRODUCIR LA NOTA PARA SABER CUANTOS APROBADOS Y REPROBADOS HAY //
			for(int f = 0; f <= 9; f++)
			{
				cout << "introduzca las notas de los alumnos" << endl;
				cin >> nota;
				
				// EN CASO DE NOTA MAYOR QUE 7 //
				if(nota >= 7)
				{	
					aprobados = aprobados + 1;
				}
				// EN CASO DE NOTA MENOR QUE 7 //
				else
				{	
					reprobados = reprobados + 1;
				}
			}
			
			// MENSAJE PARA SABER CANTIDAD DE APROBADOS Y REPROBADOS //
			cout << "Cantidad de aprobados: " << aprobados << endl;
			cout << "Cantidad de reprobados: " << reprobados << endl;
			
		}
		break; // Agregado para indicar el final del primer caso
		
		case 2:
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_2°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
		{
			
			// VARIABLES //
			int num = 0;
			int suma = 0;
			int maximo = 0;
			float minimo = 999999999999999999; // Se puede utilizar un valor más razonable
			float promedio;

			// Solicitar la carga de los números //
			cout << "Ingrese 10 números:" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << "valor " << i + 1 << " = ";
				cin >> num;
				suma += num;
                //en caso de que el numero sea mayor a la variable maximo//
				if(num > maximo)
				{
					maximo = num;
				}
				//en caso de que el numero sea menor a la variable minimo//
				if(num < minimo)
				{
					minimo = num;
				}
			}

			// Calcular el promedio
			promedio = suma / 10;

			// Mostrar los resultados
			cout << "-----------------------" << endl;
			cout << "Suma de los números: " << suma << endl;
			cout << "Valor máximo: " << maximo << endl;
			cout << "Valor mínimo: " << minimo << endl;
			cout << "Promedio: " << promedio << endl;
			cout << "-----------------------" << endl;
			return 0;
		}
		break; // Agregado para indicar el final del segundo caso
	
	case 3:
		    cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_3°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
		{
    //Variables//
 	float num;
 	//ingresar el numero a dividir//
 	cout<<"ingrese el numero:"<<endl;
 	cin>>num;
 	//muestra en pantalla toda las divisiones hasta llegar a 0.01//
 	for (; num >= 0.01; num /= 2) 
	 {
        cout << "Resultado de la division: " << num << endl;
    }
    //el resultado//
 	cout << "El valor final es: " << num << endl;
	 }
	break;
    
case 4:
	        cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_4°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	{
    // Inicializar el primer término de la serie//
    int termino = 11;

    // Imprimir los primeros 25 términos de la serie//
    for (int i = 0; i < 25; ++i) {
        cout << termino << " ";
        termino += 11; // Aumentar el término en 11 para obtener el siguiente término//
    }
cout<<endl;
}
break;

case 5:
	        cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_5°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	{
		//variables//
    int n;
    int numero;
    int pares = 0;
    int impares = 0;

    // Solicitar al usuario la cantidad de números a ingresar
    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> n;

    // Solicitar al usuario que ingrese los números y contar pares e impares
    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            // Si el número es divisible por 2, es par
            pares++;
        } else {
            // Si el número no es divisible por 2, es impar
            impares++;
        }
    }

    // Mostrar la cantidad de pares e impares
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;
}
break;
case 6:
            cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_6°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;	
	{
	//variables//
	int num;
	int suma=0;
	//indicar cuantas veces se va asumar el numero//
	 for(num=0;num<=100;num++)
	 {
	 	suma+=num;
	 }
	 //el resultado de sumar del 1 hasta el 100//
	 cout<<"el resultado de la suma es: "<<suma<<endl;
}
break;

case 7:
	        cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_7°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	{
		//variables//
    int cantidad_impares = 0;
    int sumatoria_impares = 0;

    // Leer los primeros 300 números enteros//
    for (int i = 1; i <= 300; ++i) {
        if (i % 2 != 0) {
            // Si el número es impar, incrementar la cantidad y sumatoria//
            cantidad_impares++;
            sumatoria_impares += i;
        }
    }

    // Mostrar la cantidad de números impares y su sumatoria//
    cout << "Cantidad de numeros impares: " << cantidad_impares << endl;
    cout << "Sumatoria de los numeros impares: " << sumatoria_impares << endl;

    return 0;
}
break;

case 8:
	        cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<"°°TRBAJO PRACTICO N_8°°"<<endl;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
{
	//variables//
	int numero,resultado=1;
	//imprimir enpnatalla el numero al cual se le indicara la potencia//
	cout<<"ingrese el numero: ";
	cin>>numero;
	//indicar a cuanto se va elevar tal numero//
	for(int i=1;i<=5;i++)
	{
		resultado*=numero;
	}
	//el resultado//
	cout<<"-------------------------------------------"<<endl;
	cout<<"El numero elevado a la quinta potencia es: "<<resultado<<endl;
	cout<<"-------------------------------------------"<<endl;		
}
}
}

