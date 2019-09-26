#include <stdio.h>
#include <math.h>

int main(){
	int x, y, z,num, count=0;
	//("Enter x:");
	scanf("%d", &x);
	num=x;
	while(x > 10 || x < -10){
		x=x/10;
		count = count + 1;
	//	printf("%d\n",x);
	//	printf("%d\n",count);
		
	}
	
		if(x<0){
		printf("fu ");
	}
	
	
	
	while(count>=0){
		
		
		y=pow(10,count);
		//printf("y %d\n",y);
		
		z = num/y;
		
		//printf("into %d\n",z);
		
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
	
	//int hour1, minute1;
    //int hour2, minute2;
    //int diff,haha,lala;
    //int dm, dh;
    //scanf("%d %d", &hour1, &minute1);
    //scanf("%d %d", &hour2, &minute2);
    
    //diff=(hour2*60+minute2)-(hour1*60+minute1);
    //haha=diff/60;
    //lala=diff%60;
    //printf("The time difference is %d hour and %d minutes.\n", haha, lala);
    
    //dm=minute2-minute1;
    //dh=hour2-hour1;
    //if(dm<0){
    //	dm=60+dm;
    //	dh=dh-1;
	//}
    
    //printf("The time difference is %d hour and %d minutes.\n", dh, dm);
    
    
    //int price =0;
    //int bill = 0;
    
    //printf("What is the price? ");
    //scanf("%d",&price); 
    //printf("What is the amount? ");
    //scanf("%d",&bill);
    
    //if(bill>=price){
    //	printf("Your change is:      %d.\n", bill - price);
	//}else{
	//	printf("You do not have enough money.\n");
	//}
	//printf("Thank you for using this service.\n");
	
	//int a = 7;
	//int b = 4;
	//int c = 7;
	
	//if(a==c)
	//	if(a<b)
	//		printf("It is all good\n");
	//else
	//	printf("Oh naw\n");
		 
	//return 0;
	
	//int a = 2;
	//switch(a){
	//	case 1:
	//		printf("Thank you for using this service.\n");
	//		break;
			
	/*	case 2:
			printf("Thank you for using this service.\n");
			
			
		case 3:
			printf("Thank you for using this service.\n");
			
			
			
		case 4:
			printf("Thank you for using this service.\n");	

		case 5:
			printf("Thank you for using this service.\n");
	printf("Thank you for using this service.\n");			
		
*/
			
	
} 
