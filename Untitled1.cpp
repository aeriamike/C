#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>
int main(void)
{
  /*int num,num2,num3;
  int count = 1;
  
  scanf("%d",&num);
  int wow=100000;
  while(num > 9)
  {
   num3=num%10;
   printf("%d\n",num3);
   num =num/10;
   count=count+1;
   
   
   num2=num2+num3*wow;
   wow=wow/10;
   
   printf("%d\n",num2);
  }
  num2=num2+num;
  
 printf("%d\n",num);
 printf("%d\n",count); 
 printf("%d\n",num2);
 
 */
 
 /*int num, count;
 scanf("%d",&num);
 printf("%d\n",num);
 count = 0;
   
 while (num>0){
 	num = num/10;
 	count = count + 1;
 }
 
 printf("%d\n",count);*/
 
 /*int num2, count2;
 scanf("%d",&num2);
 count2 = 1;
 if (num2>999){
 	count2 = 4;
 }else if(num2>99){
 	count2 = 3;
 }else if(num2>9){
 	count2 = 2;
}
 printf("%d",count2);
 */
 
 
/*int num2, count2;
scanf("%d",&num2);

if (num2>1 && num2<9){
 	count2 = 1;
 }else if(num2>10 && num2<99){
 	count2 = 2;
 }else if(num2>100 && num2<999){
 	count2 = 3;
}else if(num2>1000 && num2<9999){
 	count2 = 4;
 }
 printf("%d",count2);*/
 /*
 int x;
 int n = 0;
 
 scanf("%d", &x);
 
 n++;
 x /=10;
 while(x>0){
 	n++;
 	x/=10;
 }
 printf("%d\n", n);
 
 int s;
 int m = 0;
 scanf("%d",&s);
 while(s>0){
 	m++;
 	s /= 10;
 }
 printf("%d\n",m);
 */
 /*
 int x;
 int n = 0;
 scanf("%d",&x);
 
 n++;
 x /= 10;
 while (x>0){
 	
 	printf("x=%d, n=%d\n", x, n);
 	n++;
 	x/=10;
 	
 }
 
 printf("%d\n",n);
*/ 
/* 
 
 int x;
 scanf("%d",&x);
 int n = 0;
 do{
 	x /= 10;
 	n++;
 	printf("x=%d ",x);
 	printf("n=%d\n",n);
 
 }while(x>0);
 printf("%d",n);
 
return 0;

*/
/*
  int x=0;
  int ret = 0;
  
  scanf("%d", &x);
  int t = x;
  while(x>1){
  	x /=2;
  	ret ++;
  }
  printf("%d %d",t, ret);
  */
  /*
  int count = 100;
  while(count>0){

  	printf("%d\n",count);
  	count --;
  	
  }
  printf("Blast off!\n");*/
/*
  srand(time(0));
  int number = rand()%100+1;
  int count= 0;
  int a =0;
  printf("Print a number between 1 and 100. ");
  do{
  	scanf("%d",&a);
  	count++;
  	if(a>number){
  		printf("too much.");
	  }else if (a<number){
	  	printf("too less.");
	  }
  }while(a!=number);
  printf("You got it. You used %d times to get the answer. \n", count);
*/

	int sum = 0, count = 0;
	int num;
	float result;
	scanf("%d",&num);
	
		while(num!=-1){
			if(num!=-1){
			sum=sum+num;
			count=count+1;
			printf("The sum for now is %d\n",sum);		
			printf("The count for now is %d\n",count);
			result = (float)(sum)/(count);
			scanf("%d",&num);	
			}else{
				result = (float)(sum)/(count);
			}
			
			}
				

	
	printf("The average result is %.2f\n",result);
	
return 0;
}















