#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"
#include <string>

using namespace std;

class Consultor : public Funcionario{
	
	public:
		Consultor();
	    Consultor(string, string, float);
	    float getSalario();
	    float getSalario(float);
};

#endif
