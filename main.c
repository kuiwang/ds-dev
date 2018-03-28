//
// Created by user on 2018/3/28.
//
#include "basic.h"
#include "sqlist.h"

int main(int argc , char **argv){
    /*
    SeqList *list = initSeqlist();
    createSeqlist(list);
    printSeqlist(list);
    insertElem(list,3,119);
    printSeqlist(list);
    deleteElem(list,5);
    printSeqlist(list);
    */

    return 0;
}
void loop(){
    int n , i , sum = 0;
    printf("input your number:\n");
    scanf("%i",&n);
    while(n != 0){
        for (i = 0; i <= n; ++i) {
            sum += i;
        }
        printf("1+...+%i = %i\n",n,sum);
        printf("go on input :\n");
        sum = 0;//reset sum
        scanf("%i",&n);
    }
    printf("input %i and exit now",n);
}
