//顺序表
// Created by root on 2018/3/27.
//
#include "basic.h"
#ifndef DS_DEV_SQLIST_H
#define DS_DEV_SQLIST_H

/*
typedef struct SeqList{

    ElemType data[maxSize];
    ElemType length;
}SeqList,*SqListPtr;*/
typedef struct SeqList{

    ElemType data[maxSize];
    ElemType length;
}SeqList;

/*init sequence list*/
SeqList* initSeqlist();

/*create sequece list*/
SeqList* createSeqlist(SeqList *list);

/*insert element after specified location n*/
SeqList* insertElem(SeqList *list ,int n , ElemType value);

/*delete element at specified location n*/
SeqList* deleteElem(SeqList *list , int n);

/*update element at specified location n with some value*/
SeqList* modifyElem(SeqList *list , int n , ElemType value);

/*get location of the specified value*/
int findElem(SeqList *list , ElemType x);

/*print elements in the sequence list*/
void printSeqlist(SeqList *list);

#endif //DS_DEV_SQLIST_H
