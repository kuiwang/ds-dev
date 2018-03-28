#include "basic.h"

int main(int argc , char **argv) {
    int i , sum = 0 , n;
    printf("input number n:");
    scanf("%i",&n);
    for ( i = 0; i <= n; ++i) {
        sum += i;
    }
    printf("your input:%i\n",n);
    printf("sum of 1+...+%i = %i\n" ,n , sum);

    return 0;

}