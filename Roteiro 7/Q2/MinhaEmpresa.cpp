#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Consultor.h"
#include <string>

using namespace std;

int main(){

    Funcionario Fulano("27342364", "Ian", 23479);
    Consultor x("11221568", "Lucas", 100000);

    Fulano.setNome("Joao");
    Fulano.setSalario(3000);
    
    cout << "Nome: " << Fulano.getNome() << endl;
    cout << "Salario: " << Fulano.getSalario() << endl;

    cout << "Salario: " << x.getSalario() << endl;

    cout << "Salario: " << x.getSalario(50) << endl;



	return 0;
}
