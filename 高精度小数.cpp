#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,count=1;
	scanf("%d/%d",&a,&b);
	printf("0.");
	while(a!=0 && count<=200){
		a=a*10;
		c = a/b;
		a = a%b;
		printf("%d",c);
		count=count+1;
	}
	
	
	return 0;
}


