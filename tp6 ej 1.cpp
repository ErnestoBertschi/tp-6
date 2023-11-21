#include <stdio.h>
#include <math.h>

typedef struct {
	double real;
	double imaginario;
} NumeroComplejo;

void rectangular_a_polar(const NumeroComplejo* rectang, double* modulo, double* angulo) {
	*modulo = sqrt(rectang->real * rectang->real + rectang->imaginario * rectang->imaginario);
	*angulo = atan2(rectang->imaginario, rectang->real);
}

void polar_a_rectangular(const double modulo, const double angulo, NumeroComplejo* rectang) {
	rectang->real = modulo * cos(angulo);
	rectang->imaginario = modulo * sin(angulo);
}

int main() {
	NumeroComplejo complejo_rectangular;
	double modulo, angulo;
	
	printf("Ingrese la parte real del número complejo: ");
	scanf("%lf", &complejo_rectangular.real);
	printf("Ingrese la parte imaginaria del número complejo: ");
	scanf("%lf", &complejo_rectangular.imaginario);
	
	rectangular_a_polar(&complejo_rectangular, &modulo, &angulo);
	printf("La forma polar es: %lf (modulo) y %lf (ángulo)\n", modulo, angulo);
	
	NumeroComplejo complejo_rectangular_convertido;
	polar_a_rectangular(modulo, angulo, &complejo_rectangular_convertido);
	printf("La forma rectangular convertida es: %lf (parte real) y %lf (parte imaginaria)\n",
		   complejo_rectangular_convertido.real, complejo_rectangular_convertido.imaginario);
	
	return 0;
}
