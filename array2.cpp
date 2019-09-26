#include <stdio.h>
#include<stdlib.h>

int main(){
	
	char *name[]= {"penny", "nickel", "dime", "quarter", "half-dollar"};
	
	int a[]={1,5,10,25,50};
	
	
	int n=0;
	int i;
	
	scanf("%d",&i);
	
	for(n=0;n<=(sizeof(a)/sizeof(a[0]));n++){
		if(i==a[n]){
			printf("%s",name[n]);
			
		}
	}
	
	
	/*
	int a[]={1,2,3,4,5,6,7,8,9,10,13,15,17,20,24};
	
	
		
		int x;
		
		int idx;
		int size = sizeof(a)/sizeof(a[0]);
	//	printf("%d\n",sizeof(a));
	//	printf("%d\n",sizeof(a[0]));
	//		printf("%d\n",size);
	scanf("%d",&x);
	
	int left = 0;
	int right = size-1;
	int mid; 
	
	do{
			mid = (left+right)/2;
		if(x>a[mid]){
			left=a[mid]+1;
		printf("%d\n",left);
		printf("%d\n",right);
		printf("%d\n",right);
	
		
		}else if (x<a[mid]){
			right = a[mid]-1;
				printf("%d\n",left);
		printf("%d\n",right);
		printf("%d\n",right);
			
		
		}else{
			idx==a[mid];
		}
	}while(left<=right);
		
		
		
	printf("%d\n",idx);
		
		*/
	
	
	return 0;
}
