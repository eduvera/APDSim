// APDSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <array>
#include "APDSim.h"
#include "stack.h"
#include "node.h"
#include <list>

using namespace std;
string estadoInicial;
string estadoFinal;
string acepta;
string transicion;

void decompose(string trans)//TEST PURPOSES
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
	list<node*> tabla;

	return EXIT_SUCCESS;
}
