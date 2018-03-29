//
// Created by user on 2018/3/28.
//
#include "basic.h"
#include "sqlist.h"
#include "singlelist.h"

int main(int argc , char **argv){
    /*
    SeqList *headList = initSeqlist();
    createSeqlist(headList);
    printSeqlist(headList);
    addElemAfterLocation(headList,3,119);
    printSeqlist(headList);
    removeElem(headList,5);
    printLinkList(headList);
    */

    /*single linked headList */
    LNode *headList = initLinklist();
    createLinklistFromHeadManually(headList);
    printLinkList(headList);


    LNode *tailList = initLinklist();
    createLinklistFromTailManually(tailList);
    printLinkList(tailList);


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
