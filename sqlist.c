//
// Created by root on 2018/3/27.
//
#include "sqlist.h"


SeqList* createNode(){
    SeqList *node = NULL;
    node = (SeqList*)malloc(sizeof(SeqList));
    return node;
}
SeqList* initSeqlist(){
    printf("init sqlist start !");
    SeqList *list;
    list = createNode();
    if (list){
        list->length = 0;
    }
    printf("init sqlist end !\n");
    return list;
}

SeqList* createSeqlist(SeqList *list){
    printf("create list data start and exit with 0!\n");
    ElemType d;
    printf("input data and ended with 0!\n");
    scanf("%i",&d);
    while(d !=0){
        list->data[list->length++] = d;
        scanf("%i",&d);
    }
    printf("create list data end\n");
    return list;
}

/*insert element at specified location n*/
SeqList* insertElem(SeqList *list ,int n , ElemType value){
    printf("insert element:%i at location %i\n",value,n);
    int len,i;
    if(!list){
        printf("error ,list is null!\n");
        exit(1);
    }
    len = list->length;
    if(n <0 || n>len || len == maxSize){ //location error or reach to max size
        printf("error, location :%i is invalid!\n" ,n);
        exit(1);
    }
    /*
    for (i = len; i >=n ; --i) {
        list->data[i] = list->data[i-1];
    }
    list->data[i]=value;
    */

    for (i = len-1; i >=n-1 ; --i) {
        list->data[i+1] = list->data[i];
    }
    list->data[n-1]=value;

    ++list->length;
    return list;
}

/*delete element at specified location n*/
SeqList* deleteElem(SeqList *list , int n){
    printf("delete element at %i\n",n);
    int len,i;
    if(!list){
        printf("error ,list is null!\n");
        exit(1);
    }
    len = list->length;
    if(n <0 || n>len){
        printf("error, location :%i is invalid!\n" ,n);
        exit(1);
    }
    ElemType removeValue = list->data[n];
    for (i = n; i <=len-1 ; ++i) {
        list->data[i-1] = list->data[i];
    }
    --list->length;

    return list;
}

/*update element at specified location n with some value*/
SeqList* modifyElem(SeqList *list , int n , ElemType value){

}

int findElem(struct SeqList *list,ElemType x){
    int i = 0 ;
    int len = list->length;
    for (i = 0; i < len; ++i) {
        if(x == list->data[i]){
            return i;
        }
    }
    return -1;
}

void printSeqlist(SeqList *list){
    printf("print sqlist element start !\n");
    int i = 0,len = 0;
    len  = list->length;
    printf("list size:%i\n",len);
    for (i = 0; i < len; ++i) {
        printf("%i,",list->data[i]);
    }
    printf("\n");
}

