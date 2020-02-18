//Biblioteca
//Author: Jordi Brasó

#include <math.h>
#include "BibliotecaEcu2grado.h"


int calcularResultados(double iA, double iB, double iC, double& X1, double& X2) {
	int RES;
	double discr;
	discr = iB * iB - 4 * iA * iC;
	if (discr < 0) {
		RES = 0;
	}
	else if (discr == 0) {
		RES = 1;
		X1 = -iB + sqrt(iB * iB - 4 * iA * iC) / (2 * iA);
		
	}
	else {
		RES = 2;
		X1 = (-iB + sqrt(iB * iB - 4 * iA * iC)) / (2 * iA);
		X2 = (-iB - sqrt(iB * iB - 4 * iA * iC)) / (2 * iA);
		
	}
	return RES;
}
