#include <stdio.h>

int main()
{
	int num,num2;
	
	scanf("%d",&num);
	printf("%d\n",num);
	
	
	if(num<0){
		printf("fu ");
	}
	
	
	while(num>10 || num<-10){
		num2=num%10;
		
		
		if(num2==0){
			printf("Áã ");
		}else if(num2==1){
			printf("yi " );
		
		}else if(num2==2){
			printf("er ");
		
		}else if(num2==3){
			printf("san ");
		
		}else if(num2==4){
			printf("si ");
		
		}else if(num2==5){
			printf("wu ");

		}else if(num2==6){
			printf("liu ");
		
		}else if(num2==7){
			printf("qi ");
		
		}else if(num2==8){
			printf("ba ");
		
		}else if(num2==9){
			printf("jiu");
		
		}
		num=num/10;
	}
	

  
  if(num>-10 || num<10){
  	if(num==0){
			printf("ling ");
		}else if(num==1){
			printf("yi " );
		
		}else if(num==2){
			printf("er ");
		
		}else if(num==3){
			printf("san ");
		
		}else if(num==4){
			printf("si ");
		
		}else if(num==5){
			printf("wu ");

		}else if(num==6){
			printf("liu ");
		
		}else if(num==7){
			printf("qi ");
		
		}else if(num==8){
			printf("ba ");
		
		}else if(num==9){
			printf("jiu");
		
		}
  }
  		
  return 0;
}

