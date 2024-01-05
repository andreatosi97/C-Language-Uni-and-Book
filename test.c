#include <stdio.h>

void main(){

    int a[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}};

    int correct = a[2][1];
    int test = *(*(a+2)+1);

    printf("Correct %d is equal to test %d?\n", correct, test);
}