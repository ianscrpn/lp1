#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main(){
	Triangulo t(4,6);
	Quadrado q(8);
	Circulo c(2);

	cout<<"Area do Triangulo: " << t.calcularArea() << endl;
	cout<<"Area do Quadrado: " << q.calcularArea() << endl;
	cout<<"Area do Circulo: " << c.calcularArea() << endl;

	return 0;
}