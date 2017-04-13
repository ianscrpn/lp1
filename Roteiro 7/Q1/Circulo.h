#include "FiguraGeometrica.h"
#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : protected FiguraGeometrica{
	private:
		float raio;
	public:
		void setRaio(float);
		float getRaio(){return raio;}
		float calcularArea();
		Circulo(float);
};

#endif