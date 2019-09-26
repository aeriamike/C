#include <stdio.h>
#include <math.h>
int main(void)
{
  int num,num2,num3;
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
  
  if(num<100000){
  	
  }
  
  num2=num2/(pow(10,(6-count)))+num;
  
 printf("%d\n",num);
 printf("%d\n",count); 
 printf("%d\n",num2);
 
 
  return 0;
}

