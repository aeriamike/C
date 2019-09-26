#include<stdio.h>
int main()
{
/*	char c;
	int i;
	
	scanf("%d",&i);
	scanf("%c",&c);
	printf("%d\n",i);
	printf("%d\n",c);
	
	int $haha;
	short $hahaha;
	long $hahahaha;
	double $a;
	float $b;
	char $c;
	long long $d;
	long double $e;
	char a = 'A';
	printf("%c\n",a);
	printf("%d\n",a);
	
	printf("hello\b\b\baxc\n");
	
	printf("%d,%d,%d,%d,%d,%d,%d,%d\n", sizeof($haha),sizeof($hahaha),sizeof($hahahaha),sizeof($a),sizeof($b),sizeof($c),sizeof($d),sizeof($e));
	
	int cc;
	cc = 4.0/0;
	printf("%f",0);*/
	
/*
int n;
int res=1;
int i = 1;
scanf("%d",&n);
//for(initialization; condition; step action){
//}
for(i=1;i<=n;i++){
	res=res*i;
	
}
printf("%d\n",res);

*/
/*


int n;
scanf("%d",&n);
int isPrime=1;


for(int i =2; i<n; i++){
	if(n%1==0){
		isPrime=0;
		break;
	}
}
 if (isPrime){
 	printf("%d is a prime number. \n",n);
 	
 }else{
 	printf("%d is not a prime number.\n",n);
 }

*/

/*
int count;
int k=2;
int i=2;
int isPrime;

for(count = 0;count<50;count++){
	isPrime=1;
	for(int i=2; i<k; i++){
		if(k%i==0){
			isPrime=0;
			break;
		}
		
	}
	if(isPrime){
		printf("%d\t",k);
		count++;
	}
	k++;
}
*/
/*
int n;
int i;
double ret=0.0;

scanf("%d",&n);
for(i=1;i<=n;i++){
	ret = ret + (1.0/i);
}
*/
/*
int a ;
char c ;
scanf("%d %c", &a, &c);
scanf("%d%c", &a, &c);
printf("%d %c\n",a, c);
printf("%d%c\n",a, c);
*/
/*
char c ='A';
c++;
printf("%c\n",c);
*/
//char c= 'a'-'A';
//printf("%d\n",c);
/*
char c = 'A';
printf("%c",c+32);
*/
/*
int ret = 0;
char c;
do{
	scanf("%c",&c);
	if(c<'0'||c>'9'){
		break;
	}
	printf("%d\n", ret);
	ret = ret*10+c-'0';
}while(1);

printf("%d\n", ret);
return 0;
*/

/*
printf("hello\b");
printf("hello\t");
printf("hello\"");
printf("hello\'");
*/
// \b back position
// \" double quote
// \t makes the next output start at the next tablestop
// \r return the carriage

/*
int a = 32768;
a = (short)a;
printf("%d\n", a);

double c = 5.0;
double b = 2.0;
double i = c/b;

printf("%f\n", i);
int k = (int)c/b;
printf("%d", k);
*/

/*
int a = 5;
int b = 6;
double s = (double)(a/b);
printf("%f",s);
*/

char a[]="abcdef";
*(a+1)='n';
a[4]='g';
a[3]='9';
printf("%s",a);
return 0;


}
