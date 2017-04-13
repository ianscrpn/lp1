#include "FiguraGeometrica.h"
#ifndef TRIANGULO_H
#define TRIAGUNLO_H

class Triangulo : protected FiguraGeometrica{
	private:
		float base, altura;
	public:
		void setBase(float);
		void setAltura(float);
		float getBase(){return base;}
		float getAltura(){return altura;}
		float calcularArea();
		Triangulo(float, float);
};

#endif