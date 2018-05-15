// APDSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "APDSim.h"
#include "stack.h"
#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
string estadoInicial;
string estadoFinal;
string acepta;
string transicion;

void decompose(string trans)
{
	string e_ori = trans.substr(2, 2);
	string letra = trans.substr(5, 1);
	string stackLetter = trans.substr(7, 1);
	cout << e_ori + " " + letra + " " + stackLetter << endl;
}

int main()
{
	cout << "Ingrese estado inicial: ";
	cin >> estadoInicial;

	do
	{
		cout << "Stack Vacio o Estado final? (stack/final): ";
		cin >> acepta;
	} while (acepta.compare("stack") && acepta.compare("final"));

	if (!acepta.compare("final"))
	{
		cout << "Estado Final: ";
		cin >> estadoFinal;	
	}
	
		
	while (transicion.compare("fin"))
	{
		cout << "Transiciones (escriba \"fin\" para finalizar): ";
		cin >> transicion;
	}

	stack *pila = new stack("R");

	return EXIT_SUCCESS;
}
