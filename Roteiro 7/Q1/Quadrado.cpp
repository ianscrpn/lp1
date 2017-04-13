#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"

using namespace std;

Quadrado::Quadrado(float l){

	lado = l;
}

float Quadrado::calcularArea(){
	float area;
	area = lado*lado;
}

