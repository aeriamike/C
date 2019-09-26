#include<stdio.h>


int main(){
    
    long long id[1000];
    int temp[1000];
    int test[1000];
    int N;
    
    scanf("%d", &N);
    
    
    for(int i=0; i<N; ++i){
    	int number[N];
        scanf("%lld %d %d", &id[i], &temp[i], &test[i]);
        //printf("%d %d %d",id[i],temp[i],test[i]);
        
    }
    
	int find;
	scanf("%d",&find);
	while(find--){
		int ftemp;
		scanf("%d", &ftemp);
		for(int i=0; i<N; i++){
			if(temp[i]==ftemp){
				printf("%lld %d\n",id[i],test[i]);
			}
		}
	}
    
  
    return 0;
}
