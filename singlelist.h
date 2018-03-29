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

/*create single linked list from head with specified array*/
LNode* createLinklistFromHead(LNode *list,int a[]);

/*create single linked list from tail with specified array*/
LNode* createLinklistFromTail(LNode *list,int a[]);

/*create single linked list from head with manual input*/
LNode* createLinklistFromHeadManually(LNode *list);

/*create single linked list from tail with manual input*/
LNode* createLinklistFromTailManually(LNode *list);

/*insert element after specified location n*/
LNode* addElemAfterLocation(LNode *list, int n, ElemType value);

/*insert element after specified location n*/
LNode* addElemBeforeLocation(LNode *list, int n, ElemType value);

/*delete element at specified location n*/
LNode* removeElem(LNode *list, int n);

/*change element with value old to value*/
LNode* updateElemValue(LNode *list, ElemType old, ElemType value);

/*get location of the specified value*/
int getElemLoc(LNode *list, ElemType x);

/*print elements in the sequence list*/
void printLinkList(LNode *list);

#endif //DS_DEV_SINGLELIST_H
