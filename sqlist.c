//
// Created by root on 2018/3/27.
//
#include "sqlist.h"

int findElem(struct SqList list,ElemType x){
    int i = 0 ;
    int len = list.length;
    for (i = 0; i < len; ++i) {
        if(x<list.data[i]){
            return i;
        }
    }
    return i;
}
