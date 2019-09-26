#include<stdio.h>
int array[1000000];
int main(){
	
	int num;
	
	int count=0;
	int i=0;
	
	scanf("%d",&num);
	
	int max=0;
	
	while(num!=-1){
		array[i]=num;
		
		
		if(max<array[i]){
			max=array[i];
		}
		
		i++;
		count++;
		scanf("%d",&num);
	
	}
	
	
	int n;
	for(n=0;n<count;n++){
	//	printf("%d ",array[n]);
	}
	//printf("\n");
	//printf("%d\n",max);
	
	
	int c;
	int k;
	int times = 0;
	int mode=0;
	
	int maxi=0;
	for(c=0;c<=max;c++){
		times =0;
		//printf("%d ",c);
		for(k=0;k<count;k++){
			if(c==array[k]){
				times++;
			}
		
		}
		
			
		
		//	printf("%d",times);
		//	printf("\n");
			
			if (maxi<times){
				maxi = times;
				mode = c;
				
			
			}
			
	}
		printf("%d\n",mode);
	
	return 0;
}
