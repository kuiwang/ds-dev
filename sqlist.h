//顺序表
// Created by root on 2018/3/27.
//
#include "basic.h"
#ifndef DS_DEV_SQLIST_H
#define DS_DEV_SQLIST_H

typedef struct SqList{

    ElemType data[maxSize];
    ElemType length;
}SqListAlias,*SqListPtr;

int findElem(struct SqList list , ElemType x);//查找第一个比x大的元素的位置

void insertElem();//

#endif //DS_DEV_SQLIST_H
