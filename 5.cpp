#include <iostream>
#include <string>
#define TAM 2

using namespace std;


class Despesa{

private:
    double valor;
    string tipoDeGasto;
public:

    void setValor(double v){valor = v;}
    void setTipoDeGasto(string t){tipoDeGasto = t;}
    double getValor(){return valor;}
    string getTipoDeGasto(){return tipoDeGasto;}

};

class ControleDeGastos{

    Despesa despesa[TAM];
    int n=0;

public:

    void setDespesas(double v, string t){
        despesa[n].setValor(v);
        despesa[n].setTipoDeGasto(t);
        n++;
    }
    ControleDeGastos(){

        /*for(int i=0;i<TAM;i++)
        {
            despesa[i].setValor(0.0);
            despesa[i].setTipoDeGasto("");
        }*/
    }
    ControleDeGastos(double v, string t){
        setDespesas(v,t);
    }
    double calculaTotalDeDespesas(){
        double total=0.0;
        int i;
        for(i=0;i<TAM;i++){
            total+=despesa[i].getValor();
        }
        return total;
    }

    bool existeDespesa(string t){
        int i=0,c=0;
        while(i<TAM){
            if(t==despesa[i].getTipoDeGasto())
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

    ControleDeGastos a;
    double v;
    string t;
    int i=0;

    for(i=0;i<TAM;i++)
    {
        cout<< "Digite o valor da despesa: " << endl;
        cin >> v;
        cout << "Digite o tipo de gasto: " << endl;
        cin >> t;

        a.setDespesas(v,t);
    }


    cout<<a.calculaTotalDeDespesas()<<endl;
    cin>>t;
    if(a.existeDespesa(t))
        cout<<"SIM"<<endl;
    else
        cout<<"NAO"<<endl;
	return 0;
}
