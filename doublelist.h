//双向链表
// Created by root on 2018/3/27.
//
#include "basic.h"

#ifndef DS_DEV_DOUBLELIST_H
#define DS_DEV_DOUBLELIST_H

typedef struct DLNode{
    ElemType data;
    struct DLNode *pre;
    struct DLNode *next;
}DLNode;

/*create doublelinkedlist node*/
DLNode* createDLNode();

/*init doublelinkedlist*/
DLNode* initDoubleLinklist();

/*create doublelinkedist*/
DLNode* createDoubleLinklist(DLNode *list);

/*insert element after specified location n*/
DLNode* insertElem(DLNode *list ,int n , ElemType value);

/*delete element at specified location n*/
DLNode* deleteElem(DLNode *list , int n);

/*update element at specified location n with some value*/
DLNode* modifyElem(DLNode *list , int n , ElemType value);

/*get location of the specified value*/
int findElem(DLNode *list , ElemType x);

/*print elements in the sequence list*/
void printDoubleLinklist(DLNode *list);

#endif //DS_DEV_DOUBLELIST_H
