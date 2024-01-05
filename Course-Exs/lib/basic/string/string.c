#include "../string.h"

int string_len(char *N)
{
    /* PRE: array/array casted to ptr */
    int i = 0;
    while (N[i] != '\0')
    {
        i++;
    }
    return i;
}
/* POST: return the length of the actual string (beginning to first '\0') */


void concatenate_strings(char *string1, char *string2){
    /* PRE: takes two string, the first should be longer */
    while (*string1!='\0'){
        string1++;
    }
    while (*string2!='\0'){
        *string1 = *string2;
        string1++;
        string2++;
    }
}
/* POST: concatenate string2 in "non-initialized" characters of string1 */

int string_match(char *N, char *T, int N_len, int T_len){
    // This is the part that can be implemented as a function
    if (T_len > N_len){
        return 0;
    }
    
    for (int j = 0; j < T_len; j++)
    {
        if (N[j] != T[j])
        {
            return 0;
        }
    }
    return 1;
}