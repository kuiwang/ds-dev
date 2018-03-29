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

/*linked list length*/
int listLength(LNode *list){
    if(!list){
        return 0;
    }
    LNode *tmp;
    int len = 0;
    tmp = list;
    while(tmp->next){
        len++;
        tmp = tmp->next;
    }
    return len;
}

/*insert element after specified location n*/
LNode* addElemAfterLocation(LNode *list, int n, ElemType value){
    if (!list){
        printf("error ! List is null");
        exit(1);
    }

    int i = 0 ,len = 0;
    len = listLength(list);
    if(n <0 || n>len){
        printf("location %i is invalid!\n",n);
        exit(1);
    }
    if(n == 0){
        LNode *newnode ;
        newnode = (LNode*)malloc(sizeof(LNode));
        newnode->data = value;
        newnode->next = list->next;
        list->next = newnode;
    }else{
        LNode *tmp = list->next;
        while(tmp){
            i++;
            if(n == i)
                break;
            tmp = tmp->next;
        }
        LNode *newnode = (LNode*)malloc(sizeof(LNode));
        newnode->next = tmp->next;
        tmp->next = newnode;
        newnode->data = value;
    }


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
    int len = listLength(list);
    printf("single linked list size: %i ,value in below:\n",len);
    if(list){
        LNode *tmp = list->next;
        while(tmp){
            printf("%i,",tmp->data);
            tmp = tmp->next;
        }
    }
}
