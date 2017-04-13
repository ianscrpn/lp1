#include <iostream>
#include <string>
#include "Consultor.h"

using namespace std;

Consultor::Consultor(string m, string n, float s){
	setMatricula(m);
	setNome(n);
	setSalario(s);
}

float Consultor::getSalario()
{
	float x;
	x = Funcionario::getSalario() + 0.10*Funcionario::getSalario();
	setSalario(x);
    return x;
}

float Consultor::getSalario(float s){
	float x;
	x = Funcionario::getSalario() + (s/100)*Funcionario::getSalario();
	setSalario(x);
    return x;
}



