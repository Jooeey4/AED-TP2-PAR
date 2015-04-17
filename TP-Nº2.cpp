/*
 *  Autor: Mato, Joan Uriel
 *	Curso: K1091
 *	Descripción: Programa TP Nº 2 "Numeros Pares"
 */
 
#include <iostream>

int main() {
	int num;
	std::cout << "Ingrese un numero: ";
	std::cin >> num;
	if ((num%2)==0)
	{
		std::cout << "\nEl numero es par";
	}
	else
	{
		std::cout << "\nEl numero es impar";
	}
}
