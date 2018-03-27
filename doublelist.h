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
}DLNode,*DLNodePtr;

#endif //DS_DEV_DOUBLELIST_H
