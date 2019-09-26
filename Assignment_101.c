#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <malloc.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

typedef struct {
	Node *head;
	Node *tail;
}List;



List *listCreate(void) {
	List *plist = (List*)malloc(sizeof(List));
	plist->head = NULL;
	plist->tail = NULL;
	return plist;
}

void listInsert(List *plist, int value) {

	Node *n = (Node*)malloc(sizeof(Node));
	if (value!=-1) {
		n->data = value;
		n->next = NULL;
	}
	if (plist->head == NULL && plist->tail == NULL) {
		plist->head = plist->tail = n;
	} else {
		plist->tail->next=n;
		plist->tail=n;
	}	
}


void listCombine(List *plist1, List *plist2, List *plist3) {
	Node *current1 = plist1->head;
	Node *current2 = plist2->head;
	
	while (current1 != NULL && current2 != NULL) {
		if (current1->data > current2->data) {
			listInsert(plist3, current2->data);
			current2 = current2->next;
		} else {
			listInsert(plist3, current1->data);
			current1 = current1->next;
		}
	}
	while (current1 == NULL && current2 != NULL) {
		listInsert(plist3, current2->data);
		current2 = current2->next;
	}
	while (current2 == NULL && current1 != NULL) {
		listInsert(plist3, current1->data);
		current1 = current1->next;
	}
}

// Print out the result.
void list_print(List *plist) {
	Node *p=plist->head;
	if (p!=NULL) {
		while (p) {
			printf("%d", p->data);
			if (p!=plist->tail) {
				printf(" ");
			}
			p=p->next;
		}	
	} else {
		printf("NULL");
	}
	
}

// Get rid of all lists after printing is completed.
void list_destroy(List *plist) {
	Node *p=plist->head;
	while (plist->head != NULL) {
		plist->head=plist->head->next;
		free(p);
		p=plist->head;
	}
	free(plist);
	plist=NULL;
}


int main(){
	List *list1, *list2, *list3;
	int n = 0;
	int m = 0;
	list1 = listCreate();
	list2 = listCreate();
	list3 = listCreate();
	
	printf("Please enter a list of number in non-descending order.\n");
	scanf("%d", &n);
	while(n!=-1){
		listInsert(list1, n);
		scanf("%d", &n);
	}
	printf("Please enter another list of number in non-descending order.\n");
	scanf("%d", &m);
	while(m!=-1){
		listInsert(list2, m);
		scanf("%d", &m);
	}
	
	printf("The result is: ");
	listCombine(list1, list2, list3);
	list_print(list3);
	list_destroy(list1);
	list_destroy(list2);
	list_destroy(list3);
	return 0;
	
}
