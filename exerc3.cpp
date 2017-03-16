#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int cont=0;

class Empregado{

    string nome,sobrenome;
    float salario;

public:
    Empregado(string,string,float);

    setNome(string n){nome = n;}
    setSobrenome(string sn){sobrenome = sn;}
    setSalario(float s){salario = s;}

    string getNome(){return nome;}
    string getSobrenome(){return sobrenome;}
    float getSalario(){return salario;}

    float SalarioAnual(){return salario*12;}
    float sAumento(){return SalarioAnual()*1.1;}

};

Empregado :: Empregado(string n,string sn,float s){
    if(s >= 0){
        setSalario(s);
    }else{
        cout << "salario invalido" << endl;
        cont++;
    }
    setNome(n);
    setSobrenome(sn);
}
int main()
{
    string n1,n2,sn1,sn2;
    float s1,s2;
    cout << "Digite o nome: " << endl;
    cin>>n1;
    cout << "Digite sobrenome: " << endl;
    cin>>sn1;
    cout << "Digite o salario: " << endl;
    cin>>s1;
    cout << "Digite o nome: " << endl;
    cin>>n2;
    cout << "Digite sobrenome: " << endl;
    cin>>sn2;
    cout << "Digite o salario: " << endl;
    cin>>s2;

    Empregado e1(n1,sn1,s1);
    Empregado e2(n2,sn2,s2);

    cout << "Nome: " << e1.getNome() << endl;
    cout << " " << e1.getSobrenome() << endl;
    if(cont == 0){
        cout << "Salario: " << e1.getSalario() << endl;
        cout << "Salario: " << e1.SalarioAnual() << endl;
        cout << "Salario: " << e1.sAumento() << endl;
    }


    cout << "Nome: " << e2.getNome() << endl;
    cout << " " << e2.getSobrenome() << endl;
    if(cont == 0){
        cout << "Salario: " << e2.getSalario() << endl;
        cout << "Salario: " << e2.SalarioAnual() << endl;
        cout << "Salario: " << e2.sAumento() << endl;
    }
}
