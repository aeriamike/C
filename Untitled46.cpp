#include<stdio.h>

struct point{
	int x;
	int y;
};

void getStruct(struct point *p);

int main(void){
	
	struct point p;
	getStruct(&p);
	printf("%d %d\n", p.x,p.y);
	return 0;
}

void getStruct(struct point *p){
	
	scanf("%d %d", &p->x,&p->y);
	
}
