#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"

using namespace std;

Circulo::Circulo(float r){

	raio = r;
}

float Circulo::calcularArea(){
	float area;
	area = (raio*raio) * 3.14;
	return area;
}
