#include<stdio.h>
int main(){
	//int i;
	//printf("%ld",sizeof(i));
	
	//int i = 0;
	//printf("%ld\n",sizeof(i+1.0));
	// the result of this expression is a double, which occupies 8 bytes in the memory;
	
	/*char ch = -18;
	printf("%d\n",ch);
	int i = ch;
	unsigned char uch=ch;
	//printf ("%d\n",uch);
	printf ("%u\n",ch);
	short s1 = 32767;
	unsigned short s2 = 32767;
	s1++;
	s2++;
	printf("%d\n",s1);
	printf("%d\n",s2);
	s1=0;
	s2=0;
	printf("%d\n",s1);
	printf("%d\n",s2);
	s1--;
	s2--;
	printf("%d\n",s1);
	printf("%d\n",s2);
	
int k = -0x12;
printf("%o",k);	
*/

/*printf("%.3f\n",-0.0049);
printf("%.30f\n",-0.0049);
printf("%.3f\n",-0.00049);
*/
/*
float a, b, c;
a=1.345f;
b=1.123f;
c=a+b;
printf("%f\n",c);
if(c==2.468){
	printf("equal to each other\n");
}else{
	printf("not equal to each other c=%.10f, or %f\n",c,c);
}

char c = 'A';
printf("%c\n",c);

return 0;
}
*/

int x;
double sum = 0;
int cnt = 0;
int number[100];
scanf("%d", &x);
while(x!=-1){
	number[cnt]=x;
	sum+=x;
	cnt++;
	scanf("%d",&x);
}
if(cnt>0){
	int i;
	double average = sum/cnt;
	for(i=1; i<cnt; i++){
		if(number[i]>average){
			printf("%d ", number[i]);
			
		}
	}
}
}






