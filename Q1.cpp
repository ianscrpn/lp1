#include <iostream>

using namespace std;

class Data{
private:
    int dia;
    int mes;
    int ano;
public:
    Data(int, int, int);

    setDia(int d){dia=d;}
    setMes(int m){mes=m;}
    setAno(int a){ano=a;}

    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAno(){return ano;}

    void avancarDia();

};

Data::Data(int d, int m, int a)
{
    while(1)
    {
        if(m<=0||m>=13){
            cout << "mes invalido"<<endl;
            cin >> m;}
        else{
            break;
        }
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
    while(1)
    {
        if(d<=0||d>=32){
            cout << "dia invalido"<<endl;
            cin >> d;}
        else{
            break;
        }
    }
    }
    if(m==2){
    while(1)
    {
        if(d<=0||d>=29){
            cout << "dia invalido"<<endl;
            cin >> d;}
        else{
            break;
        }
    }
    }
    else{
            while(1)
    {
        if(d<=0||d>=31){
            cout << "dia invalido"<<endl;
            cin >> d;}
        else{
            break;
        }
    }
    }

    while(1)
    {
        if(a<0){
            cout << "ano invalido"<<endl;
            cin >> a;}
        else{
            break;
        }
    }
    setDia(d);
    setMes(m);
    setAno(a);
}
void Data::avancarDia(void){

    int d=getDia(), m=getMes(), a=getAno();

    if(m==1||m==3||m==5||m==7||m==8||m==10){
        if(d==31)
        {
            d=1;
            m++;
        }
        else
            d++;
    }
    else{
        if(m==12)
        {
            if(d==31)
            {
                d=1;
                m=1;
                a++;
            }
            else
                d++;
        }
        else
        {
            if(m!=2){
                if(d==30)
                {
                    d=1;
                    m++;
                }
                else
                    d++;
        }
            else{
                if(d==28)
                {
                    d=1;
                    m++;
                }
                else
                    d++;
        }
        }
    }
    setDia(d);
    setMes(m);
    setAno(a);
}

int main()
{
    Data hoje(32, 4, 2017);

    hoje.avancarDia();

    cout << hoje.getDia() << "/" << hoje.getMes() << "/" << hoje.getAno() << endl;
    return 0;
}
