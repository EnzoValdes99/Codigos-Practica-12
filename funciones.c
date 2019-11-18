#include "funciones.h"

complex suma(complex a, complex b)
{
	complex r;
	r.real = a.real + b.real;
	r.img = a.img + b.img;
	return r;
}
complex resta(complex a, complex b)
{
	complex r;
	r.real = a.real - b.real;
	r.img = a.img - b.img;
	return r;
}
complex mult(complex a, complex b)
{
	complex r;
	r.real = ((a.real * b.real) - (a.img * b.img));
	r.img = ((a.real * b.img) + (a.img * b.real));
	return r;
}
complex div(complex a, complex b)
{
	complex r;
	float temp = ((b.real * b.real) + (b.img * b.img));
	r.real = ((a.real * b.real) + (a.img * b.img)) / temp;
	r.img = ((a.real * b.img) + ( a.img * b.real)) / temp;
	return r;
}
complex conj(complex a)
{
	complex r;
	r.real = a.real;
	r.img = (-1)*(a.img);
	return r;
}

void menu(){
		printf("1: sumar complejos \n");
		printf("2: restar complejos \n");
		printf("3: multiplicar complejos \n");
		printf("4: dividir complejos \n");
		printf("5: conjugado de complejo \n");
		printf("6: salir \n");
}
void print_complex(complex a)
{
    if (a.img < 0) {
        printf("%f%f", &a.real, &a.img);
    }else{
        printf("%f+%f", &a.real, &a.img);
    }
}

