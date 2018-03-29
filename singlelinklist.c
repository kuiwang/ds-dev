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

/*init linkedlist */
LNode* initLinklist(){
    printf("init single lined list in below:\n");
    LNode *list;
    list = createLNode();
    return list;
}

/*create linkedlist from head,the final element order is opposite with the input order*/
LNode* createLinklistFromHead(LNode *list,int a[]){
    LNode* newnode;
    int i;
    int len = sizeof(a)/sizeof(a[0]);
    for (i = 0; i < len; ++i) {
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
    int i;
    int len = sizeof(a)/sizeof(a[0]);
    for (i = 0; i < len; ++i) {
        newnode = createLNode();
        newnode->data=a[i];
        tmp->next = newnode;
        tmp = newnode;
    }
    tmp->next = NULL;
    
    return list;
}

/*create single linked list from head with manual input*/
LNode* createLinklistFromHeadManually(LNode *list){
    printf("create single linked list with mannal input:\n");
    LNode* newnode , *tmp;
    tmp = list;
    int value;
    scanf("%i",&value);
    while(value != -1){
        newnode = createLNode();
        newnode->data = value;
        newnode->next = tmp->next;
        tmp->next = newnode;
        scanf("%i",&value);
    }
    return list;
}

/*create single linked list from tail with manual input*/
LNode* createLinklistFromTailManually(LNode *list){
    LNode *newnode , *tmp;
    tmp = list;
    int value ;
    scanf("%i",&value);
    while(value != -1 ){
        newnode = createLNode();
        newnode->data  = value;
        newnode->next = tmp->next;
        tmp->next = newnode;
        tmp = newnode;
        scanf("%i",&value);
    }
}

/*insert element after specified location n*/
LNode* addElemAfterLocation(LNode *list, int n, ElemType value){
    if (!list){
        printf("error ! List is null");
        exit(1);
    }
    /*
    int i = 0;
    LNode *tmp = list->next;
    while(tmp){
        i++;
        if(n == i)
            break;
    }*/
}

/*insert element after specified location n*/
LNode* addElemBeforeLocation(LNode *list, int n, ElemType value){

}

/*delete element at specified location n*/
LNode* removeElem(LNode *list, int n);

/*update element at specified location n with some value*/
LNode* updateElemValue(LNode *list, int n, ElemType value);

/*get location of the specified value*/
int getElemLoc(LNode *list, ElemType x);

/*print elements in the sequence list*/
void printLinkList(LNode *list){
    printf("print single linked list value in below:\n");
    if(list){
        LNode *tmp = list->next;
        while(tmp){
            printf("%i,",tmp->data);
            tmp = tmp->next;
        }
    }
}
