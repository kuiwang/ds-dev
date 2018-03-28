//single linkedlist
// Created by root on 2018/3/28.
//
#include "singlelist.h"

LNode* createLNode(){
    LNode* node;
    node = (LNode*)malloc(sizeof(LNode));
    if(node){
        node->next = NULL;
    }
    return node;
}

/*create linkedlist from head,the final element order is opposite with the input order*/
LNode* createLinklistFromHead(LNode *list,int a[]){
    LNode* newnode;
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < len; ++i) {
        newnode = createLNode();
        newnode->data=a[i];
        newnode->next = list->next;
        list->next = newnode;
    }
    return list;
}
/*create linkedlist from tail ,the final element order is the same as the input order*/
LNode* createLinklistFromTail(LNode *list,int a[]){
    LNode *newnode ,*tmp;
    tmp = list;
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < len; ++i) {
        newnode = createLNode();
        newnode->data=a[i];
        tmp->next = newnode;
        tmp = newnode;
    }
    tmp->next = NULL;
    
    return list;
}


/*insert element after specified location n*/
LNode* insertElem(LNode *list ,int n , ElemType value);

/*delete element at specified location n*/
LNode* deleteElem(LNode *list , int n);

/*update element at specified location n with some value*/
LNode* modifyElem(LNode *list , int n , ElemType value);

/*get location of the specified value*/
int findElem(LNode *list , ElemType x);

/*print elements in the sequence list*/
void printSeqlist(LNode *list);