
#include "biblioteca.h"

void troca_int( int *valor1, int *valor2) {
        int temp;
        temp = *valor1;
        *valor1 = *valor2;
        *valor2 = temp;
}

void troca_float( float *valor1, float *valor2) {
        float temp;
        temp = *valor1;
        *valor1 = *valor2;
        *valor2 = temp;
}
