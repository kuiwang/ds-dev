//double linkedlist
// Created by root on 2018/3/28.
//

#include "doublelist.h"

/*create doublelinkedlist node*/
DLNode* createDLNode(){
    DLNode* node;
    node = (DLNode*)malloc(sizeof(DLNode));
    return node;
}

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
