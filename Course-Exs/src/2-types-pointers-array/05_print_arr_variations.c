#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4};
    /* PRE: arr is an array of integers */

    int i=0, *ptr = arr;
    while (i<4){
        printf("%d, ", *ptr);
        ptr += 1;
        i++;
    }
    printf("\b\b \n");

    /* Equivalent version using arr which is a constant ptr, so not modifiable. 
    Then we can't do: arr = arr + 1 */
    i=0;
    while (i<4){
        printf("%d, ", *(arr+i));  // arr+i since arr = arr + i not possible!!
        i++;
    }
    printf("\b\b \n");
}
/* POST: prints the array */