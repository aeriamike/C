#include<stdio.h>
int main()
{
	int number = 0;
    scanf("%d", &number);
    
	int a = number/100;
	int b = number%10;
	int d= b*100;
	int f = number - a*100 -b;
	
	printf("%d\n",d+f+a);
	return 0;
}
