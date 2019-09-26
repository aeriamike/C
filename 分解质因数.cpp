#include<stdio.h>
int main(){
	int num;
	int pn=2;
	
	scanf("%d",&num);	
	printf("%d=",num);
	
	while(num!=1){
		if(num==2 ||num==3 ||num==5 ||num==7 ){
			printf("%d",num);
			num=1;	
		}else{
			if(num%pn==0){
			num=num/pn;
		}
		else{
			pn=pn+1;
			num=num/pn;	
		}
	
		printf("%dx",pn);
	
		}
		
		
	}
//	printf(" \n");
//	printf("%d",num);
	
	return 0;
	
}
