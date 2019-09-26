#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    

typedef struct rationalT{
	int num;
	int den;
}rat;



float addRational (float r1, float r2){
	
	r2=r1+r2;

	return r2;
		
}

float multiplyRational (float r1, float r2){
	
	r2 = r1*r2;
	
	return r2;
}



int getRational(float semi_result){		
		int kk=1;
		while(kk<=10000000){
		
			int ss=1;
			int flag = 0;
			while(ss<=10000000){
				
				if((float)kk/ss == semi_result){
					PrintRational(kk,ss);
				
					flag = 1;
					
				}
				
				ss++;
			}
			if (flag==1){
					break;
				}
			kk++;
		}
	
	
}

int PrintRational(int a, int b){
	printf("The fraction result is %d/%d\n",a,b);
}


int main(){
	rat v;
	int choice;
	//rat a, b;
	float semi_result;
	
	
	printf("This program adds or multiplies a list of rational numbers.\n");
	printf("Do you want to perfrom sum(0) or product(1)?\n");
	
	scanf("%d",&choice);


	
	if(choice == 0){
	
		float sum;
		float r1 = 0;
		float r2 = 0;
		printf("You chose addition. Please key in rational numbers and end with a 0.\n");
		
		
		
		while(scanf("%d/%d",&v.num,&v.den),v.num!=0){
		
		r1 = (float)v.num/v.den;
		
	    sum=addRational(r1,r2);
		r2 = sum;
		
		
		}
	
		semi_result=r2;

	}else if (choice==1){
		float r1 = 1;
		float r2 = 1;
		float product;
		printf("You chose multiplication. Please key in rational numbers and end with a 0.\n");
		
		
		while(scanf("%d/%d",&v.num,&v.den),v.num!=0){
			
			r1 = (float)v.num/v.den;
			
			product = multiplyRational(r1,r2);
			r2 = product;


		}
		
		semi_result=r2;
		
	}else{
		printf("ERROR CHOICE");
	}


	getRational(semi_result);

		
/*
   int b[11] = {11,1,11,3,16,2,5,11,4,11,16};
   int b_size = sizeof(b) / sizeof(b[0]);

   print(b, b_size, "Before", "b");
   qsort(b, b_size, sizeof(b[0]), intcmp);
   print(b, b_size, "Sorted", "b");
   b_size = compact(b, b_size);
   print(b, b_size, "After", "b");
*/
	
			
		
}

