#include "funciones.h"
#include "funciones.c"
#include <stdio.h>


int main(){
    int op;
    complex a, b, res;
    do
    {
        
        menu();
        scanf("%d", &op);
        
        printf("ingresa la parte real \n");
        scanf("%f", a.real);
        printf("ingresa la parte imaginaria \n");
        scanf("%f", a.img);
        printf("ingresa la parte real \n");
        scanf("%f", b.real);
        printf("ingresa la parte imaginaria \n");
        scanf("%f", b.img);
        
        switch(op){
            case 1:
                res = suma(complex a, complex b);
                break;
            case 2:
                res = resta(complex a, complex b);
                break;
            case 3:
                res = mult(complex a, complex b);
                break;
            case 4:
                res = div(complex a, complex b);
                break;
            case 5:
                res = conj(complex a);
        }
        print_complex(res);
                
                
        }while(op < 6);



