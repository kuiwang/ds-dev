#include <iostream>
#include <malloc.h>
#include "stdio.h"

typedef int ElemType;
typedef bool Status;
#define ERROR 1;
#define OK 0;

typedef struct Lnode{
    ElemType data;
    Lnode *next;
}LnodeAlias,*LnodePtr;
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
    }

    return 0;
}