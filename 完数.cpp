#include<stdio.h>
int main(){
	
	int n1, n2;
	int num=1, res=0, mem=0, tar=0 , count=0	;
	
	scanf("%d %d",&n1, &n2);
	
	
	while(num<1000){
		
		int testnum=1;
		int testres=0;
		while(testnum<num){
			if(num%testnum==0){
				
				testres=testres+testnum;		
			}
			testnum=testnum+1;
		}
		
		
		if(testres==num && n1<=num && n2>=num){
			res=1;
			
		
				if (count==0){
				printf("%d",num);
				
			}else{
				printf(" %d",num);
			}
			
			
			
			count++;
			
			
			}
			
	
		
		
		num=num+1;
		
	
	
	}
	
	if (res==0){
		printf("NIL");
	
	}
	

return 0;
	
}

