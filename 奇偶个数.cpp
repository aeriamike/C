#include<stdio.h>
int main()
{
	int odd = 0;
	int even = 0;
	int num;
	while (1)
	{
		scanf("%d",&num);
		if(num%2==0){
			even++;
		}else if (num%2==1){
			odd++;
		}
		
		else if (num==-1){
			break;
		}
	}
	printf("%d %d",odd, even);
	return 0;
		
	
}
