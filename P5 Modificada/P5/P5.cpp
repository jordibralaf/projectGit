#include <iostream>
#include "BibliotecaEcu2grado.h"

//Author: Jordi Brasó

using namespace std;
double A, B, C;
double X1, X2;
int numSols;


void pedirCoeficientes(double&,double&,double&);
void presentarResultados(double, double, double, double, double, int);

int main() {
	pedirCoeficientes(A,B,C);
	numSols=calcularResultados(A, B, C, X1, X2);
	presentarResultados(A, B, C, X1, X2, numSols);
}

void pedirCoeficientes(double& oA, double& oB, double& oC) {
	while (A == 0) {
		cout << "Introduzca el valor del coeficiente A:";
		cin >> oA;
	}
	cout << "Introduzca el valor del coeficiente B:";
	cin >> oB;
	cout << "Introduzca el valor del coeficiente C:";
	cin >> oC;
}

void presentarResultados(double iA, double iB, double iC, double iX1, double iX2,int inumSols) {
	if (inumSols == 0) {
		cout << "La ecuacion no tiene solucion: A=" << iA << " B=" << iB << " C=" << iC << endl;
	}
	else if (inumSols == 1) {

		cout << inumSols << " solucion: X1=" << iX1 << " A=" << iA << " B=" << iB << " C=" << iC << endl;
	}
	else {
		cout << inumSols << " soluciones: X1=" << iX1 << " X2=" << iX2 << " A=" << iA << " B=" << iB << " C=" << iC << endl;
	}

	cout << "El numero de soluciones es " << inumSols << endl;

	system("pause");
}