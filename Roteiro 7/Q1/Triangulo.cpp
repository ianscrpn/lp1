#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo(float b, float a){

	base = b;
	altura = a;
}

float Triangulo::calcularArea(){
	float area;
	area = (base*altura)/2;
}


