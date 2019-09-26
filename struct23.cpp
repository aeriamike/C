#include<stdio.h>

struct point{
	int x;
	int a;
};

struct point getStruct(void);
void output(struct point);

int main(){
	struct point y = {0,0};
	//getStruct(y);
	y=getStruct();
	output(y);
}

struct point getStruct(void){
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.a);
	printf("%d, %d\n", p.x, p.a);
	return p;
}

void output(struct point p){
	
	printf("%d, %d\n", p.x,p.a);
}

