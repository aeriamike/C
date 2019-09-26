#include <stdio.h>
#include <stdlib.h>

typedef struct Node* NodePtr;
struct Node{
    int num;
    struct Node *prev;
    struct Node *next;
};

int main(){
    NodePtr head = (NodePtr)malloc(sizeof(struct Node));
    head->num = 0;
    head->prev = NULL;
    head->next = NULL;
    int number;
    NodePtr tail = head;
    while(scanf("%d", &number)){
        if(number == -1) break;
        NodePtr p = (NodePtr)malloc(sizeof(struct Node));
        p->num = number;
        p->next = NULL;
        p->prev = tail;
        tail->next = p;
        tail = p;
    }
    while(tail!=head){
        printf("%d ", tail->num);
        NodePtr t = tail;
        tail = tail->prev;
        free(t);
    }
    free(head);
    return 0;
}
