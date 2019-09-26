#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h> 
typedef struct rationalT{
	
	int num;
	int den;
}rat;

rat CreateRational(rat r){
	scanf("%d/%d",&r.num,&r.den);
	return r;
}

rat addRational(rat r1, rat r2){
	rat aa;
	aa.num=((r1.num*r2.den)+(r2.num*r1.den));
	aa.den=((r1.den*r2.den));
	return aa;
}

rat multiplyRational(rat r1, rat r2){
	
	rat bb;
	bb.num=((r1.num*r2.num));
	bb.den=((r1.den*r2.den));
	return bb;
}

rat GetRational(rat r){
	
	//	printf("for now, it is %d/%d\n",r.num,r.den);
		int minVal;
		int aa=1;
		int ii=2;
		minVal = r.num<r.den?r.num:r.den;
		while(ii<=minVal){
			if(r.num%ii==0 && r.den%ii==0){
			aa=ii;
		}
		ii++;
	}

			r.num=r.num/aa;
			r.den=r.den/aa;
		return r;	
			
		/*	if(r.num==r.den){
				printf("Final result is %d/%d\n",r.num,r.den);
			}else{
				printf("Final result is %d/%d\n",r.num,r.den);
			}
			*/
			
}

rat PrintRational(rat r){
	if(r.num==r.den){
				printf("Final result is %d\n",r.num);
			}else{
				printf("Final result is %d/%d\n",r.num,r.den);
			}
}

int main(){
	
	int choice;
	printf("This program adds or multiplies a list of rational numbers\n");
	printf("Do you want to perform addition(0) or multiplication(1)?\n");
	
	scanf("%d",&choice);
	

	if (choice==0){
		
	
	//	rat sum;
		
		printf("You chose addition. Please key in rational numbers and end with a 0.\n");
			
		rat a, b;
		a=CreateRational(a);
		b=CreateRational(b);
		//scanf("%d/%d",&a.num,&a.den);
		//scanf("%d/%d",&b.num,&b.den);
	
		while(a.num!=0){
			b=addRational(a,b);
		//	printf("b is %d/%d\n",b.num,b.den);
			a=CreateRational(a);
			//scanf("%d/%d",&a.num,&a.den);
		}
		
			//printf("for now, it is %d/%d\n",b.num,b.den);
			b=GetRational(b);
			PrintRational(b);
			
		
		
	}else if(choice==1){
			printf("You chose multiplication. Please key in rational numbers and end with a 0.\n");
			
			
				rat a, b;
				a=CreateRational(a);
				b=CreateRational(b);
				//scanf("%d/%d",&a.num,&a.den);
				//scanf("%d/%d",&b.num,&b.den);
				
		while(a.num!=0){
			b=multiplyRational(a,b);
			//printf("b is %d/%d\n",b.num,b.den);
			a=CreateRational(a);
			//scanf("%d/%d",&a.num,&a.den);
		}
		//	printf("for now, it is %d/%d\n",b.num,b.den);
	     	b=GetRational(b);
			PrintRational(b);
		
	}else{
		printf("Unknown command. Please re-enter again.\n");
		
	}
	
	
	return 0;
	
}
