h#include <stdio.h>
#include <string.h>
int main()
{
	
	char a, flag=1;
	int count = 0;
	scanf("%c",&a);
	
	while(a!='.'){
		if(a==' '){
			if (count!=0){
			if(flag==1){
				printf("%d",count);
				flag=0;
			}
			else{
				printf(" %d",count);
				
			}
			count=0;
		}
		
		}
		else{
		count++;
	}
	scanf("%c",&a);
		
		
	}
	if(count!=0){
		if(flag==1){
			printf("%d",count);
		}
		else{
			printf(" %d",count);
		}
		return 0;
	}
	
}
