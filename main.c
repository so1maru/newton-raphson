#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) {
	return (x - 1.0) * (x - 2.0) * (x - 3.0) * (x - 4.0);
}

double df(double x) {
	double h = 0.00001;
	return ( f(x + h) - f(x) ) / h;
}

int main() {
	double a = 50.0;
	double u = 0.00001;

	double la = 0.0;
	while ( fabs(la - a) > u) {
		la = a;
		a = a - ( f(a) / df(a) );
	}

	printf("%f\n", a);
	return 0;
}
