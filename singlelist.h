//单链表
// Created by root on 2018/3/27.
//
#include "basic.h"

#ifndef DS_DEV_SINGLELIST_H
#define DS_DEV_SINGLELIST_H

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LNodePtr;

#endif //DS_DEV_SINGLELIST_H
