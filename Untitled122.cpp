#include <stdio.h>
#include <math.h>

int main(){
	int x, y, z,num, count=0;
	scanf("%d", &x);
	num=x;
	if (x<=100000 && x>=-100000){
		if(x==0){
			printf("ling");
		}
		while(x!=0){
		x=x/10;
		count = count + 1;
	//	printf("%d\n",x);
	//	printf("%d\n",count);		
	}
		if(num<0){
		printf("fu ");
	}
	num = abs(num);
	while(count> 1){	
		y=pow(10,(count-1));
	//	printf("count %d\n",count);	
	//	printf("y %d\n",y);	
		z = num/y;
	//	printf("into %d\n",z);	
		if(z==0){
			printf("ling ");
		}else if(z==1){
			printf("yi " );
		}else if(z==2){
			printf("er ");		
		}else if(z==3){
			printf("san ");
		}else if(z==4){
			printf("si ");
		}else if(z==5){
			printf("wu ");
		}else if(z==6){
			printf("liu ");	
		}else if(z==7){
			printf("qi ");	
		}else if(z==8){
			printf("ba ");
		}else if(z==9){
			printf("jiu ");
		}
		num=num-z*y;
		count = count - 1;
	}
	//	printf("after %d\n ",num);
	
		if(num<10 && count==1){
			if(num==0){
			printf("ling");
		}else if(num==1){
			printf("yi" );
		}else if(num==2){
			printf("er");
		}else if(num==3){
			printf("san");
		}else if(num==4){
			printf("si");
		}else if(num==5){
			printf("wu");
		}else if(num==6){
			printf("liu");
		}else if(num==7){
			printf("qi");	
		}else if(num==8){
			printf("ba");
		}else if(num==9){
			printf("jiu");
			
		}
		//break;
		}
		
	
		
	}
		
	//}
	return 0;
}
