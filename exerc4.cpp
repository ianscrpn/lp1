#include <iostream>
#include <string>

using namespace std;

class Pessoas{
private:
    string nome;
    int telefone, idade;
public:
    Pessoas(string);
    Pessoas(string,int,int);
    setNome(string n){nome = n;}
    setTelefone(int t){telefone = t;}
    setIdade(int id){idade = id;}
    string getNome(){return nome;}
    int getTelefone(){return telefone;}
    int getIdade(){return idade;}

};
Pessoas::Pessoas(string n){
    setNome(n);
    cout << "Nome(string alone): " << getNome() << endl;
}
Pessoas::Pessoas(string n,int tel,int id){
    setNome(n);
    setTelefone(tel);
    setIdade(id);
}
int main()
{
    string n1,n2,n3;
    int tel1,tel2;
    int id1,id2;

    cout << "Digite o nome: " << endl;
    cin >> n1;
    cout << "Digite o telefone: " << endl;
    cin >> tel1;
    cout << "Digite a idade: " << endl;
    cin >> id1;
    cout << "Digite o nome: " << endl;
    cin >> n2;
    cout << "Digite o telefone: " << endl;
    cin >> tel2;
    cout << "Digite a idade: " << endl;
    cin >> id2;
    cout << "Digite o nome: " << endl;
    cin >> n3;

    Pessoas p1(n1,tel1,id1);
    Pessoas p2(n2,tel2,id2);
    Pessoas p3(n3);

    cout << "Nome: " << p1.getNome() << " Telefone: " << p1.getTelefone() << " Idade: " << p1.getIdade() << endl;
    cout << "Nome: " << p2.getNome() << " Telefone: " << p2.getTelefone() << " Idade: " << p2.getIdade() << endl;

}

