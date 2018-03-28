//单链表
// Created by root on 2018/3/27.
//
#include "basic.h"

#ifndef DS_DEV_SINGLELIST_H
#define DS_DEV_SINGLELIST_H

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode;

/*create node*/
LNode* createLNode();

/*init linkedlist */
LNode* initLinklist();

/*create  linkedlist*/
LNode* createLinklist(LNode *list);

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

#endif //DS_DEV_SINGLELIST_H
