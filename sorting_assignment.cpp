#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int len;
	scanf("%d",&len);
	
	int a[len];
	for(int s=0;s<len;s++){
		int ss=0;
		scanf("%d",&ss);
		a[s]=ss;
		//printf("%d\n",a[s]);
	}
	
//	int a[]={
//	1,5,3,2,5,16,27,8,39,10,130,15,127,20,24
//};

//	int len = sizeof(a)/sizeof(a[0]);
	
	for(int i=len; i>0; i--){
		
		int p=0;
		
		for(int k=1;k<i;k++){
			if(a[k]>a[p]){
				p=k;
			}
			
			int t = a[p];
			a[p]=a[i-1];
			a[i-1]=t;
		}
	}
	
	
	
	
	
	for(int i = 0; i<len; i++){
		printf("%d ",a[i]);
	}
	
	

	
	return 0;
} 
