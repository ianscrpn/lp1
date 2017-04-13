#include "FiguraGeometrica.h"
#include <string>
#ifndef QUADRADO_H_
#define QUADRADO_H_

using namespace std;

class Quadrado : protected FiguraGeometrica{
	private:
		float lado;
	public:
		void setLado(float);
		float getLado(){return lado;}
		float calcularArea();
		Quadrado(float);

};

#endif