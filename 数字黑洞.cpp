#include <stdio.h>


int main(){
	
	int number;
	scanf("%d",&number);
	//printf("%d\n",number);
	
	int inc;
	int dec;
	
	inc = number;
	dec = number;
	

	if((number/1000==number/100%10)&&(number/1000==number/10%10)&&(number/1000==number%10)){
		printf("%04d - %04d = 0000\n", number, number);
		return 0;
	}
	
	int res;
	
	while(res!=6174){
			int seper[4];
	seper[0]=number/1000;
	seper[1]=number/100%10;
	seper[2]=number/10%10;
	seper[3]=number%10;
	
/*	for(int i=0;i<4;i++){
			printf("%d ",seper[i]);
		}printf("\n");
	*/
	int index;
	int temp; 
	
	for(int k=0;k<4-1;k++){
		index=k;
		
		for(int i=k+1;i<4;i++){
			if(seper[i]<seper[index]){
				index=i;
			}
		}
		
		temp=seper[index];
		seper[index]=seper[k];
		seper[k]=temp;
		
	/*	for(int i=0;i<4;i++){
		printf("%d",seper[i]);
			}
			printf("\n");
	*/	
	}
	
	/*for(int i=0;i<4;i++){
		printf("%d",seper[i]);
	}
	*/
	
	
	inc = seper[0] * 1000 + seper[1] * 100 + seper[2] * 10 + seper[3];  
    dec = seper[3] * 1000 + seper[2] * 100 + seper[1] * 10 + seper[0];  
//	printf("%d\n",inc);
//	printf("%d\n",dec);	
	
	
	
	
		res=dec-inc;
		printf("%04d - %04d = %04d\n", dec, inc, res);
		number=res;
		
	}
	
	
	return 0;
	
	
	
}
