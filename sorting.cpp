#include<stdio.h>

int a[]={
	1,5,3,2,5,16,27,8,39,10,130,15,127,20,24
};

int max(int a[], int len){
	
	
	int idx = 0;
	int i;
	for(i=1;i<len;i++){
		if(a[i]>a[idx]){
			idx=i;
		}
	}
	return idx;
}

int main(void){
	
	int size = sizeof(a)/sizeof(a[0]);
	
	for(int i=size; i>0;i--){
		int idx = max(a,i);
		int t = a[idx];
		a[idx]=a[i-1];
		a[i-1]=t;
	for(int i=0;i<size;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	}
	
	
	for(int i=0;i<size;i++){
		printf("%d ", a[i]);
	}
}
