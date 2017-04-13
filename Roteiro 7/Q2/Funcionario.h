#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario{

private:
	string matricula, nome;
	float salario;

public:
	void setMatricula(string);
	void setNome(string);
	void setSalario(float);
	string getMatricula(){return matricula;}
	string getNome(){return nome;}
	float getSalario(){return salario;}
	Funcionario();
	Funcionario(string, string, float);

};

#endif
