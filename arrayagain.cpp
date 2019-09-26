#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	int value;
	struct node*next;
}Node;

typedef struct{
	Node* head;
}List;
/*
Node* insert_head(Node* head, int value){
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = value;
	p->next = head;
	head = p;
	return head;
	
}
*/
void insert_head(List* list, int value){
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = value;
	p->next =list->head;
	list->head = p;
	
}

void goover(List *list){
	for(Node *p = list->head; p; p=p->next){
		printf("%d\n",p->value);
	}
}

int main(){
	List list;
	list.head = NULL;
	//Node *head = NULL;
	head = insert_head(&list, 0);
	
	return 0;
}
