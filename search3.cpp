#include<stdio.h>
#include<stdlib.h>
	int search(int key, int a[], int len){
		int left=0;
		int right = len-1;
		int ret=0;
		
		while(left<=right){
			int mid = (left+right)/2;
			
			if(a[mid]==key){
				ret=mid;
				break;
			}else if(a[mid]>key){
				right = mid-1;
			}else{
				left=mid+1;
			}
		}
		return ret;
	}

int main(){
	
	int amount[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int k = 14;
	int r = search(k,amount,sizeof(amount)/sizeof(amount[0]));	
	printf("%d\n",r);
	return 0;
}
