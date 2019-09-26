#include<stdio.h>

typedef struct{
	int x;
	char ch;
	int y;
}__attribute__((packed)) Point;

void getStruct(Point *p);

int main(void){
	printf("%ld\n",sizeof(Point));
	return 0;
}

void getStruct(Point *p){
	
	scanf("%d %d", &p->x,&p->y);
	
}
