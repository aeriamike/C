#include<stdio.h>
#include<math.h>
int main()
{
   int m,n,sum=0,num=0,pns=0,sqnum,i;
   
   scanf("%d %d",&m,&n);
 
   while(pns<=n){
   	num=num+1;
   	sqnum=sqrt(num);
   	for(i=2;i<=sqnum;i++){
   		if(num%i==0){
   			break;
		   }
	   }
	   
	if(i>sqnum && num!=1){
		printf("%d is a prime number.\n",num);
		pns = pns+1;
		printf("The pns is %d.\n",pns);  
		
		if(pns>=m && pns<=n){
			sum=sum+num;
			printf("The sum is %d.\n",sum);
		}	
		
	}else{
	printf("%d is not a prime number.\n",num);
	}	
		
   
   }
   printf("The total sum is %d.\n",sum);
   return 0;  	
}
