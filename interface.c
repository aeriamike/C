#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    

typedef struct rationalT{
	int num;
	int den;
}rat;

/*
rationalT addRational(rationalT,rationalT);
rationalT mulitpluRational(rationalT,rationalT);
rationalT getRational();
*/


int addRational(rat a, rat b){
	printf("%d/%d\n",a.num,a.den);
	printf("%d/%d\n",b.num,b.den);
	int res1;
	int res2;
	res1 = (a.num+b.den)*(b.num*a.den);
	res2 = a.den*b.den;
	printf("%d/%d\n",res1,res2);
	
}

int main(){
	int choice;
	int a, b, result_num, result_den;
	
	
	printf("This program adds or multiplies a list of rational numbers.\n");
	printf("Do you want to perfrom sum(0) or product(1)?\n");
	
	scanf("%d",&choice);

	
	if(choice == 0){
	
		
		int num = 0;
		int den = 0;
		
		printf("You chose addition. Please key in rational numbers and end with a 0.\n");
		//scanf("%d/%d",&a,&b);
		int k=1;
		rat a, b;
		scanf("%d/%d",&a.num,&a.den);
		scanf("%d/%d",&b.num,&b.den);
		
		while(k<10){
		
		addRational(a, b);
		scanf("%d/%d",&a.num,&a.den);
		k++;
		/*
		if (num==0 && den == 0){
			num = a;
			den = b;
			
		}else{
			num = (num*b)+(a*den);
			den = den*b;
			printf("%d/%d\n",num,den);
		}
		
		*/
	//	scanf("%d/%d",&a,&b);
		
		}
		result_num=num;
		result_den=den;
	
		
		
	
	}else if (choice==1){
		int num = 1;
		int den = 1;
		printf("You chose multiplication. Please key in rational numbers and end with a 0.\n");
		
		//scanf("%d/%d",&a,&b);
		
		while(scanf("%d/%d",&a,&b),a!=0){
		
		printf("%d/%d\n",a,b);
		num = num*a;
		den = den*b;
		
		printf("%d/%d\n",num,den);

		//scanf("%d/%d",&a,&b);
		}
		result_num=num;
		result_den=den;
	
	
		
		
	}else{
		printf("ERROR CHOICE");
	}
	
	//printf("semi result: %d/%d\n",result_num,result_den);
	
	int minVal;
	int aa=1;
	minVal = result_num<result_den?result_num:result_den;
	//printf("samllest among num and den: %d\n",minVal);
	
	int ii=2;	
	while(ii<=minVal)	{
		if(result_num%ii==0 && result_den%ii==0){
			aa=ii;
		}
		ii++;
	}
	//		printf("aa=%d\n",aa);
			result_num=result_num/aa;
			result_den=result_den/aa;
			if(result_num==result_den){
				printf("Final result is %d/%d\n",result_num,result_den);
			}else{
				printf("Final result is %d/%d\n",result_num,result_den);
			}
			
			
		
}

