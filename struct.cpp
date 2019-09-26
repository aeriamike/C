# include<stdio.h>

struct Point{
		int x;
	//	short s;
		int y;

			
	}; //justify

int main(void){
	/*
		Point p1,p2;
		
		scanf("%d",&p1.x);
		scanf("%d",&p1.y);
		
		p2 = p1;
		
		printf("%d %d\n",p2.x,p2.y);
	*/
	
	struct Point p;
	
	
	p.x=5;
	p.y=6;
	
	printf("%ld\n", sizeof(struct Point));
	/*
	struct Point *q=&p;
	int *pi = (struct Point*)q;
	printf("%d\n",*pi);
	pi++;
	printf("%d\n", *pi);
	*/
	
	/*
	printf("%p\n",&p);
	printf("%p\n",&p.x);
	printf("%p\n",&p.y);		
	*/
	return 0;
	
}
