#include "basic.h"

int main(int argc , char **argv) {
    int i = 0 , sum = 0 ;
    for (int i = 0; i < 101; ++i) {
        sum += i;
    }
    int n = 0 , m = 0;
    printf("input number n:");
    scanf("%i",&n);

    printf("your input:%i\n",n);
    printf("printf:1+...+100 = %i\n" , sum);

    return 0;

}