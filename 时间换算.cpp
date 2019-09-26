#include <stdio.h>

int main()
{
	int bjt = 0;
	scanf("%d",&bjt);
	
	int a = bjt/100;
	int b = bjt - a*100;
	int utc_a = 0;
	int haha = 0;
	int utc = 0;
	
	if (a>0 and a<24){
		utc_a=(a-8)*100;
		
		if(utc_a<0){
			haha = 2400 + utc_a;
			utc = haha+b;
			printf("%d\n",utc);
			
		}else{
			utc = utc_a+b;
			printf("%d\n",utc);
		}
		
	}else{
		return 0;
	}
	

}
