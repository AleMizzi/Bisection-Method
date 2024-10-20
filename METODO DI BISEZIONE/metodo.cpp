#include <iostream>
using namespace std;

double funzione(double x) {
	return pow(2, x) - 4;
}

double eseguimetodo(double a, double b) {

	double A = 0, B = 0, m = 0;

	while (1) {
		A = funzione(a);
		B = funzione(b);
	   
		m = (A + B) / 2; //punto medio nonche la nostra c

		if ((funzione(m)) * A > 0) {
			B = m;
		}
		else {
			A = m;
		}
	}
	return m;
}

int controllo(double a, double b) {
	double A, B;

	if (A * B >= 0) {
		return 1;
	}
	else {
		return 10;
	}
		
	
}

int main() {

	double edx, esx;
	
	if (controllo == 10) {
		cout >> "La radice è" << eseguimetodo(edx, esx);
	}
	else (
		cout >> "non ci sono radici edx e esx";
		)
}

