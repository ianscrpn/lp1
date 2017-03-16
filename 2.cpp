#include <iostream>
#include <string>

using namespace std;
class Invoice{

private:

    int num;
    string desc;
    int qtd;
    float preco;

public:

    void setNum(int n){num = n;}
    void setDesc(string d){desc = d;}
    void setQtd(int q){qtd = q;}
    void setPreco(float p){preco = p;}
    int getNum(){return num;}
    string getDesc(){return desc;}
    int getQtd(){return qtd;}
    float getPreco(){return preco;}

    Invoice(int n, string d, int q, float p){

        setNum(n);
        if(q < 0){
            setQtd(0);
        }else{
            setQtd(q);
        }
        setDesc(d);
        if(p < 0){
            setPreco(0.0);
        }else{
            setPreco(p);
        }
    }

    float getInvoiceAmount(){
        return qtd * preco;
    }
};

int main(){

        Invoice a(3, "Produto X-24T",4, 5.30);
       /* a.setNum(3);
        a.setQtd(4);
        a.setPreco(5.5);
        a.setDesc("Produto X-24T") ;*/

        cout << "Numero do produto: " << a.getNum() << ", Qtd: " << a.getQtd() << ", Preco: " << a.getPreco() <<
        "\nDescricao: " << a.getDesc() << "\nValor total: " << a.getInvoiceAmount();

	return 0;
}
