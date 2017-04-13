#include <iostream>
#include "Funcionario.h"
#include <string>

using namespace std;

Funcionario::Funcionario(){

}

Funcionario::Funcionario(string m, string n, float s){
	matricula = m;
	nome = n;
	salario = s;
}

void Funcionario::setMatricula(string m){
    matricula = m;
}
void Funcionario::setNome(string n){
    nome = n;
}

void Funcionario::setSalario(float s){
    salario = s;
}
