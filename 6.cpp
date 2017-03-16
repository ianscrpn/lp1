#include <iostream>
#include <string>
#define TAM 2

using namespace std;


class Pagamento{

private:
    double valorPagamento;
    string nomeDoFuncionario;
public:

    void setValor(double v){valorPagamento = v;}
    void setNomeDoFuncionario(string t){nomeDoFuncionario = t;}
    double getValor(){return valorPagamento;}
    string getNomeDoFuncionario(){return nomeDoFuncionario;}

};

class ControleDePagamentos{

    Pagamento pagamentos[TAM];
    int n=0;

public:

    void setPagamentos(double v, string t){
        pagamentos[n].setValor(v);
        pagamentos[n].setNomeDoFuncionario(t);
        n++;
    }
    ControleDePagamentos(){

        /*for(int i=0;i<TAM;i++)
        {
            pagamentos[i].setValor(0.0);
            pagamentos[i].setNomeDoFuncionario("");
        }*/
    }
    ControleDePagamentos(double v, string t){
        setPagamentos(v,t);
    }
    double calculaTotalDePagamentos(){
        double total=0.0;
        int i;
        for(i=0;i<TAM;i++){
            total+=pagamentos[i].getValor();
        }
        return total;
    }

    bool existePagamentoParaFuncionario(string t){
        int i=0,c=0;
        while(i<TAM){
            if(t==pagamentos[i].getNomeDoFuncionario())
                {
                    c++;
                }
                i++;
        }
        if(c!=0)
            return true;
        else
            return false;
    }
};


int main(){

    ControleDePagamentos a;
    double v;
    string t;
    int i=0;

    for(i=0;i<TAM;i++)
    {
        cout<< "Digite o valor do pagamento: " << endl;
        cin >> v;
        cout << "Digite o nome do Funcionario: " << endl;
        cin >> t;

        a.setPagamentos(v,t);
    }


    cout<<a.calculaTotalDePagamentos()<<endl;
    cout<<"\nNome do funcionario a ser consultado: " << endl;
    cin>>t;
    if(a.existePagamentoParaFuncionario(t))
        cout<<"SIM"<<endl;
    else
        cout<<"NAO"<<endl;
	return 0;
}
