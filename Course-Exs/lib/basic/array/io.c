#include <stdio.h>
#include "../array.h"

void print_array(int* A, int dim){
    printf("[");
    if(A != NULL & dim > 0){
        printf("%d", A[0]);
    }
    for(int i=1; i<dim; i++){
        printf(",%d", A[i]);
    }
    printf("]");
}


void stampa_array_double(double* A, int dim){ ///
    printf("[");
    if(A != NULL & dim > 0){
        printf("%g", A[0]);
    }
    for(int i=1; i<dim; i++){
        printf(",%lf", A[i]);
    }
    printf("]");
}

void read_input_arr(int *X, int dim)
{
    /* Takes the array as input from the user */
    printf("Give the elements of the (multidim) array in desired order: ");
    for (int i = 0; i < dim; i++)
        scanf("%d", &X[i]);
}

void leggi_array_double(double *A, int dim) { ///

    for(int i=0; i<dim; i+=1) {
        scanf("%lf", &A[i]);
    }
}