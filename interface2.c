#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    

typedef struct rationalT{
	int num;
	int den;
}rat;



float addRational (float r1, float r2){
	//printf("%f %f\n",r1,r2);
	r2=r1+r2;
	//printf("%f\n",r2);
	return r2;
		
}

float multiplyRational (float r1, float r2){
	//printf("%f %f\n",r1,r2);
	r2 = r1*r2;
	//printf("%f\n",r2);
	return r2;
}



int getRational(float semi_result){
	printf("anc %f\n",semi_result);
	/*
	rat k;
		 k.num=(int)semi_result;
		k.den=1;
		while(semi_result != (int)semi_result ){
			k.den=k.den*10;
			semi_result = semi_result*10;
			k.num=(int)semi_result;
		} 
		printf("abc %d/%d\n",k.num,k.den);
		*/
		
		int kk=1;
		
		
		while(kk<=100000){
		
			int ss=1;
			int flag = 0;
			while(ss<=100000){
			//	printf("%d/%d\n",kk,ss);
				float damn;
				damn = kk/ss;
				//printf("%f\n",damn);
				
				if((float)kk/ss == semi_result){
				
					printf("The result is %d/%d\n",kk,ss);
					flag = 1;
					
				}
				
				ss++;
			}
			if (flag==1){
					break;
				}
			kk++;
		}
		//createRational(k.num,k.den);
	
}

int createRational(int fenzi2, int fenmu2){
//	printf("cba %d/%d\n",fenzi2,fenmu2);
	rat p;
	p.num = fenzi2;
	p.den = fenmu2;
	if(p.num<p.den){
		int temp = p.num;
		p.num = p.den;
		p.den = temp;
		
	}
	int r = 1;
	while(r){
		r=p.num%p.den;
		p.num=p.den;
		p.den=r;
	}
//	printf("asd %d %d %d\n",x,y,r);
	int res_zi, res_mu;
	res_zi = fenzi2/p.num;
	res_mu = fenmu2/p.num;
	
	PrintRational(res_zi,res_mu);


}

int PrintRational(int a, int b){
		
	if(a==b){
			printf("result: %d\n",a);
	}else{
			printf("result: %d/%d\n",a,b);
	}
}


int main(){
	rat v;
	int choice;
	rat a, b;
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
		
	/*	if (num==0 && den == 0){
			num = a;
			den = b;
			
		}else{
			num = (num*b)+(a*den);
			den = den*b;
			printf("%d/%d\n",num,den);
		}
		
	*/	
		
		
		}
	//	result_num=num;
	//	result_den=den;
	
		semi_result=r2;
		printf("abc %f\n",semi_result);
		
	
	}else if (choice==1){
		float r1 = 1;
		float r2 = 1;
		float product;
		printf("You chose multiplication. Please key in rational numbers and end with a 0.\n");
		
	//	scanf("%d/%d",&a,&b);
		
		while(scanf("%d/%d",&v.num,&v.den),v.num!=0){
			
			r1 = (float)v.num/v.den;
			
			product = multiplyRational(r1,r2);
			r2 = product;
		
		/*printf("%d/%d\n",a,b);
		num = num*a;
		den = den*b;
		
		printf("%d/%d\n",num,den);
		*/

	//	scanf("%d/%d",&a,&b);
		}
		
		semi_result=r2;
		//printf("%f\n",semi_result);
	
		
		
	}else{
		printf("ERROR CHOICE");
	}
	

	
	getRational(semi_result);

		
	
			
		
}

