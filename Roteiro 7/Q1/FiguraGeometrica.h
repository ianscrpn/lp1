#include <iostream>
#include <string>
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

using namespace std;

class FiguraGeometrica{
	protected:
		string nome;
	public:
		float calcularArea();
		void setNome(string);
		string getNome(){return nome;}
};

#endif