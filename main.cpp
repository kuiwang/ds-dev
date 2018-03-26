#include <iostream>
#include <malloc.h>

using namespace std;

#include "stdio.h"

typedef struct Lnode{
    int data;
    struct  Lnode* next;
}Lnode;

int main() {
    int i = 0 , sum = 0 ;
    for (int i = 0; i < 101; ++i) {
        sum += i;
    }
    int n = 0 , m = 0;
    printf("input number n:");
    scanf("%i",&n);

    printf("your input:%i\n",n);
    printf("printf:1+...+100 = %i\n" , sum);

    Lnode *inst;
    int num = 1000*1024;
    inst = (Lnode*)malloc(num*sizeof(Lnode));
    if(inst== NULL){
        printf("memory allocate error!");
    }else{
        printf("allocate successful!");
        free(inst);
        printf("free error!");
    }

    return 0;
}