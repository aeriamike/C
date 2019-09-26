#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*
void f(){
	int k = 0;
	int a[4];
	a[-1]=-1;
	printf("%p\n",a);
	printf("%p\n",&k);
	printf("%d\n", a[5]);
	printf("%d\n", a[4]);
	printf("%d\n", a[-1]);
	printf("%d\n", k);
	
}

int main(void){
	f();
	return 0;
}
*/

/*
int main(){
	
	int x;
	double sum = 0;
	int cnt;
	printf("Please enter a number of digits to be inserted: ");
	scanf("%d", &cnt);
	if(cnt>0){
		int number[cnt];
		scanf("%d", &x);
		while(x!=1){
			number[cnt]=x;
			sum += x;
			cnt ++;
			scanf("%d", &x);
		}
	}
	
	*/
	/* 
int main (void){
	
	const int number = 10;
	int x;
	int count[number];
	int i;
	for(i=0;i<number;i++){
		count[i]=0;
	}
	
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0 && x<=9){
		count[x]++; 
	}
	scanf("%d",&x);
	}
	
	for (i=0;i<number;i++){
		printf("%d:%d\n", i, count[i]);
	}
		
	}
	
	
int main(void){
	
const int maxNumber=25;
int isPrime[maxNumber];
int i;
int x;
for(i=0;i<maxNumber;i++){
	isPrime[i]=1;
}
for(x=2;x<maxNumber;i++){
	if(isPrime[x]){
		for(i=2;i*x<maxNumber;i++){
			isPrime[i*x]=0;
		}
	}
}

for(i=2; i<maxNumber; i++){
	if(isPrime[i]){
		printf("%d\t", i);
	}
}
printf("\n");


	*/
/*
	
	
	int g;
int main(){

	int i;
	int j;
	int a[10];
	printf("%lu\n",sizeof(&g));
	printf("%p\n",&g);
	return 0;
	
	
}

*/

/*
void f(int *p){
	printf("%p\n",p);
	printf("%X\n",*p);
	*p=-1;
}

int main(){
	int i=0xdeadbeef;
	scanf("%d",i);
	printf("%p\n",&i);
	f(&i);
	printf("%x\n",i);
	
	return 0;
}
*/
/*
void swap(int *pa, int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t;
}


int main(){
	int a=4;
	int b=5;
	swap(&a,&b);
	printf("%d %d",a, b);
	
	return 0;
}


*/
/*
int divide (int a, int b, int *pState){
	if(b==0){
		return a/b;
	}
}
*/
/*
int divide(int a, int b, int *pResult){
	if(b==0){
		return state;
	}
}
int result; 


if(divide(5,0,&state)){
	
}
*/
/*
void minmax(int a[], int len,int *pMin, int *pMax){
	*pMin=a[0];
	*pMax=a[0];
	for(int i=i; i<len; i++){
		if(a[i]>*pMax){
			*pMax=a[i];
		}
		if(a[i]<*pMin){
			*pMin=a[i];
		}
	}
}

int main(){


int a[]={1,2,3,4,5,};
int min,max;
minmax(a,5,&min,&max);
int *p;
*p = 0;
return 0;
}
*/
/*

void f(int a[]){
	printf("%lu\n", sizeof(a));
	printf("%d\n",a[0]);
}
/*
int main(){
	int a[]={1,2,3,4,5,};
	printf("%lu\n", sizeof(a));
	//printf("%d\n", sizeof(a)/sizeof(a[0]));
	printf("%lu\n", sizeof(a)/sizeof(a[0]));
	f(a);
		
	return 0;
	
}
*/
/*
int main(){
	
	
	int a[]={1,2,3,4,5,};
	int *p = a;
	printf("%d\n",*(a+1));//p[1]
	//*(p+n) <-> p[n]
	a=p;
		
}

*/

//int g; 
//int main(void){
	/*
	int i;
	printf("%p\n","hello world");
	printf("%s\n","hello\	world")
	printf("%p\n",&i);
	printf("%p\n",&g);
	*/
	/*
	char *s = "hello";
	char *s1 = s;
	
	
	
	printf("%p\n",s);
	//printf("%d\n",strlen(s));
		
	for (int i=0; i<6; i++){
		printf("%c\n",s[i]);
	}
	
	//s = "bye";
	
	printf("%s\n",s1);
	printf("%p\n",s1);
	printf("%s\n",s);
	s[0]='e';
	printf("%s\n",s);
	
	*/
	
	/*
	char string[8];
	
	//scanf ("%s",string);
	gets(string);
	
	printf("%s",string);
	
	*/
	
	/*
	char buffer[100]="";
	printf("%s",buffer);
	printf("%d",strlen(buffer));	
	return 0;
	*/
	
	/*
	printf("Please enter a month:");
	int month;
	scanf("%d",&month);
	
	char *month_name[]={"January","February"};

	*/
	/*
int main (int argc, char const * argv[])
{
		
		printf("%d\n",argc);
		for(int i=0; i<argc; i++){
		printf("%s\n", argv[i]);
	}
	return 0;
		
	}
*/

int main(void){
/*
	int strcmp(const char*s1,const char *s2);
	printf("%d",strcmp("hello","hell"));
	
	
	return 0;
*/	
	
	char a[]="hello";
	char *b="bye";
	strcpy(a,b);
	printf("%s\n",a);
	printf("%ld\n",strlen(a));
	printf("%ld\n",sizeof(a));
	
	int k = 50;
	if(1<k<20){
		printf("yes");
	}else{
		printf("no");
	}
	
	int i;
	while(i<10){
		printf("%d\n",(i++));
		;
	}
	
	
	printf("%f\n",(3/6*2.0));
	return 0;
}











