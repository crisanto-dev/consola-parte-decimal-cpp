// parte-decimal-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Autor: Cristian Antonio Escalante Hernandez
// Github: crisanto-dev
// Problema: Escriba un programa que entregue la parte decimal de un número real ingresado por el usuario.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout << "Autor: Cristian Antonio Escalante Hernadez\n";
	cout << "Github: crisanto-dev\n";
	cout << "Problema: Escriba un programa que entregue la parte decimal de un número real ingresado por el usuario.\n";
	
	double numero, decimales;

	bool bandera = true;
	do
	{	
		cout << "Ingrese un numero diferente de 0: ";
		cin >> numero;
		if (numero != 0)
		{
			bandera = false;
		}
		else {
			cout << "Vuelva a intentarlo\n \n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (bandera);
	if (numero < 0) {
		numero *= -1;
	}
	decimales = numero - floor(numero);

	printf("El numero decimal de %f es %f \n", numero, decimales);
	cout << "Fin del programa \n";
	system("PAUSE");

	return 0;
}
